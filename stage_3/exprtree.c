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
        temp->type = INTE;
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
        temp->type=type;
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
    else if(nodetype==IFST)
    {
        temp->op = malloc(sizeof(char));
        temp->varname=NULL;
        temp->type=0;
        temp->nodetype=IFST;
        temp->op = NULL;
        temp->left = l;
        temp->right = r;
    }
      else if(nodetype==WHILEST)
    {
        temp->op = malloc(sizeof(char));
        temp->varname=NULL;
        temp->type=0;
        temp->nodetype=WHILEST;
        temp->op = NULL;
        temp->left = l;
        temp->right = r;
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
       
            if(strcmp(t->op,"+")==0)
                        {r1=codeGen(t->left,targetfile,1);
                        r2=codeGen(t->right,targetfile,1);
                        fprintf(targetfile," ADD R%d,R%d\n",r1,r2);
                        pos++;
                        freeReg();
                        return(min(r1,r2));
                        }
            if(strcmp(t->op,"-")==0)
                        {r1=codeGen(t->left,targetfile,1);
                        r2=codeGen(t->right,targetfile,1);
                        fprintf(targetfile," SUB R%d,R%d\n",r1,r2);
                        pos++;
                        freeReg();
                        return(min(r1,r2));
                       }
            if(strcmp(t->op,"*")==0)
                        {r1=codeGen(t->left,targetfile,1);
                        r2=codeGen(t->right,targetfile,1);
                        fprintf(targetfile," MUL R%d,R%d\n",r1,r2);
                        pos++;
                        freeReg();
                        return(min(r1,r2));
                        }
            if(strcmp(t->op,"/")==0)
                        {r1=codeGen(t->left,targetfile,1);
                        r2=codeGen(t->right,targetfile,1);
                        fprintf(targetfile," DIV R%d,R%d\n",r1,r2);
                        pos++;
                        freeReg();
                        return(min(r1,r2));
                        } 
            if(strcmp(t->op,"=")==0)
                        {r1=codeGen(t->left,targetfile,0);
                        r2=codeGen(t->right,targetfile,1);
                        fprintf(targetfile," MOV [%d],R%d\n",r1,r2);
                        pos++;
                        freeReg();
                        return(min(r1,r2));
                        }
            if(strcmp(t->op,"<")==0)
                        {r1=codeGen(t->left,targetfile,1);
                        r2=codeGen(t->right,targetfile,1);
                        fprintf(targetfile," LT R%d,R%d\n",r1,r2);
                        pos++;
                        freeReg();
                        return(min(r1,r2));
                        }
            if(strcmp(t->op,"<=")==0)
                        {r1=codeGen(t->left,targetfile,1);
                        r2=codeGen(t->right,targetfile,1);
                        fprintf(targetfile," LE R%d,R%d\n",r1,r2);
                        pos++;
                        freeReg();
                        return(min(r1,r2));
                        }
            if(strcmp(t->op,">")==0)
                        {r1=codeGen(t->left,targetfile,1);
                        r2=codeGen(t->right,targetfile,1);
                        fprintf(targetfile," GT R%d,R%d\n",r1,r2);
                        pos++;
                        freeReg();
                        return(min(r1,r2));
                        }
            if(strcmp(t->op,">=")==0)
                        {r1=codeGen(t->left,targetfile,1);
                        r2=codeGen(t->right,targetfile,1);
                        fprintf(targetfile," GE R%d,R%d\n",r1,r2);
                        pos++;
                        freeReg();
                        return(min(r1,r2));
                        }
            if(strcmp(t->op,"==")==0)
                        {r1=codeGen(t->left,targetfile,1);
                        r2=codeGen(t->right,targetfile,1);
                        fprintf(targetfile," EQ R%d,R%d\n",r1,r2);
                        pos++;
                        freeReg();
                        return(min(r1,r2));
                        }
           if(strcmp(t->op,"!=")==0)
                        {r1=codeGen(t->left,targetfile,1);
                        r2=codeGen(t->right,targetfile,1);
                        fprintf(targetfile," NE R%d,R%d\n",r1,r2);
                        pos++;
                        freeReg();
                        return(min(r1,r2));
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
      r2=getReg();
      r1=codeGen(t->left,targetfile,1);
     
     
     //printf("%s",LabelTable[0].name);
     fprintf(targetfile," MOV R%d,1\n",r2);
     fprintf(targetfile," PUSH R0\n");
     fprintf(targetfile," MOV R0,R%d\n",r1);
     pos=pos+3;
     l=getlabel();
     fprintf(targetfile,"L%d:\n",l);
     LabelTable[l].address=pos*2+2060;
     //printf("%d\n",l);
     sprintf(name,"L%d",l);
     strcpy(LabelTable[l].name,name);
     fwrite(&LabelTable[l],sizeof(struct labeltable),1,label_file);
     fprintf(targetfile," MUL R%d,2\n",r2);
     fprintf(targetfile," SUB R0,1\n");
     fprintf(targetfile," JNZ R0,L%d\n",l);
     pos=pos+3;
     freeReg();
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
  
  
  if(t->nodetype==IFST)
  {
      int l_if=0,l_end=0;
      char name[2];
      l_if=getlabel();  
      l_end=getlabel();                                                                 //L_END:                
      r1=codeGen(t->left,targetfile,1);
      fprintf(targetfile," JZ R%d,L%d\n",r1,l_if);
      pos++;
      freeReg();
      r2=codeGen(t->right->left,targetfile,1);
      fprintf(targetfile," JMP L%d\n",l_end);
      pos++;
                                                                                        //SLIST                
      LabelTable[l_if].address=pos*2+2060;                                                   //JMP L_WHILE        
      sprintf(name,"L%d",l_if);
      strcpy(LabelTable[l_if].name,name);
      fwrite(&LabelTable[l_if],sizeof(struct labeltable),1,label_file);
      fprintf(targetfile,"L%d:\n",l_if);      
      if(t->right->right)
      {
          printf("adfasdf");
          r2=codeGen(t->right->right,targetfile,1);  
      }
      LabelTable[l_end].address=pos*2+2060;                                                   //JMP L_WHILE        
      sprintf(name,"L%d",l_end);
      strcpy(LabelTable[l_end].name,name);
      fwrite(&LabelTable[l_end],sizeof(struct labeltable),1,label_file);
      fprintf(targetfile,"L%d:\n",l_end);  
  }
  if(t->nodetype==WHILEST)
  {
      int l_while=0,l_end=0;   //WHILE AND END LABEL
      char name[2];                                                                             //L_WHILE:
      l_while=getlabel();                                                                       //CONDI        
      l_end=getlabel();                                                                         //JZ L_END                      
      fprintf(targetfile,"L%d:\n",l_while);                                                           //SLIST                
      LabelTable[l_while].address=pos*2+2060;                                                   //JMP L_WHILE        
      sprintf(name,"L%d",l_while);                                                              //L_END:                
      strcpy(LabelTable[l_while].name,name);
      fwrite(&LabelTable[l_while],sizeof(struct labeltable),1,label_file);
      r1=codeGen(t->left,targetfile,1);
      fprintf(targetfile," JZ R%d,L%d\n",r1,l_end);
      pos++;
      freeReg();
      r2=codeGen(t->right,targetfile,1);
      fprintf(targetfile," JMP L%d\n",l_while);
      pos++;
      fprintf(targetfile,"L%d:\n",l_end);
      LabelTable[l_end].address=pos*2+2060;
      sprintf(name,"L%d",l_end);
      strcpy(LabelTable[l_end].name,name);
      fwrite(&LabelTable[l_end],sizeof(struct labeltable),1,label_file);
      


  }
  return;
}

int evaluate(struct tnode *t)
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
  if(t->nodetype==IFST)
  {
      evaluate(t->left);
      evaluate(t->right->left);
      if(t->right->right)
      evaluate(t->right->right);
  }
  if(t->nodetype==WHILEST)
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
  if(t->nodetype==NUMBER)
  {
      return;
  }
  return;
}