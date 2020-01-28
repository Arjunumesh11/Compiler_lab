FILE *label_file;
int reg[20];

#define INTE 0
#define BOLE 1

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

#define No_labels 10

typedef struct tnode{
 int val; 
 int type;
 char *varname;
 int nodetype;
 char *op;
 struct tnode *left,*right; 
 }tnode;

struct labeltable
{
    int address;
    char name[5];
};
	
struct tnode* CreateTree(int val,int type,char *varname,int nodetype,char *op,tnode *l,tnode *r);
struct tnode* makePowerNode(struct tnode* l);

int min(int a,int b);
int max(int a,int b);
int getReg();
void freeReg();
int getlabel();
int codeGen(struct tnode *t,FILE *targetfile,int option); //option 1 = dereferencing 0 = return address
int evaluate(struct tnode *t);