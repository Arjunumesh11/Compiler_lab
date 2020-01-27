#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int labels=0;
int pos=0;  //position of commands
struct labeltable LabelTable[No_labels];


struct tnode* CreateTree(int val,int type,char *varname,int nodetype,char *op,tnode *l,tnode *r)
{
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    if(nodetype==NUMBER)
    {
        temp->op = NULL;
        temp->varname=NULL;
        temp->nodetype=NUMBER;
        temp->val = val;
        temp->type = NUMBER;
        temp->left = NULL;
        temp->right = NULL; 
    }
    else if(nodetype==VARIABLE)
    {
        temp->varname = malloc(sizeof(char));
        temp->op = NULL;
        temp->varname=varname;
        temp->nodetype=VARIABLE;
        temp->val = 0;
        temp->left = NULL;
        temp->right = NULL;
    }
    else if(nodetype==POWER)
    {
        temp->op = NULL;
        temp->varname=NULL;
        temp->nodetype=POWER;
        temp->val = 0;
        temp->type = 0;
        temp->left = l;   
    }
    else if(nodetype==OPERATOR)
    {
        temp->op = malloc(sizeof(char));
        temp->varname=NULL;
        temp->nodetype=OPERATOR;
        temp->op = op;
        temp->left = l;
        temp->right = r;
    }   
    else if(nodetype==READ0)
    {
        temp->op = NULL;
        temp->varname=NULL;
        temp->nodetype=READ0;
        temp->val = 0;
        temp->type = 0;
        temp->left = l;
        temp->right = NULL;
    }
    else if(nodetype==CONNECTOR)
    {
        temp->op = NULL;
        temp->varname=NULL;
        temp->nodetype=CONNECTOR;
        temp->val = 0;
        temp->type = 0;
        temp->left = l;
        temp->right = r;        
    }
    else if(nodetype==WRITE0)
    {
        temp->op = NULL;
        temp->varname=NULL;
        temp->nodetype=WRITE0;
        temp->val = 0;
        temp->type = 0;
        temp->left = l;
        temp->right = NULL;
    }
    return temp;
}
int allocatemem(char *var)
{
    return (int)(var+4096-'a');
}

int min(int a,int b)
{
    if(a>b)
    return b;
    else 
    return a;
}
int max(int a,int b)
{
    if(a>b)
    return a;
    else 
    return b;
}
int getReg()
{
    int min=30;
    for(int i=0;i<20;i++)
        {
            if(!reg[i])
            {
                reg[i]=1;
                return i;
            }
        }
}
int getlabel()
{
    return labels++;
}
void freeReg()
{
    for(int i=19;i>=0;i--)
    {
        if(reg[i])
        {
            reg[i]=0;
            return;
        }
    }
}
int codeGen(struct tnode *t,FILE *targetfile,int option) //option 1 = dereferencing 0 = return address 
{
    int r1,r2;
  if(t->nodetype==CONNECTOR)
  {
      codeGen(t->left,targetfile,0);
      codeGen(t->right,targetfile,0);
  }
  if(t->nodetype==OPERATOR)
  {
       switch(*(t->op)){
            case '+' :  r1=codeGen(t->left,targetfile,1);
                        r2=codeGen(t->right,targetfile,1);
                        fprintf(targetfile," ADD R%d,R%d\n",r1,r2);
                        pos++;
                        freeReg();
                        return(min(r1,r2));
                        break;
            case '-' :  r1=codeGen(t->left,targetfile,1);
                        r2=codeGen(t->right,targetfile,1);
                        fprintf(targetfile," SUB R%d,R%d\n",r1,r2);
                        pos++;
                        freeReg();
                        return(min(r1,r2));
                        break;
            case '*' :  r1=codeGen(t->left,targetfile,1);
                        r2=codeGen(t->right,targetfile,1);
                        fprintf(targetfile," MUL R%d,R%d\n",r1,r2);
                        pos++;
                        freeReg();
                        return(min(r1,r2));
                        break;
            case '/' :  r1=codeGen(t->left,targetfile,1);
                        r2=codeGen(t->right,targetfile,1);
                        fprintf(targetfile," DIV R%d,R%d\n",r1,r2);
                        pos++;
                        freeReg();
                        return(min(r1,r2));
                        break;
            case '=' :  r1=codeGen(t->left,targetfile,0);
                        r2=codeGen(t->right,targetfile,1);
                        fprintf(targetfile," MOV [%d],R%d\n",r1,r2);
                        pos++;
                        freeReg();
                        return(min(r1,r2));
                        break;
            
        }
  }
  if(t->nodetype==WRITE0)
  {
     r1=codeGen(t->left,targetfile,0);
    if(t->left->nodetype==VARIABLE)
    {
        fprintf(targetfile," PUSH R1\n");
        fprintf(targetfile," PUSH R0\n");
        fprintf(targetfile," MOV R1, \"Write\"\n");
        fprintf(targetfile," PUSH R1\n");
        fprintf(targetfile," MOV R1, -2\n");
        fprintf(targetfile," PUSH R1\n");
        fprintf(targetfile," MOV R0,[%d]\n",r1);
        fprintf(targetfile," PUSH R0\n");
        fprintf(targetfile," PUSH R1\n");
        fprintf(targetfile," PUSH R1\n");
        fprintf(targetfile," CALL 0\n");
        fprintf(targetfile," POP R0\n");
        fprintf(targetfile," POP R1\n");
        fprintf(targetfile," POP R1\n");
        fprintf(targetfile," POP R1\n");
        fprintf(targetfile," POP R1\n");
        fprintf(targetfile," POP R0\n");
        fprintf(targetfile," POP R1\n");
        pos=pos+18;
    }
    if((t->left->nodetype==NUMBER)||(t->left->nodetype==OPERATOR))
    {
        fprintf(targetfile," MOV R0,R%d\n",r1);
        fprintf(targetfile," PUSH R1\n");
        fprintf(targetfile," PUSH R0\n");
        fprintf(targetfile," MOV R1, \"Write\"\n");
        fprintf(targetfile," PUSH R1\n");
        fprintf(targetfile," MOV R1, -2\n");
        fprintf(targetfile," PUSH R1\n");
        fprintf(targetfile," PUSH R0\n");
        fprintf(targetfile," PUSH R1\n");
        fprintf(targetfile," PUSH R1\n");
        fprintf(targetfile," CALL 0\n");
        fprintf(targetfile," POP R0\n");
        fprintf(targetfile," POP R1\n");
        fprintf(targetfile," POP R1\n");
        fprintf(targetfile," POP R1\n");
        fprintf(targetfile," POP R1\n");
        fprintf(targetfile," POP R0\n");
        fprintf(targetfile," POP R1\n");
        pos=pos+18;
    }
  }
  if(t->nodetype==POWER)
  {
      int l=0;
      char name[2];
     r1=codeGen(t->left,targetfile,1);
     r2=getReg();
     
     //printf("%s",LabelTable[0].name);
     fprintf(targetfile," MOV R%d,1\n",r2);
     fprintf(targetfile," PUSH R0\n");
     fprintf(targetfile," MOV R0,R%d\n",r1);
     pos=pos+3;
     fprintf(targetfile,"L%d:\n",l);
     l=getlabel();
     LabelTable[l].address=pos*2+2060;
     //printf("%d\n",l);
     sprintf(name,"L%d",l);
     strcpy(LabelTable[l].name,name);
     fwrite(&LabelTable[l],sizeof(struct labeltable),1,label_file);
     fprintf(targetfile," MUL R%d,2\n",r2);
     fprintf(targetfile," SUB R0,1\n");
     fprintf(targetfile," JNZ R0,L%d\n",l);
     pos=pos+3;
     return r2;

  }
  if(t->nodetype==READ0)
  {
      r1=codeGen(t->left,targetfile,0);
      fprintf(targetfile," PUSH R1\n");
      fprintf(targetfile," PUSH R0\n");
      fprintf(targetfile," MOV R1, \"Read\"\n");
      fprintf(targetfile," PUSH R1\n");
      fprintf(targetfile," MOV R1,-1\n");
      fprintf(targetfile," PUSH R1\n");
      fprintf(targetfile," MOV R0,%d\n",r1);
      fprintf(targetfile," PUSH R0\n");
      fprintf(targetfile," PUSH R1\n");
      fprintf(targetfile," PUSH R1\n");
      fprintf(targetfile," CALL 0\n");
      fprintf(targetfile," POP R0\n");
      fprintf(targetfile," POP R1\n");
      fprintf(targetfile," POP R1\n");
      fprintf(targetfile," POP R1\n");
      fprintf(targetfile," POP R1\n");
      fprintf(targetfile," POP R0\n");
      fprintf(targetfile," POP R1\n");
      pos=pos+18;
  }
  if(t->nodetype==NUMBER)
      {
        r1=getReg();
        fprintf(targetfile," MOV R%d,%d\n",r1,t->val);
        pos++;
        return r1;
      }
  if(t->nodetype==VARIABLE)
      {
          if(option==1)
        {r1=allocatemem(t->varname);
        r2=getReg();
        fprintf(targetfile," MOV R%d,[%d]\n",r2,r1);
        pos++;
        return r2;}
        if(option==0)
        {r1=allocatemem(t->varname);
        return r1;}
      }
  return;
}

/*int evaluate(struct tnode *t)
{
    if(t==NULL)
        return;
    printf(" %d \n",t->nodetype);
  if(t->nodetype==CONNECTOR)
  {
      evaluate(t->left);
      evaluate(t->right);
  }
  if(t->nodetype==OPERATOR)
  {
      evaluate(t->left);
      evaluate(t->right);
  }
  if(t->nodetype==READ0)
  {
      evaluate(t->left);
  }
  if(t->nodetype==WRITE0)
  {
      evaluate(t->left);
  }
  if(t->nodetype==LeafNode)
  {
      return;
  }
  return;
}*/