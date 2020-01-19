int reg[20];

typedef struct tnode{
 int val;
 int type;
 char *varname;
 int nodetype;
 char *op;
 struct tnode *left,*right; 
 }tnode;
	

struct tnode* makeLeafNodeNUM(int n);
struct tnode* makeLeafNodeVAR(char var);	
struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r);
struct tnode* makeConnectorNode(struct tnode *l,struct tnode *r);
struct tnode* makeReadNode(struct tnode* l);
struct tnode* makeWriteNode(struct tnode* l);	

int evaluate(struct tnode *t);
int min(int a,int b);
int max(int a,int b);
int getReg();
void freeReg();
int codeGen(struct tnode *t,FILE *targetfile,int option); //option 1 = dereferencing 0 = return address