#pragma once
#include <string.h>

FILE *label_file;
int reg[20];
extern int labels;
extern int pos;         //position of commands
extern int memlocation; //current memory location
extern int localmem;
extern int paramem;

#define INTE 0
#define BOLE 1
#define STRE 2
#define FUNCTION 4

#define NUMBER 1
#define VARIABLE 2
#define READ0 3
#define WRITE0 4
#define OPERATOR 5
#define CONNECTOR 6
#define POWER 7
#define IFST 8
#define WHILEST 9
#define BREAKST 10
#define CONTINUEST 11
#define DECLARATION 12  //local
#define GDECLARATION 13 //global
#define PDECLARATION 14 //parameter
#define STRI 15
#define RETURNST 16
#define FUNCALL 17
#define ARGUMENT 18
#define FUNCDEF 19

#define No_labels 100
#define start_adress 2102
struct parameter
{
    int type;
    char *name;
    struct parameter *prev;
};
struct symboltable
{
    char *name;
    int type;
    int size;
    int binding;
    struct parameter *paramlist;
    int flabel;
    struct symboltable *prev;
};
struct symboltablelist
{
    struct symboltable *val;
    struct symboltablelist *prev;
};

typedef struct tnode
{
    int val;
    int type;
    char *varname;
    int nodetype;
    char *op;
    struct tnode *left, *right;
    struct symboltable *Gsymbol;
} tnode;

struct labeltable
{
    int address;
    char name[5];
};

struct loop_counter
{
    char break_label[5];
    char continue_label[5];
    struct loop_counter *prev;
};
struct Reg_counter
{
    int *Reg;
    struct Reg_counter *prev;
};
struct symboltable *LLookup(char *name);          //search and return var info
struct symboltable *GLookup(char *name);          //search and return var info
struct symboltable *PLookup(char *name);          //search and return var info
void symbolinit(struct symboltable *SymbolTable); //intialise symbol table
struct tnode *CreateTree(int val, int type, char *varname, int nodetype, char *op, tnode *l, tnode *r, struct symboltable *table);
struct tnode *makePowerNode(struct tnode *l);

int yyerror(char const *s);
int min(int a, int b);
int max(int a, int b);
int getReg(int *Reg);
void freeReg(int *Reg);
void pushReg(int *Reg, FILE *targetfile);
void popReg(int *Reg, FILE *targetfile);
void popArgument(struct parameter *paramlist, FILE *targetfile);
int getlabel();
int codeGen(struct tnode *t, FILE *targetfile, int option); //option 1 = value 0 = return adress
int evaluate(struct tnode *t);
int Gallocatemem(int n);
int Pallocatemem(int n);
int Lallocatemem(int n, FILE *targetfile);

void help_viewtable(struct symboltable *table, int scope);
void help_viewReg(int *Reg);

extern struct labeltable LabelTable[No_labels];
extern struct loop_counter *LOOP_COUNTER_HEAD, *LOOP_COUNTER_TEMP;
extern struct symboltable *Symbol_Table, *temptable, *GLOBAL_TABLE;
extern struct symboltablelist *LOCAL_TABLE, *PARAM_TABLE, *TEMP_tablelist;
extern struct parameter *Temp_Parameter, *V_Parameter;
extern struct Reg_counter *REG_COUNTER;