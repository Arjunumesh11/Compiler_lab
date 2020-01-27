#include<stdlib.h>
#include<stdio.h>

#define NUMBER 1
#define VARIABLE 2

#define LeafNode 0
#define READ0 3
#define WRITE0 4
#define OPERATOR 5
#define CONNECTOR 6

int allocatemem(char *var)
{
    return var+4096-'a';
}
struct tnode* makeLeafNodeNUM(int n)
{
    //printf("num ");
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->op = NULL;
    temp->varname=NULL;
    temp->nodetype=NUMBER;
    temp->val = n;
    temp->type = NUMBER;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct tnode* makeLeafNodeVAR(char var)
{
   // printf("var ");
    struct tnode *temp;
    
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->varname = malloc(sizeof(char));
    temp->op = NULL;
    temp->varname=var;
    temp->nodetype=VARIABLE;
    temp->val = NULL;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r)
{
    //printf("op ");
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->op = malloc(sizeof(char));
    temp->varname=NULL;
    temp->nodetype=OPERATOR;
    *(temp->op) = c;
    temp->left = l;
    temp->right = r;
    return temp;
}

struct tnode* makeReadNode(struct tnode* l)
{
   // printf("read ");
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->op = NULL;
    temp->varname=NULL;
    temp->nodetype=READ0;
    temp->val = NULL;
    temp->type = NULL;
    temp->left = l;
    temp->right = NULL;
    return temp;
}

struct tnode* makeWriteNode(struct tnode* l)
{
    //printf("write ");
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->op = NULL;
    temp->varname=NULL;
    temp->nodetype=WRITE0;
    temp->val = NULL;
    temp->type = NULL;
    temp->left = l;
    temp->right = NULL;
    return temp;

}

struct tnode* makeConnectorNode(struct tnode *l,struct tnode *r)
{
  //  printf("conn ");
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->op = NULL;
    temp->varname=NULL;
    temp->nodetype=CONNECTOR;
    temp->val = NULL;
    temp->type = NULL;
    temp->left = l;
    temp->right = r;
    return temp;
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
                        freeReg();
                        return(min(r1,r2));
                        break;
            case '-' :  r1=codeGen(t->left,targetfile,1);
                        r2=codeGen(t->right,targetfile,1);
                        fprintf(targetfile," SUB R%d,R%d\n",r1,r2);
                        freeReg();
                        return(min(r1,r2));
                        break;
            case '*' :  r1=codeGen(t->left,targetfile,1);
                        r2=codeGen(t->right,targetfile,1);
                        fprintf(targetfile," MUL R%d,R%d\n",r1,r2);
                        freeReg();
                        return(min(r1,r2));
                        break;
            case '/' :  r1=codeGen(t->left,targetfile,1);
                        r2=codeGen(t->right,targetfile,1);
                        fprintf(targetfile," DIV R%d,R%d\n",r1,r2);
                        freeReg();
                        return(min(r1,r2));
                        break;
            case '=' :  r1=codeGen(t->left,targetfile,0);
                        r2=codeGen(t->right,targetfile,1);
                        fprintf(targetfile," MOV [%d],R%d\n",r1,r2);
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
        fprintf(targetfile," PUSH R1\n PUSH R0\n MOV R1, \"Write\"\n PUSH R1\n MOV R1, -2\n PUSH R1\n MOV R0,[%d]\n PUSH R0\n PUSH R1\n PUSH R1\n CALL 0\n POP R0\n POP R1\n POP R1\n POP R1\n POP R1\n POP R0\n POP R1\n ",r1);
    }
    if((t->left->nodetype==NUMBER)||(t->left->nodetype==OPERATOR))
    {
        fprintf(targetfile," MOV R0,R%d\n",r1);
        fprintf(targetfile," PUSH R1\n PUSH R0\n MOV R1, \"Write\"\n PUSH R1\n MOV R1, -2\n PUSH R1\n PUSH R0\n PUSH R1\n PUSH R1\n CALL 0\n POP R0\n POP R1\n POP R1\n POP R1\n POP R1\n POP R0\n POP R1\n ",r1);
    }
  }
  if(t->nodetype==READ0)
  {
      r1=codeGen(t->left,targetfile,0);
      fprintf(targetfile," PUSH R1\n PUSH R0\n MOV R1, \"Read\"\n PUSH R1\n MOV R1,-1\n PUSH R1\n MOV R0,%d\n PUSH R0\n PUSH R1\n PUSH R1\n CALL 0\n POP R0\n POP R1\n POP R1\n POP R1\n POP R1\n POP R0\n POP R1\n ",r1);
  }
  if(t->nodetype==NUMBER)
      {
        r1=getReg();
        fprintf(targetfile," MOV R%d,%d\n",r1,t->val);
        return r1;
      }
  if(t->nodetype==VARIABLE)
      {
          if(option==1)
        {r1=allocatemem(t->varname);
        r2=getReg();
        fprintf(targetfile," MOV R%d,[%d]\n",r2,r1);
        return r2;}
        if(option==0)
        {r1=allocatemem(t->varname);
        return r1;}
      }
  return;
}