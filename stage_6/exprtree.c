#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "exprtree.h"

int labels = 1;
int pos = 0;            //position of commands
int memlocation = 4097; //current memory location
int localmem = 1;
int paramem = -3;
int reg_temp[20];
int junk;
int declflag;
int decltypeflag;

struct labeltable LabelTable[No_labels];
struct loop_counter *LOOP_COUNTER_HEAD = NULL, *LOOP_COUNTER_TEMP = NULL;
struct symboltable *Symbol_Table = NULL, *temptable = NULL, *GLOBAL_TABLE = NULL;
char *Cur_type = NULL;
struct symboltablelist *LOCAL_TABLE = NULL, *PARAM_TABLE = NULL, *TEMP_tablelist = NULL;
struct parameter *Temp_Parameter = NULL, *V_Parameter = NULL;
struct Reg_counter *REG_COUNTER = NULL;
struct Typetable *TYPE_TABLE;

struct symboltable *GLookup(char *name)
{
    struct symboltable *Symbol_Temp = GLOBAL_TABLE;
    while (Symbol_Temp)
    {
        if (strcmp(Symbol_Temp->name, name) == 0)
            return Symbol_Temp;
        Symbol_Temp = Symbol_Temp->prev;
    }
    return NULL;
}
struct symboltable *LLookup(char *name)
{
    if (LOCAL_TABLE == NULL)
        return NULL;
    struct symboltable *Symbol_Temp = LOCAL_TABLE->val;
    while (Symbol_Temp)
    {
        if (strcmp(Symbol_Temp->name, name) == 0)
            return Symbol_Temp;
        Symbol_Temp = Symbol_Temp->prev;
    }
    return NULL;
}
struct symboltable *PLookup(char *name)
{
    if (PARAM_TABLE == NULL)
        return NULL;
    struct symboltable *Symbol_Temp = PARAM_TABLE->val;
    while (Symbol_Temp)
    {
        if (strcmp(Symbol_Temp->name, name) == 0)
            return Symbol_Temp;
        Symbol_Temp = Symbol_Temp->prev;
    }
    return NULL;
}
struct tnode *CreateTree(int val, char *type, char *varname, int nodetype, char *op, tnode *l, tnode *r, struct symboltable *table)
{
    if (nodetype == OPERATOR)
    {
        // help_viewtypetable();

        //printf("%s", r->type);
        if (r == NULL)
        {
            if (l->type != INTE)
            {
                printf("ERROR type mismatch in operator %s %s \n", l->varname, op);
                exit(0);
            }
        }
        if (l->type && r->type)
        {
            if (strcmp(l->type, r->type))
            {
                //printf("adsf %s", r->type);
                if (strcmp(r->type, "NULL"))
                {
                    printf("ERROR type mismatch %s %s = %s %s\n", l->type, l->varname, r->type, r->varname);
                    exit(0);
                }
            }
        }
    }
    if ((nodetype == WHILEST) || (nodetype == IFST))
    {
        if (strcmp(l->type, BOLE))
        {
            printf("\nERROR type mismatch BOOL\n");
            exit(0);
        }
    }
    if (nodetype == VARIABLE)
    {
        if (strcmp(varname, "NULL"))
        {
            struct symboltable *Symbol_Temp = NULL;
            if ((Symbol_Temp = LLookup(varname)) || (Symbol_Temp = PLookup(varname)))
            {
                type = strdup(Symbol_Temp->type);
            }
            else if (Symbol_Temp = GLookup(varname))
            {
                type = strdup(Symbol_Temp->type);
            }
            if (l != NULL)
            {
                if (strcmp(l->type, INTE))
                {
                    printf("type mismatch INT\n");
                    exit(0);
                }
            }
            if (Symbol_Temp == NULL)
            {
                printf("\nERROR Variable undeclared : %s\n", varname);
                exit(0);
            }
        }
    }
    if (nodetype == FUNCALL)
    {
        struct symboltable *Symbol_Temp;
        Symbol_Temp = GLookup(varname);
        if (Symbol_Temp == NULL)
        {
            printf("\nVariable Not declared : %s", varname);
            exit(0);
        }
        type = strdup(Symbol_Temp->type);
        //printf("%s", type);
        if (arguementcheck(Symbol_Temp->paramlist, l))
        {
            printf("\nERROR CALL argument unmatched in %s", varname);
            exit(0);
        }
    }
    if ((nodetype == FUNCDEF) && (strcmp(varname, "MAIN")))
    {

        struct symboltable *Symbol_Temp;
        Symbol_Temp = GLookup(varname);
        if (Symbol_Temp == NULL)
        {
            printf("\nVariable Not declared : %s", varname);
            exit(0);
        }
        if (strcmp(Symbol_Temp->type, type))
        {
            printf("ERROR type mismatch expected %s   %s %s(...)\n", Symbol_Temp->type, type, varname);
            exit(0);
        }
        if (l == NULL)
        {
            if (Symbol_Temp->paramlist != NULL)
            {
                printf("\nERROR CALL argument unmatched in %s", varname);
                exit(0);
            }
        }
        if (l != NULL)
        {
            if (arguementcheck2(Symbol_Temp->paramlist, l->Gsymbol))
            {
                printf("\nERROR Definition argument unmatched in %s", varname);
                exit(0);
            }
        }
    }
    if (nodetype == GDECLARATION)
    {
        GLOBAL_TABLE = table;
        //help_viewtable(table, 1);
    }
    if (nodetype == DECLARATION)
    {
        LOCAL_TABLE = (struct symboltablelist *)malloc(sizeof(struct symboltablelist));
        LOCAL_TABLE->val = table;
    }
    if (nodetype == PDECLARATION)
    {
        PARAM_TABLE = (struct symboltablelist *)malloc(sizeof(struct symboltablelist));
        PARAM_TABLE->val = table;
    }
    if (nodetype == FIELD)
    {
        // help_viewtypetable();
        if (l == NULL)
        {
            struct symboltable *Symbol_Temp = NULL;
            if ((Symbol_Temp = LLookup(varname)) || (Symbol_Temp = PLookup(varname)))
            {
                type = strdup(Symbol_Temp->type);
            }
            else if (Symbol_Temp = GLookup(varname))
            {
                type = strdup(Symbol_Temp->type);
            }
            if (Symbol_Temp == NULL)
            {
                printf("\nERROR Variable undeclared : %s\n", varname);
                exit(0);
            }
        }
        else
        {
            struct Typetable *typet = TLookup(l->type);
            struct Fieldlist *fieldt = FLookup(typet, varname);
            if (fieldt->type == NULL)
            {
                //help_viewtypetable();
                type = TLookup(fieldt->typename)->name;
                if (type == NULL)
                {
                    printf("ERROR Undeclared variable : %s", fieldt->typename);
                }
                // printf("%s %s \n", type, varname);
            }
            else
                type = fieldt->type->name;
        }
    }
    struct tnode *temp;
    temp = (struct tnode *)malloc(sizeof(struct tnode));

    temp->op = op;
    temp->varname = varname;
    temp->nodetype = nodetype;
    temp->val = val;
    temp->type = type;
    temp->left = l;
    temp->right = r;
    temp->Gsymbol = table;

    return temp;
}
int Gallocatemem(int n)
{
    int mem = 0;
    mem = memlocation;
    memlocation = memlocation + n;
    return mem;
}
int Lallocatemem(int n, FILE *targetfile)
{
    int temp = localmem;
    localmem = localmem + n;
    fprintf(targetfile, " PUSH R19\n");
    pos++;
    return temp;
}
int Pallocatemem(int n)
{
    int temp = paramem;
    paramem = paramem - n;
    return temp;
}
int min(int a, int b)
{
    if (a > b)
        return b;
    else
        return a;
}
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int getReg(int *Reg)
{
    int min = 30;
    for (int i = 0; i < 20; i++)
    {
        if (!Reg[i])
        {
            Reg[i] = 1;
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
void freeReg(int *Reg)
{
    for (int i = 19; i >= 0; i--)
    {
        if (Reg[i])
        {
            Reg[i] = 0;
            return;
        }
    }
}
void pushReg(int *Reg, FILE *targetfile)
{
    for (int i = 0; i < 20; i++)
    {
        if (Reg[i])
        {
            fprintf(targetfile, " PUSH R%d\n", i);
            pos++;
        }
    }
    return;
}
void popReg(int *Reg, FILE *targetfile)
{
    for (int i = 19; i >= 0; i--)
    {
        if (Reg[i])
        {
            fprintf(targetfile, " POP R%d\n", i);
            pos++;
        }
    }
    return;
}
void popArgument(struct parameter *paramlist, FILE *targetfile)
{
    while (paramlist)
    {
        fprintf(targetfile, " POP R19\n");
        pos++;
        paramlist = paramlist->prev;
    }
}
int codeGen(struct tnode *t, FILE *targetfile, int option) //option 1 = value 0 = return address
{
    int r1, r2, r3;
    if (t == NULL)
    {
        return 0;
    }
    if (t->nodetype == CONNECTOR)
    {
        if (t->left)
        {
            junk = codeGen(t->left, targetfile, 0);
        }
        if (t->right)
        {
            junk = codeGen(t->right, targetfile, 0);
        }
        return 0;
    }
    if (t->nodetype == OPERATOR)
    {

        if (strcmp(t->op, "+") == 0)
        {
            r1 = codeGen(t->left, targetfile, 1);
            r2 = codeGen(t->right, targetfile, 1);
            fprintf(targetfile, " ADD R%d,R%d\n", r1, r2);
            pos++;
            freeReg(REG_COUNTER->Reg);
            return (min(r1, r2));
        }
        if (strcmp(t->op, "-") == 0)
        {
            r1 = codeGen(t->left, targetfile, 1);
            r2 = codeGen(t->right, targetfile, 1);
            fprintf(targetfile, " SUB R%d,R%d\n", r1, r2);
            pos++;
            freeReg(REG_COUNTER->Reg);
            return (min(r1, r2));
        }
        if (strcmp(t->op, "*") == 0)
        {
            r1 = codeGen(t->left, targetfile, 1);
            r2 = codeGen(t->right, targetfile, 1);
            fprintf(targetfile, " MUL R%d,R%d\n", r1, r2);
            pos++;
            freeReg(REG_COUNTER->Reg);
            return (min(r1, r2));
        }
        if (strcmp(t->op, "/") == 0)
        {
            r1 = codeGen(t->left, targetfile, 1);
            r2 = codeGen(t->right, targetfile, 1);
            fprintf(targetfile, " DIV R%d,R%d\n", r1, r2);
            pos++;
            freeReg(REG_COUNTER->Reg);
            return (min(r1, r2));
        }
        if (strcmp(t->op, "=") == 0)
        {
            r1 = codeGen(t->left, targetfile, 0);
            r2 = codeGen(t->right, targetfile, 1);
            fprintf(targetfile, " MOV [R%d],R%d\n", r1, r2);
            pos++;
            freeReg(REG_COUNTER->Reg);
            freeReg(REG_COUNTER->Reg);
            return 0;
        }
        if (strcmp(t->op, "<") == 0)
        {
            r1 = codeGen(t->left, targetfile, 1);
            r2 = codeGen(t->right, targetfile, 1);
            fprintf(targetfile, " LT R%d,R%d\n", r1, r2);
            pos++;
            freeReg(REG_COUNTER->Reg);
            return (min(r1, r2));
        }
        if (strcmp(t->op, "<=") == 0)
        {
            r1 = codeGen(t->left, targetfile, 1);
            r2 = codeGen(t->right, targetfile, 1);
            fprintf(targetfile, " LE R%d,R%d\n", r1, r2);
            pos++;
            freeReg(REG_COUNTER->Reg);
            return (min(r1, r2));
        }
        if (strcmp(t->op, ">") == 0)
        {
            r1 = codeGen(t->left, targetfile, 1);
            r2 = codeGen(t->right, targetfile, 1);
            fprintf(targetfile, " GT R%d,R%d\n", r1, r2);
            pos++;
            freeReg(REG_COUNTER->Reg);
            return (min(r1, r2));
        }
        if (strcmp(t->op, ">=") == 0)
        {
            r1 = codeGen(t->left, targetfile, 1);
            r2 = codeGen(t->right, targetfile, 1);
            fprintf(targetfile, " GE R%d,R%d\n", r1, r2);
            pos++;
            freeReg(REG_COUNTER->Reg);
            return (min(r1, r2));
        }
        if (strcmp(t->op, "==") == 0)
        {
            r1 = codeGen(t->left, targetfile, 1);
            r2 = codeGen(t->right, targetfile, 1);
            fprintf(targetfile, " EQ R%d,R%d\n", r1, r2);
            pos++;
            freeReg(REG_COUNTER->Reg);
            return (min(r1, r2));
        }
        if (strcmp(t->op, "!=") == 0)
        {
            r1 = codeGen(t->left, targetfile, 1);
            r2 = codeGen(t->right, targetfile, 1);
            fprintf(targetfile, " NE R%d,R%d\n", r1, r2);
            pos++;
            freeReg(REG_COUNTER->Reg);
            return (min(r1, r2));
        }
    }
    if (t->nodetype == WRITE0)
    {
        r1 = codeGen(t->left, targetfile, 0);
        if (t->left->nodetype == VARIABLE || t->left->nodetype == FIELD)
        {
            r2 = getReg(REG_COUNTER->Reg);
            fprintf(targetfile, " MOV R%d, \"Write\"\n", r2);
            pos++;
            fprintf(targetfile, " PUSH R%d\n", r2);
            pos++;
            fprintf(targetfile, " MOV R%d, -2\n", r2);
            pos++;
            fprintf(targetfile, " PUSH R%d\n", r2);
            pos++;
            fprintf(targetfile, " MOV R%d,[R%d]\n", r2, r1);
            pos++;
            fprintf(targetfile, " PUSH R%d\n", r2);
            pos++;
            fprintf(targetfile, " PUSH R1\n");
            pos++;
            fprintf(targetfile, " PUSH R1\n");
            pos++;
            fprintf(targetfile, " CALL 0\n");
            pos++;
            fprintf(targetfile, " POP R0\n");
            pos++;
            fprintf(targetfile, " POP R1\n");
            pos++;
            fprintf(targetfile, " POP R1\n");
            pos++;
            fprintf(targetfile, " POP R1\n");
            pos++;
            fprintf(targetfile, " POP R1\n");
            pos++;
            freeReg(REG_COUNTER->Reg);
        }
        if ((t->left->nodetype == NUMBER) || (t->left->nodetype == OPERATOR) || (t->left->nodetype == STRI))
        {
            fprintf(targetfile, " MOV R0,R%d\n", r1);
            pos++;
            fprintf(targetfile, " PUSH R1\n");
            pos++;
            fprintf(targetfile, " PUSH R0\n");
            pos++;
            fprintf(targetfile, " MOV R1, \"Write\"\n");
            pos++;
            fprintf(targetfile, " PUSH R1\n");
            pos++;
            fprintf(targetfile, " MOV R1, -2\n");
            pos++;
            fprintf(targetfile, " PUSH R1\n");
            pos++;
            fprintf(targetfile, " PUSH R0\n");
            pos++;
            fprintf(targetfile, " PUSH R1\n");
            pos++;
            fprintf(targetfile, " PUSH R1\n");
            pos++;
            fprintf(targetfile, " CALL 0\n");
            pos++;
            fprintf(targetfile, " POP R0\n");
            pos++;
            fprintf(targetfile, " POP R1\n");
            pos++;
            fprintf(targetfile, " POP R1\n");
            pos++;
            fprintf(targetfile, " POP R1\n");
            pos++;
            fprintf(targetfile, " POP R1\n");
            pos++;
            fprintf(targetfile, " POP R0\n");
            pos++;
            fprintf(targetfile, " POP R1\n");
            pos++;
        }
        freeReg(REG_COUNTER->Reg);
        return 0;
    }
    if (t->nodetype == POWER)
    {
        int l = 0;
        char name[2];
        r2 = getReg(REG_COUNTER->Reg);
        r1 = codeGen(t->left, targetfile, 1);

        //printf("%s",LabelTable[0].name);
        fprintf(targetfile, " MOV R%d,1\n", r2);
        pos++;
        fprintf(targetfile, " PUSH R0\n");
        pos++;
        fprintf(targetfile, " MOV R0,R%d\n", r1);
        pos++;
        l = getlabel();
        fprintf(targetfile, "L%d:\n", l);
        LabelTable[l].address = pos * 2 + start_adress;
        //printf("%d\n",l);
        snprintf(name, 6, "L%d", l);
        strcpy(LabelTable[l].name, name);
        fwrite(&LabelTable[l], sizeof(struct labeltable), 1, label_file);
        fprintf(targetfile, " MUL R%d,2\n", r2);
        pos++;
        fprintf(targetfile, " SUB R0,1\n");
        pos++;
        fprintf(targetfile, " JNZ R0,L%d\n", l);
        pos++;
        freeReg(REG_COUNTER->Reg);
        return r2;
    }
    if (t->nodetype == READ0)
    {
        r1 = codeGen(t->left, targetfile, 0);
        r2 = getReg(REG_COUNTER->Reg);
        fprintf(targetfile, " MOV R%d, \"Read\"\n", r2);
        pos++;
        fprintf(targetfile, " PUSH R%d\n", r2);
        pos++;
        fprintf(targetfile, " MOV R%d,-1\n", r2);
        pos++;
        fprintf(targetfile, " PUSH R%d\n", r2);
        pos++;
        fprintf(targetfile, " MOV R0,R%d\n", r1);
        pos++;
        fprintf(targetfile, " PUSH R0\n");
        pos++;
        fprintf(targetfile, " PUSH R%d\n", r2);
        pos++;
        fprintf(targetfile, " PUSH R%d\n", r2);
        pos++;
        fprintf(targetfile, " CALL 0\n");
        pos++;
        fprintf(targetfile, " POP R0\n");
        pos++;
        fprintf(targetfile, " POP R1\n");
        pos++;
        fprintf(targetfile, " POP R1\n");
        pos++;
        fprintf(targetfile, " POP R1\n");
        pos++;
        fprintf(targetfile, " POP R1\n");
        pos++;
        freeReg(REG_COUNTER->Reg);
        freeReg(REG_COUNTER->Reg);
        return 0;
    }
    if (t->nodetype == NUMBER)
    {
        r1 = getReg(REG_COUNTER->Reg);
        fprintf(targetfile, " MOV R%d,%d\n", r1, t->val);
        pos++;
        return r1;
    }
    if (t->nodetype == STRI)
    {
        r1 = getReg(REG_COUNTER->Reg);
        fprintf(targetfile, " MOV R%d,%s\n", r1, t->varname);
        pos++;
        return r1;
    }
    if (t->nodetype == VARIABLE)
    {
        struct symboltable *Symbol_Temp = NULL;
        if (strcmp(t->varname, "NULL") == 0)
        {

            r2 = getReg(REG_COUNTER->Reg);
            fprintf(targetfile, " MOV R%d,0\n", r2);
            pos++;
            return r2;
        }
        if ((Symbol_Temp = LLookup(t->varname)) || (Symbol_Temp = PLookup(t->varname)))
        {

            if (option == 1)
            {
                r1 = Symbol_Temp->binding;
                r2 = getReg(REG_COUNTER->Reg);
                r3 = getReg(REG_COUNTER->Reg);
                fprintf(targetfile, " MOV R%d,BP\n", r3);
                pos++;
                fprintf(targetfile, " ADD R%d,%d\n", r3, r1);
                pos++;
                fprintf(targetfile, " MOV R%d,[R%d]\n", r2, r3);
                pos++;
                freeReg(REG_COUNTER->Reg);
                return r2;
            }
            if (option == 0)
            {
                r1 = Symbol_Temp->binding;
                r2 = getReg(REG_COUNTER->Reg);
                fprintf(targetfile, " MOV R%d,BP\n", r2);
                pos++;
                fprintf(targetfile, " ADD R%d,%d\n", r2, r1);
                pos++;
                return r2;
            }
        }

        else if (Symbol_Temp = GLookup(t->varname))
        {
            if (Symbol_Temp == NULL)
            {
                printf("\nVariable Not declared : %s", t->varname);
                exit(0);
            }
            if (t->left == NULL)
            {
                if (option == 1)
                {
                    r1 = Symbol_Temp->binding;
                    r2 = getReg(REG_COUNTER->Reg);
                    fprintf(targetfile, " MOV R%d,[%d]\n", r2, r1);
                    pos++;
                    return r2;
                }
                if (option == 0)
                {
                    r1 = Symbol_Temp->binding;
                    r2 = getReg(REG_COUNTER->Reg);
                    fprintf(targetfile, " MOV R%d,%d\n", r2, r1);
                    pos++;
                    return r2;
                }
            }
            else
            {
                int size = t->left->val;
                if (option == 1)
                {
                    r2 = getReg(REG_COUNTER->Reg);
                    r3 = codeGen(t->left, targetfile, 1);
                    r1 = Symbol_Temp->binding;
                    fprintf(targetfile, " ADD R%d,%d\n", r3, r1);
                    pos++;
                    fprintf(targetfile, " MOV R%d,[R%d]\n", r2, r3);
                    pos++;
                    freeReg(REG_COUNTER->Reg);
                    return r2;
                }
                if (option == 0)
                {
                    r2 = getReg(REG_COUNTER->Reg);
                    r3 = codeGen(t->left, targetfile, 1);
                    r1 = Symbol_Temp->binding;
                    fprintf(targetfile, " ADD R%d,%d\n", r3, r1);
                    pos++;
                    fprintf(targetfile, " MOV R%d,R%d\n", r2, r3);
                    pos++;
                    freeReg(REG_COUNTER->Reg);

                    return r2;
                }
            }
        }

        return 0;
    }

    if (t->nodetype == IFST)
    {
        int l_if = 0, l_end = 0;
        char name[2];
        l_if = getlabel();
        l_end = getlabel(); //L_END:
        r1 = codeGen(t->left, targetfile, 1);
        fprintf(targetfile, " JZ R%d,L%d\n", r1, l_if);
        pos++;
        freeReg(REG_COUNTER->Reg);
        junk = codeGen(t->right->left, targetfile, 1);
        fprintf(targetfile, " JMP L%d\n", l_end);
        pos++;
        //SLIST
        LabelTable[l_if].address = pos * 2 + start_adress; //JMP L_WHILE
        snprintf(name, 6, "L%d", l_if);
        strcpy(LabelTable[l_if].name, name);
        fwrite(&LabelTable[l_if], sizeof(struct labeltable), 1, label_file);
        fprintf(targetfile, "L%d:\n", l_if);
        if (t->right->right)
        {
            junk = codeGen(t->right->right, targetfile, 1);
        }
        LabelTable[l_end].address = pos * 2 + start_adress; //JMP L_WHILE
        snprintf(name, 6, "L%d", l_end);
        strcpy(LabelTable[l_end].name, name);
        fwrite(&LabelTable[l_end], sizeof(struct labeltable), 1, label_file);
        fprintf(targetfile, "L%d:\n", l_end);
        return 0;
    }
    if (t->nodetype == WHILEST)
    {
        LOOP_COUNTER_TEMP = LOOP_COUNTER_HEAD;
        LOOP_COUNTER_HEAD = (struct loop_counter *)malloc(sizeof(struct loop_counter));
        LOOP_COUNTER_HEAD->prev = LOOP_COUNTER_TEMP;

        int l_while = 0, l_end = 0;                           //WHILE AND END LABEL
        char name[2];                                         //L_WHILE:
        l_while = getlabel();                                 //CONDI
        l_end = getlabel();                                   //JZ L_END
        fprintf(targetfile, "L%d:\n", l_while);               //SLIST
        LabelTable[l_while].address = pos * 2 + start_adress; //JMP L_WHILE
        snprintf(name, 5, "L%d", l_while);
        strcpy(LOOP_COUNTER_HEAD->continue_label, name); //L_END:
        strcpy(LabelTable[l_while].name, name);
        fwrite(&LabelTable[l_while], sizeof(struct labeltable), 1, label_file);
        r1 = codeGen(t->left, targetfile, 1);
        fprintf(targetfile, " JZ R%d,L%d\n", r1, l_end);
        pos++;
        freeReg(REG_COUNTER->Reg);
        snprintf(name, 6, "L%d", l_end);
        strcpy(LOOP_COUNTER_HEAD->break_label, name);
        junk = codeGen(t->right, targetfile, 1);
        fprintf(targetfile, " JMP L%d\n", l_while);
        pos++;
        fprintf(targetfile, "L%d:\n", l_end);
        LabelTable[l_end].address = pos * 2 + start_adress;
        snprintf(name, 6, "L%d", l_end);
        strcpy(LabelTable[l_end].name, name);
        fwrite(&LabelTable[l_end], sizeof(struct labeltable), 1, label_file);
        LOOP_COUNTER_HEAD = LOOP_COUNTER_HEAD->prev;
        return 0;
    }
    if (t->nodetype == BREAKST)
    {
        if (LOOP_COUNTER_HEAD == NULL)
            return 0;
        fprintf(targetfile, " JMP %s\n", LOOP_COUNTER_HEAD->break_label);
        pos++;
        return 0;
    }
    if (t->nodetype == CONTINUEST)
    {
        if (LOOP_COUNTER_HEAD == NULL)
            return 0;
        fprintf(targetfile, " JMP %s\n", LOOP_COUNTER_HEAD->continue_label);
        pos++;
        return 0;
    }
    if (t->nodetype == DECLARATION)
    {
        TEMP_tablelist = (struct symboltablelist *)malloc(sizeof(struct symboltablelist));
        // TEMP_tablelist->prev = LOCAL_TABLE;
        TEMP_tablelist->val = t->Gsymbol;
        LOCAL_TABLE = TEMP_tablelist;
        temptable = LOCAL_TABLE->val;
        while (temptable)
        {
            temptable->binding = Lallocatemem(temptable->size, targetfile);
            temptable = temptable->prev;
        }
        return 0;
    }
    if (t->nodetype == GDECLARATION)
    {

        //help_viewtable(GLOBAL_TABLE, 1);
        temptable = t->Gsymbol;
        while (temptable)
        {
            temptable->binding = Gallocatemem(temptable->size);
            temptable = temptable->prev;
        }
        return 0;
    }
    if (t->nodetype == PDECLARATION)
    {
        TEMP_tablelist = (struct symboltablelist *)malloc(sizeof(struct symboltablelist));
        TEMP_tablelist->prev = PARAM_TABLE;
        TEMP_tablelist->val = t->Gsymbol;
        PARAM_TABLE = TEMP_tablelist;
        temptable = PARAM_TABLE->val;
        while (temptable)
        {
            temptable->binding = Pallocatemem(temptable->size);
            temptable = temptable->prev;
        }
        paramem = -3;
        return 0;
    }
    if (t->nodetype == ARGUMENT)
    {
        r1 = codeGen(t->left, targetfile, 1);
        fprintf(targetfile, " PUSH R%d\n", r1);
        pos++;
        freeReg(REG_COUNTER->Reg);
        return 0;
    }
    if (t->nodetype == FUNCALL)
    {
        struct parameter *paramlist;
        memcpy(reg_temp, REG_COUNTER->Reg, sizeof(int) * 20);
        //help_viewReg(reg_temp);
        pushReg(reg_temp, targetfile);
        junk = codeGen(t->left, targetfile, 1);
        r1 = getReg(REG_COUNTER->Reg);
        fprintf(targetfile, " PUSH R%d\n", r1);
        pos++;
        struct symboltable *func_info = GLookup(t->varname);
        if (func_info == NULL)
        {
            printf("ERROR  function undeclared : %s ", t->varname);
            exit(0);
        }
        fprintf(targetfile, " CALL L%d\n", func_info->flabel);
        pos++;
        fprintf(targetfile, " POP R%d\n", r1);
        pos++;
        paramlist = func_info->paramlist;
        popArgument(paramlist, targetfile);
        popReg(reg_temp, targetfile);
        return r1;
    }
    if (t->nodetype == RETURNST)
    {
        r1 = codeGen(t->left, targetfile, 1);
        r2 = getReg(REG_COUNTER->Reg);
        fprintf(targetfile, " MOV R%d,BP\n", r2);
        pos++;
        fprintf(targetfile, " ADD R%d,-2\n", r2);
        pos++;
        fprintf(targetfile, " MOV [R%d],R%d\n", r2, r1);
        pos++;
        freeReg(REG_COUNTER->Reg);
        freeReg(REG_COUNTER->Reg);
        localmem = 1;
        fprintf(targetfile, " MOV SP,BP\n");
        pos++;
        fprintf(targetfile, " POP BP\n");
        pos++;
        fprintf(targetfile, " RET\n");
        pos++;
        return 0;
    }

    if (t->nodetype == FUNCDEF)
    {
        //help_viewtable(GLOBAL_TABLE, 1);
        struct Reg_counter *TEMP_REG_COUNTER = NULL;
        TEMP_REG_COUNTER = (struct Reg_counter *)malloc(sizeof(struct Reg_counter));
        TEMP_REG_COUNTER->Reg = (int *)malloc(sizeof(int) * 20);
        TEMP_REG_COUNTER->prev = REG_COUNTER;
        REG_COUNTER = TEMP_REG_COUNTER;
        struct symboltable *Symbol_Temp;
        char *name = malloc(sizeof(char) * 6);
        int label;
        Symbol_Temp = GLookup(t->varname);
        if (strcmp(t->varname, "MAIN") == 0)
        {
            label = 0; //main label is 0
        }

        else if (Symbol_Temp == NULL)
        {
            printf("\nFunction Not declared : %s\n", t->varname);
            exit(0);
        }
        else
        {
            label = Symbol_Temp->flabel;
        }
        fprintf(targetfile, "L%d:\n", label);
        LabelTable[label].address = pos * 2 + start_adress;
        snprintf(name, 6, "L%d", label);
        strcpy(LabelTable[label].name, name);
        fwrite(&LabelTable[label], sizeof(struct labeltable), 1, label_file);
        fprintf(targetfile, " PUSH BP\n");
        pos++;
        fprintf(targetfile, " MOV BP,SP\n");
        pos++;
        if (t->left)
        {
            junk = codeGen(t->left, targetfile, 0);
        }
        if (t->right)
        {
            junk = codeGen(t->right, targetfile, 0);
        }
        REG_COUNTER = REG_COUNTER->prev;
        return 0;
    }
    if (t->nodetype == FIELD)
    {
        if (t->left == NULL)
        {

            struct symboltable *Symbol_Temp = NULL;
            if ((Symbol_Temp = LLookup(t->varname)) || (Symbol_Temp = PLookup(t->varname)))
            {

                if (option == 1)
                {
                    r1 = Symbol_Temp->binding;
                    r2 = getReg(REG_COUNTER->Reg);
                    r3 = getReg(REG_COUNTER->Reg);
                    fprintf(targetfile, " MOV R%d,BP\n", r3);
                    pos++;
                    fprintf(targetfile, " ADD R%d,%d\n", r3, r1);
                    pos++;
                    fprintf(targetfile, " MOV R%d,[R%d]\n", r2, r3);
                    pos++;
                    freeReg(REG_COUNTER->Reg);
                }
                if (option == 0)
                {
                    r1 = Symbol_Temp->binding;
                    r2 = getReg(REG_COUNTER->Reg);
                    fprintf(targetfile, " MOV R%d,BP\n", r2);
                    pos++;
                    fprintf(targetfile, " ADD R%d,%d\n", r2, r1);
                    pos++;
                }
            }
            else if (Symbol_Temp = GLookup(t->varname))
            {
                if (Symbol_Temp == NULL)
                {
                    printf("\nVariable Not declared : %s", t->varname);
                    exit(0);
                }
                if (t->left == NULL)
                {
                    if (option == 1)
                    {
                        r1 = Symbol_Temp->binding;
                        r2 = getReg(REG_COUNTER->Reg);
                        fprintf(targetfile, " MOV R%d,[%d]\n", r2, r1);
                        pos++;
                    }
                    if (option == 0)
                    {
                        r1 = Symbol_Temp->binding;
                        r2 = getReg(REG_COUNTER->Reg);
                        fprintf(targetfile, " MOV R%d,%d\n", r2, r1);
                        pos++;
                    }
                }
            }
            Cur_type = strdup(Symbol_Temp->type);
            return r2;
        }
        else
        {
            r2 = getReg(REG_COUNTER->Reg);
            r1 = codeGen(t->left, targetfile, 1);
            struct Typetable *Type_temp = TLookup(Cur_type);
            struct Fieldlist *Field_temp = FLookup(Type_temp, t->varname);
            if (Field_temp->type)
                Cur_type = strdup(Field_temp->type->name);
            fprintf(targetfile, " ADD R%d,%d\n", r1, Field_temp->fieldIndex);
            pos++;
            if (option == 1)
            {
                fprintf(targetfile, " MOV R%d,[R%d]\n", r2, r1);
                pos++;
                freeReg(REG_COUNTER->Reg);
                return r2;
            }
            if (option == 0)
            {
                fprintf(targetfile, " MOV R%d,R%d\n", r2, r1);
                pos++;
                freeReg(REG_COUNTER->Reg);
                return r2;
            }
        }
    }
    if (t->nodetype == ALOC)
    {
        memcpy(reg_temp, REG_COUNTER->Reg, sizeof(int) * 20);
        pushReg(reg_temp, targetfile);
        r2 = getReg(REG_COUNTER->Reg);
        fprintf(targetfile, " MOV R19,\"Alloc\"\n");
        pos++;
        fprintf(targetfile, " PUSH R19\n");
        pos++;
        fprintf(targetfile, " MOV R0,8\n");
        pos++;
        fprintf(targetfile, " PUSH R19\n");
        pos++;
        fprintf(targetfile, " PUSH R19\n");
        pos++;
        fprintf(targetfile, " PUSH R19\n");
        pos++;
        fprintf(targetfile, " PUSH R%d\n", r2);
        pos++;
        fprintf(targetfile, " CALL 0\n");
        pos++;
        fprintf(targetfile, " POP R%d\n", r2);
        pos++;
        fprintf(targetfile, " POP R19\n");
        pos++;
        fprintf(targetfile, " POP R19\n");
        pos++;
        fprintf(targetfile, " POP R19\n");
        pos++;
        fprintf(targetfile, " POP R19\n");
        pos++;
        popReg(reg_temp, targetfile);
        return r2;
    }
    if (t->nodetype == INIT)
    {
        memcpy(reg_temp, REG_COUNTER->Reg, sizeof(int) * 20);
        pushReg(reg_temp, targetfile);
        fprintf(targetfile, " MOV R19,\"intialize\"\n");
        pos++;
        fprintf(targetfile, " PUSH R19\n");
        pos++;
        fprintf(targetfile, " PUSH R19\n");
        pos++;
        fprintf(targetfile, " PUSH R19\n");
        pos++;
        fprintf(targetfile, " PUSH R19\n");
        pos++;
        fprintf(targetfile, " PUSH R19\n");
        pos++;
        fprintf(targetfile, " CALL 0\n");
        pos++;
        fprintf(targetfile, " POP R19\n");
        pos++;
        fprintf(targetfile, " POP R19\n");
        pos++;
        fprintf(targetfile, " POP R19\n");
        pos++;
        fprintf(targetfile, " POP R19\n");
        pos++;
        fprintf(targetfile, " POP R19\n");
        pos++;
        popReg(reg_temp, targetfile);
    }
}
int evaluate(struct tnode *t)
{
    if (t == NULL)
        return 0;
    printf("\nnode type : %d \n", t->nodetype);
    if (t->nodetype == CONNECTOR)
    {
        evaluate(t->left);
        evaluate(t->right);
    }
    if (t->nodetype == OPERATOR)
    {
        evaluate(t->left);
        evaluate(t->right);
    }
    if (t->nodetype == IFST)
    {
        evaluate(t->left);
        evaluate(t->right->left);
        if (t->right->right)
            evaluate(t->right->right);
    }
    if (t->nodetype == WHILEST)
    {
        evaluate(t->left);
        evaluate(t->right);
    }
    if (t->nodetype == READ0)
    {
        evaluate(t->left);
    }
    if (t->nodetype == WRITE0)
    {
        evaluate(t->left);
    }
    if (t->nodetype == NUMBER)
    {
        return 0;
    }
    if (t->nodetype == DECLARATION)
    {
        help_viewtable(t->Gsymbol, 0);
    }
    if (t->nodetype == GDECLARATION)
    {
        help_viewtable(t->Gsymbol, 1);
    }
    if (t->nodetype == PDECLARATION)
    {
        help_viewtable(t->Gsymbol, 2);
    }
    return 0;
}

void help_viewtable(struct symboltable *table, int scope)
{
    if (scope == 1)
        printf("Golbal ");
    else if (scope == 2)
        printf("Parameter ");
    else
        printf("local ");
    printf("Table view : \n");
    struct symboltable *temptable;
    temptable = table;
    while (temptable)
    {
        printf("\n name : %s type : %s size : %d binding : %d flabel : %d", temptable->name, temptable->type, temptable->size, temptable->binding, temptable->flabel);
        temptable = temptable->prev;
    }
}

void help_viewReg(int *Reg)
{
    printf("\n REG: ");
    for (int i = 0; i < 20; i++)
    {
        if (Reg[i])
            printf("%d", i);
    }
}

int arguementcheck(struct parameter *parameters, struct tnode *l)
{
    int flag = 0;
    if (l == NULL && parameters == NULL)
        return 0;
    if ((l != NULL && parameters == NULL) || (l == NULL && parameters != NULL))
        return 1;
    if (l->nodetype == CONNECTOR)
    {
        flag = arguementcheck(parameters, l->right);
        if (flag == 1 || flag == 0)
            return flag;
        parameters = parameters->prev;
        flag = arguementcheck(parameters, l->left);
        if (flag == 1 || flag == 0)
            return flag;
        parameters = parameters->prev;
    }
    if (l->nodetype == ARGUMENT)
    {
        if (strcmp(parameters->type, l->type))
        {
            printf("%s %s : %s %s", parameters->type, parameters->name, l->type, l->varname);
            return 1;
        }
    }
    if (parameters == NULL)
        return 0;
    return 2;
}
int arguementcheck2(struct parameter *parameter1, struct symboltable *symboltable1)
{
    while (parameter1 || symboltable1)
    {
        if ((parameter1 == NULL) && (symboltable1 != NULL))
        {
            return 1;
        }
        if ((symboltable1 == NULL) && (parameter1 != NULL))
        {
            return 1;
        }
        if (strcmp(parameter1->type, symboltable1->type))
            return 1;
        parameter1 = parameter1->prev;
        symboltable1 = symboltable1->prev;
    }
    return 0;
}
void help_viewtypetable()
{
    struct Typetable *TABLE = TYPE_TABLE;
    struct Fieldlist *temp_field;
    printf("\n Type Table \n");
    while (TABLE)
    {
        printf("\n    %s size : %d ", TABLE->name, TABLE->size);
        temp_field = TABLE->fields;
        if (temp_field)
        {
            printf("\n     fields : \n");
            while (temp_field)
            {
                printf("         %s index %d \n", TABLE->fields->name, TABLE->fields->fieldIndex);
                temp_field = temp_field->next;
            }
        }
        TABLE = TABLE->next;
    }
    printf("END");
}
void TypeTableCreate()
{
    struct Typetable *temp_TYPE_TABLE;
    temp_TYPE_TABLE = TInstall("int", 1, NULL);
    TYPE_TABLE = temp_TYPE_TABLE;
    temp_TYPE_TABLE->next = TInstall("bool", 1, NULL);
    temp_TYPE_TABLE = temp_TYPE_TABLE->next;
    temp_TYPE_TABLE->next = TInstall("str", 1, NULL);
}
struct Typetable *TInstall(char *name, int size, struct Fieldlist *fields)
{
    struct Typetable *temp_table = (struct Typetable *)malloc(sizeof(struct Typetable));
    temp_table->name = name;
    temp_table->size = size;
    temp_table->fields = fields;
    temp_table->next = NULL;
    return temp_table;
}
struct Typetable *TLookup(char *name)
{
    struct Typetable *temp_table = TYPE_TABLE;
    while (temp_table)
    {
        if (strcmp(temp_table->name, name) == 0)
            return temp_table;
        temp_table = temp_table->next;
    }
    return NULL;
}
struct Fieldlist *FLookup(struct Typetable *type, char *name)
{
    if (type == NULL)
        return NULL;
    struct Fieldlist *temp_field;
    temp_field = type->fields;
    while (temp_field)
    {
        if (strcmp(name, temp_field->name) == 0)
            return temp_field;
        temp_field = temp_field->next;
    }
    return NULL;
}
int GetSize(struct Typetable *type)
{
    return type->size;
}