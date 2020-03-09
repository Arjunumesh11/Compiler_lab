FILE *label_file;
int reg[20];

#define INTE 0
#define BOLE 1
#define STRE 2

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
#define DECLARATION 12
#define STRI 13

#define No_labels 100

struct symboltable
{
    char *name;
    int type;
    int size;
    int binding;
    struct symboltable *prev;
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

struct symboltable *Lookup(char *name);           //search and return var info
void symbolinit(struct symboltable *SymbolTable); //intialise symbol table
struct tnode *CreateTree(int val, int type, char *varname, int nodetype, char *op, tnode *l, tnode *r, struct symboltable *table);
struct tnode *makePowerNode(struct tnode *l);

int min(int a, int b);
int max(int a, int b);
int getReg();
void freeReg();
int getlabel();
int codeGen(struct tnode *t, FILE *targetfile, int option); //option 1 = dereferencing 0 = return address
int evaluate(struct tnode *t);
