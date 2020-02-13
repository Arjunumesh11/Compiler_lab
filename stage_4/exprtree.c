#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int labels=0;
int pos=0;              //position of commands
int memlocation=4097;   //current memory location

struct labeltable LabelTable[No_labels];
struct loop_counter *LOOP_COUNTER_HEAD=NULL,*LOOP_COUNTER_TEMP=NULL;
struct symboltable *Symbol_Table=NULL,*temptable=NULL;


struct symboltable *Lookup(char *name)
{
    struct symboltable *Symbol_Temp = Symbol_Table;
    while(Symbol_Temp)
    {
        printf("%s",Symbol_Temp->name);
        if(strcmp(Symbol_Temp->name,name)==0)
        return Symbol_Temp;
        Symbol_Temp = Symbol_Temp->prev;
    }
    return NULL;
}

struct tnode* CreateTree(int val,int type,char *varname,int nodetype,char *op,tnode *l,tnode *r,struct symboltable* table)
{
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
       
        temp->op = op;
        temp->varname=varname;
        temp->nodetype=nodetype;
        temp->val = val;
        temp->type = type;
        temp->left = l;
        temp->right = r;
        temp->Gsymbol=table; 

    return temp;
}
int allocatemem(int n)
{
    int mem=0;
    mem=memlocation;
    memlocation=memlocation+n;
    return mem;
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
        printf("Run time error : NO REG AVAILABLE");
        return -1;
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
    int r1,r2,r3;
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
                        fprintf(targetfile," MOV [R%d],R%d\n",r1,r2);
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
     r2=getReg();
    if(t->left->nodetype==VARIABLE)
    {
        //fprintf(targetfile," PUSH R1\n");
        //fprintf(targetfile," PUSH R0\n");
        fprintf(targetfile," MOV R%d, \"Write\"\n",r2);
        fprintf(targetfile," PUSH R%d\n",r2);
        fprintf(targetfile," MOV R%d, -2\n",r2);
        fprintf(targetfile," PUSH R%d\n",r2);
        fprintf(targetfile," MOV R%d,[R%d]\n",r2,r1);
        fprintf(targetfile," PUSH R%d\n",r2);
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
        freeReg();
        pos=pos+16;
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
      r2=getReg();
      //fprintf(targetfile," PUSH R1\n");
      //fprintf(targetfile," PUSH R0\n");
      fprintf(targetfile," MOV R%d, \"Read\"\n",r2);
      fprintf(targetfile," PUSH R%d\n",r2);
      fprintf(targetfile," MOV R%d,-1\n",r2);
      fprintf(targetfile," PUSH R%d\n",r2);
      fprintf(targetfile," MOV R0,R%d\n",r1);
      fprintf(targetfile," PUSH R0\n");
      fprintf(targetfile," PUSH R%d\n",r2);
      fprintf(targetfile," PUSH R%d\n",r2);
      fprintf(targetfile," CALL 0\n");
      fprintf(targetfile," POP R0\n");
      fprintf(targetfile," POP R1\n");
      fprintf(targetfile," POP R1\n");
      fprintf(targetfile," POP R1\n");
      fprintf(targetfile," POP R1\n");
      fprintf(targetfile," POP R0\n");
      fprintf(targetfile," POP R1\n");
      pos=pos+16;
      freeReg();
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
          struct symboltable *Symbol_Temp;
          Symbol_Temp=Lookup(t->varname);
          if(Symbol_Temp==NULL)
          {
              printf("\nVariable Not declared ");
              exit(0);
          }
        if(t->left==NULL)
        {
            if(option==1)
            {
                r1=Symbol_Temp->binding;
                r2=getReg();
                fprintf(targetfile," MOV R%d,[%d]\n",r2,r1);
                pos++;
                return r2;
            }
            if(option==0)
            {
                r1=Symbol_Temp->binding;
                r2=getReg();
                fprintf(targetfile," MOV R%d,%d\n",r2,r1);
                pos++;
                return r2;
            }
        }
        else
        {
            int size=t->left->val;
            r3=codeGen(t->left,targetfile,1);
            if(option==1)
            {
                r1=Symbol_Temp->binding;
                r2=getReg();
                fprintf(targetfile," ADD R%d,%d\n",r3,r1);
                fprintf(targetfile," MOV R%d,[R%d]\n",r2,r3);
                pos++;
                pos++;
                return r2;
            }
            if(option==0)
            {
                r1=Symbol_Temp->binding;
                r2=getReg();
                fprintf(targetfile," ADD R%d,%d\n",r3,r1);
                fprintf(targetfile," MOV R%d,R%d\n",r2,r3);
                pos++;
                pos++;
                return r2;
            }
        }
        
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
      LOOP_COUNTER_TEMP=LOOP_COUNTER_HEAD;
      LOOP_COUNTER_HEAD=(struct loop_counter *)malloc(sizeof(struct loop_counter));
      LOOP_COUNTER_HEAD->prev=LOOP_COUNTER_TEMP;

      int l_while=0,l_end=0;   //WHILE AND END LABEL
      char name[2];                                                                             //L_WHILE:
      l_while=getlabel();                                                                       //CONDI        
      l_end=getlabel();                                                                        //JZ L_END                      
      fprintf(targetfile,"L%d:\n",l_while);                                                           //SLIST                
      LabelTable[l_while].address=pos*2+2060;                                                   //JMP L_WHILE        
      sprintf(name,"L%d",l_while);
      strcpy(LOOP_COUNTER_HEAD->continue_label,name);                                                              //L_END:                
      strcpy(LabelTable[l_while].name,name);
      fwrite(&LabelTable[l_while],sizeof(struct labeltable),1,label_file);
      r1=codeGen(t->left,targetfile,1);
      fprintf(targetfile," JZ R%d,L%d\n",r1,l_end);
      sprintf(name,"L%d",l_end);
      strcpy(LOOP_COUNTER_HEAD->break_label,name);
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
      LOOP_COUNTER_HEAD=LOOP_COUNTER_HEAD->prev;


  }
  if(t->nodetype==BREAKST)
  {
      if(LOOP_COUNTER_HEAD==NULL)
        return 0;
      fprintf(targetfile," JMP %s\n",LOOP_COUNTER_HEAD->break_label);
      pos++;
      return 0;  
  }
  if(t->nodetype==CONTINUEST)
  {
      if(LOOP_COUNTER_HEAD==NULL)
        return 0;
      fprintf(targetfile," JMP %s\n",LOOP_COUNTER_HEAD->continue_label);
      pos++; 
      return 0; 
  }
  if(t->nodetype==DECLARATION)
  {
       Symbol_Table=t->Gsymbol;
       temptable=Symbol_Table;
       while(temptable)
       {
           temptable->binding=allocatemem(temptable->size);
           temptable=temptable->prev;
       }
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