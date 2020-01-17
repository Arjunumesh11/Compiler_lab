#include "exprtree.h"
#include "exprtree.c"
#include<stdlib.h>
#include<stdio.h>
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
int reg[20];
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
int codeGen(struct tnode *t,FILE *targetfile){
    int r1,r2;
    if(t->op == NULL)
    {
        r1=getReg();
        fprintf(targetfile," MOV R%d,%d\n",r1,t->val);
        return r1;
    }
    else{
        switch(*(t->op)){
            case '+' :  r1=codeGen(t->left,targetfile);
                        r2=codeGen(t->right,targetfile);
                        //printf("gDD R%d,R%d\n",r1,r2);
                        fprintf(targetfile," ADD R%d,R%d\n",r1,r2);
                        freeReg();
                        return(min(r1,r2));
                        break;
            case '-' :  r1=codeGen(t->left,targetfile);
                        r2=codeGen(t->right,targetfile);
                        fprintf(targetfile," SUB R%d,R%d\n",r1,r2);
                        freeReg();
                        return(min(r1,r2));
                        break;
            case '*' :  r1=codeGen(t->left,targetfile);
                        r2=codeGen(t->right,targetfile);
                        fprintf(targetfile," MUL R%d,R%d\n",r1,r2);
                        freeReg();
                        return(min(r1,r2));
                        break;
            case '/' :  r1=codeGen(t->left,targetfile);
                        r2=codeGen(t->right,targetfile);
                        fprintf(targetfile," DIV R%d,R%d\n",r1,r2);
                        freeReg();
                        return(min(r1,r2));
                        break;
        }
    }
}