%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "exprtree.h"
	//#include "exprtree.c"
	int yylex(void);
	int labels;
	int r1,decltypeflag;
	char *type_flag;
	FILE *target_file,*yyin,*f;
	struct symboltable *temp_table,*G_TABLE_temp,*G_TABLE,*temp_paratable,*G_PARATABLE;
	struct Typetable *temptypetable;
	struct Typetable *TYPE_TABLE;
    struct Fieldlist *tempfieldlist,*tempfield;
	int Index=0,size=0;
	char *name_type,*name,*yytext;
%}
%union{
	char* name;
	struct tnode *no;
}
%type<no> Field BEGIN0 END GDeclaration FuncBlock Parameters FuncList MainBlock Body Slist Stmt NUM InputStmt Retstmt argument arguments OutputStmt AsgStmt READ WRITE expr Ifstmt Whilestmt BREAK CONTINUE Declarations DECL ENDDECL
%type<name>	Type INT STR VAR
%token ALLOC  INTIALIZE RETURN MAIN READ WRITE TYPE ENDTYPE NULL0 POW VAR PLUS MINUS MUL DIV BEGIN0 END NUM EQUAL GRT LST GRE LSE NEQUAL EEQUAL IF THEN ENDIF ENDWHILE DO ELSE WHILE BREAK CONTINUE DECL ENDDECL INT STR
%nonassoc  GRT LST GRE LSE NEQUAL EEQUAL
%left PLUS MINUS
%left MUL DIV
%%
Program      : TypeDefBlock GDeclaration FuncList MainBlock	{codeGen($4, target_file, 0);}
			 | TypeDefBlock GDeclaration MainBlock			{codeGen($3, target_file, 0);}
			 | GDeclaration FuncList MainBlock				{codeGen($3, target_file, 0);}
			 | GDeclaration MainBlock						{codeGen($2, target_file, 0);}
			 | MainBlock									{codeGen($1, target_file, 0);}			
			 ;
MainBlock    : INT MAIN '(' ')' '{'Declarations Body'}' {$$=CreateTree(0,0,"MAIN",FUNCDEF,NULL,$6,$7,NULL);}
		  	 ;
FuncList     : FuncList FuncBlock	{codeGen($2, target_file, 0);}
		  	 | FuncBlock	{codeGen($1, target_file, 0);}
		  	 ;
		  
FuncBlock    : Type VAR '(' Parameters ')' '{' Declarations Body '}'	{$$=CreateTree(0,strdup($1),$2,FUNCDEF,NULL,$4,CreateTree(0,0,NULL,CONNECTOR,NULL,$7,$8,NULL),NULL);}
		  	 ;


GDeclaration : DECL GDeclList ENDDECL { 
										G_TABLE_temp=G_TABLE;
										while(G_TABLE_temp)
										{
											G_TABLE_temp=G_TABLE_temp->prev;
										}
										$$=CreateTree(0,0,NULL,GDECLARATION,NULL,NULL,NULL,G_TABLE);
										codeGen($$, target_file, 0);
										G_TABLE=NULL;
										G_TABLE_temp=NULL;
									  } 
			 | DECL ENDDECL			 { $$=CreateTree(0,0,NULL,GDECLARATION,NULL,NULL,NULL,NULL);}
			 ;

GDeclList 	 : GDeclList GDecl
										{
											temp_table=G_TABLE;
											if(G_TABLE==NULL)
											{
												G_TABLE=G_TABLE_temp;
											}
											else
											{
												while(temp_table->prev)
												{
													temp_table=temp_table->prev;
												}
												temp_table->prev=G_TABLE_temp;
											}
											G_TABLE_temp=NULL;
										}
			 |GDecl						{
											temp_table=G_TABLE;
											if(G_TABLE==NULL)
											{
												G_TABLE=G_TABLE_temp;
											}
											else
											{
												while(temp_table->prev)
												{
													temp_table=temp_table->prev;
												}
												temp_table->prev=G_TABLE_temp;
											}
											G_TABLE_temp=NULL;
										}	
		     ;
TypeDefBlock  : TYPE TypeDefList ENDTYPE {}                                             
              ;

TypeDefList   : TypeDefList TypeDef		{	
											temptypetable=TYPE_TABLE;
				  							while(temptypetable->next)
											  {
												  temptypetable=temptypetable->next;
											  }
											temptypetable->next=TInstall(name,0,tempfield);
											tempfield=NULL;
										}
              | TypeDef					{
				  							
											temptypetable=TYPE_TABLE;
				  							while(temptypetable->next)
											  {
												  temptypetable=temptypetable->next;
											  }
											temptypetable->next=TInstall(name,0,tempfield);
											tempfield=NULL;
			  							}
              ;

TypeDef       : VAR '{' FieldDeclList '}'   {name=strdup($1);Index=0;}
              ;

FieldDeclList : FieldDeclList FieldDecl {
											tempfieldlist->next=(struct Fieldlist*)malloc(sizeof(struct Fieldlist));
											tempfieldlist=tempfieldlist->next;	
											tempfieldlist->name=strdup(name);
											tempfieldlist->type=TLookup(type_flag);
											if(tempfield->type==NULL)
											{
												printf("ERROR TYPE not found %s",type_flag);
												exit(0);
											}
											tempfieldlist->typename=strdup(type_flag);
											
											tempfieldlist->fieldIndex=Index;
											name=NULL;type_flag=NULL;
											Index++;
										}
              | FieldDecl				{	
				  							tempfield=(struct Fieldlist*)malloc(sizeof(struct Fieldlist));
											tempfield->name=strdup(name);
											tempfield->type=TLookup(type_flag);
											tempfield->typename=strdup(type_flag);
											if(tempfield->type==NULL)
											{
												printf("ERROR TYPE not found %s",type_flag);
												exit(0);
											}
											tempfield->fieldIndex=Index;
											tempfieldlist=tempfield;
											name=NULL;type_flag=NULL; 
											Index++;
										}
              ;

FieldDecl    : Type VAR ';' {name=strdup($2);type_flag=strdup($1);}
			 ;
Field   : Field '.' VAR	{$$=CreateTree(3,0,$3,FIELD,NULL,$1,NULL,NULL);}	
		| VAR '.'VAR	{$$=CreateTree(2,0,$3,FIELD,NULL,CreateTree(1,0,$1,FIELD,NULL,NULL,NULL,NULL),NULL,NULL);}
		;
GDecl  	     : Type GVarlist ';' {
								
									temp_table=G_TABLE_temp;
									while(temp_table)
									{	
										
										temp_table->type=strdup($1);
										temp_table=temp_table->prev;
									}	
															
								}

			 ;
GVarlist     : GVarlist','VAR
						{
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup($3);
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
			 | GVarlist','VAR'['NUM']'
			 			{
							temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup($3);
							temp_table->size=$5->val;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
			 | GVarlist','VAR '(' Parameters ')'
			 			{
							temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup($3);
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							temp_table->paramlist=V_Parameter;
							temp_table->flabel=getlabel();
							G_TABLE_temp=temp_table;
							V_Parameter=NULL; 	
						}
			 | VAR 	
			 			{
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup($1);
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}		
			 | VAR'['NUM']' 
			 			{
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup($1);
							temp_table->size=$3->val;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
			 | VAR '(' Parameters ')'
			 			{
							temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup($1);
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							temp_table->paramlist=V_Parameter;
							temp_table->flabel=getlabel();
							G_TABLE_temp=temp_table;
							V_Parameter=NULL;
						}	
	    	 ;

Body         : BEGIN0 END						{$$=NULL;}
     		 | BEGIN0 Slist Retstmt END			{$$=CreateTree(0,0,NULL,CONNECTOR,NULL,$2,$3,NULL);}
			 | BEGIN0 Retstmt END				{$$=CreateTree(0,0,NULL,CONNECTOR,NULL,$2,NULL,NULL);}
	 		 ;

Parameters   : ParamList	{
								decltypeflag=0;
								$$=CreateTree(0,0,NULL,PDECLARATION,NULL,NULL,NULL,G_PARATABLE);
								G_PARATABLE=NULL;
							}
			 |				{$$=NULL;}
			 ;
ParamList    : ParamList ',' Param
							{
				 				Temp_Parameter->prev=V_Parameter;
								V_Parameter=Temp_Parameter;
							}
			 | Param		{
				 				Temp_Parameter->prev=V_Parameter;
								V_Parameter=Temp_Parameter;

			 				}
			 ;
Param		 : Type VAR	
						{
							Temp_Parameter=(struct parameter*)malloc(sizeof(struct parameter));
							Temp_Parameter->type=strdup($1);
							Temp_Parameter->name=strdup($2);
							
							temp_paratable=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_paratable->name=strdup($2);
							temp_paratable->size=1;
							temp_paratable->type=$1;
							temp_paratable->prev=G_PARATABLE;
							G_PARATABLE=temp_paratable;
						}
			 ;
Retstmt		 : RETURN NUM ';' 		   {$$ = CreateTree(0,0,NULL,RETURNST,NULL,$2,NULL,NULL);}
			 | RETURN VAR ';' 		   {$$ = CreateTree(0,0,NULL,RETURNST,NULL,CreateTree(0,INTE,$2,VARIABLE,NULL,NULL,NULL,NULL),NULL,NULL);}	
			 ;

Slist : Slist Stmt   {$$ = CreateTree(0,0,NULL,CONNECTOR,NULL,$1,$2,NULL);}
	  | Stmt 		{$$ = $1;}
	  ;

Stmt : InputStmt ';' 			{$$ = $1; }
	 | OutputStmt ';'	 		{$$ = $1; }
	 | AsgStmt ';'		 		{$$ = $1; }
	 | Ifstmt ';'		 		{$$ = $1; }
	 | Whilestmt ';'    		{$$ = $1; }
	 | BREAK ';'		 		{$$=CreateTree(0,0,NULL,BREAKST,NULL,NULL,NULL,NULL);}
	 | CONTINUE ';'     		{$$=CreateTree(0,0,NULL,CONTINUEST,NULL,NULL,NULL,NULL);}
	 | Retstmt					{$$ = CreateTree(0,0,NULL,RETURNST,NULL,$1,NULL,NULL);}
	 ;

	 
Declarations : DECL DeclList ENDDECL { 
										G_TABLE_temp=G_TABLE;
										while(G_TABLE_temp)
										{
											G_TABLE_temp=G_TABLE_temp->prev;
										}
										$$=CreateTree(0,0,NULL,DECLARATION,NULL,NULL,NULL,G_TABLE);
										G_TABLE=NULL;
										G_TABLE_temp=NULL;
									} 
			 | DECL ENDDECL			{$$=NULL;}
			 ;
DeclList : DeclList Decl
						{			decltypeflag=0;
									temp_table=G_TABLE;
									if(G_TABLE==NULL)
									{
										G_TABLE=G_TABLE_temp;
									}
									else
									{
										while(temp_table->prev)
										{
											temp_table=temp_table->prev;
										}
										temp_table->prev=G_TABLE_temp;
									}
									G_TABLE_temp=NULL;
						}
		  |Decl	{					
									decltypeflag=0;
									temp_table=G_TABLE;
									if(G_TABLE==NULL)
									{
										G_TABLE=G_TABLE_temp;
									}
									else
									{
										while(temp_table->prev)
										{
											temp_table=temp_table->prev;
										}
										temp_table->prev=G_TABLE_temp;
									}
									G_TABLE_temp=NULL;
								}
		 ;
Decl : Type Varlist	';'{
						
							while(temp_table)
							{	
							
								temp_table->type=strdup($1);
								temp_table=temp_table->prev;
							}	
						
										
						}
	 ;


Type : INT	{$$=strdup(INTE);} 
	 | STR	{$$=strdup(STRE);}
	 | VAR	{$$=strdup($1);}
	 ;
Varlist : Varlist','VAR
						{
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup($3);
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
		| Varlist','VAR'['NUM']'
						{
							temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup($3);
							temp_table->size=$5->val;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
	 	| VAR 			{
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup($1);
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
		| VAR'['NUM']' {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup($1);
							temp_table->size=$3->val;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
	    ;

InputStmt : READ '(' VAR ')' 	  	 		 {$$ = CreateTree(0,0,NULL,READ0,NULL,CreateTree(0,INTE,$3,VARIABLE,NULL,NULL,NULL,NULL),NULL,NULL);}
		  | READ '(' VAR '[' expr ']' ')'	 {$$ = CreateTree(0,0,NULL,READ0,NULL,CreateTree(0,0,$3,VARIABLE,NULL,$5,NULL,NULL),NULL,NULL);}
		  |  READ '(' Field ')' 	  	     {$$ = CreateTree(0,0,NULL,READ0,NULL,$3,NULL,NULL);}
		  ;

OutputStmt : WRITE '(' expr ')' 			 {$$ = CreateTree(0,0,NULL,WRITE0,NULL,$3,NULL,NULL);}
		   ;

AsgStmt : VAR EQUAL expr 	     			 {$$ = CreateTree(0,INTE,NULL,OPERATOR,"=",CreateTree(0,INTE,$1,VARIABLE,NULL,NULL,NULL,NULL),$3,NULL);}
      	| VAR '[' expr ']' EQUAL expr  		 {$$ = CreateTree(0,INTE,NULL,OPERATOR,"=",CreateTree(0,INTE,$1,VARIABLE,NULL,$3,NULL,NULL),$6,NULL);}
		| Field EQUAL expr					 {$$ = CreateTree(0,INTE,NULL,OPERATOR,"=",$1,$3,NULL);}
	 	| VAR EQUAL ALLOC '(' ')'			 {$$ = CreateTree(0,INTE,NULL,OPERATOR,"=",CreateTree(0,INTE,$1,VARIABLE,NULL,NULL,NULL,NULL),CreateTree(0,NULL1,strdup("alloc"),ALOC,NULL,NULL,NULL,NULL),NULL);}
	 	| VAR EQUAL INTIALIZE '(' ')'		 {$$ = CreateTree(0,NULL1,strdup("intialize"),INIT,NULL,NULL,NULL,NULL);}
	 	| Field EQUAL ALLOC '(' ')'			 {$$ = CreateTree(0,INTE,NULL,OPERATOR,"=",$1,CreateTree(0,NULL1,strdup("alloc"),ALOC,NULL,NULL,NULL,NULL),NULL);}
		;

Ifstmt : IF '(' expr ')' THEN Slist ELSE Slist ENDIF  {$$ =  CreateTree(0,BOLE,NULL,IFST,NULL,$3,CreateTree(0,0,NULL,CONNECTOR,NULL,$6,$8,NULL),NULL);}
	   | IF '(' expr ')' THEN Slist ENDIF			 {$$ =  CreateTree(0,BOLE,NULL,IFST,NULL,$3,CreateTree(0,0,NULL,CONNECTOR,NULL,$6,NULL,NULL),NULL);}
	   ;

Whilestmt : WHILE '(' expr ')' DO Slist ENDWHILE  {$$ =  CreateTree(0,BOLE,NULL,WHILEST,NULL,$3,$6,NULL);}
		  ;

expr : expr PLUS expr		{ $$ = CreateTree(0,INTE,NULL,OPERATOR,"+",$1,$3,NULL);}
	 | expr MINUS expr  	{ $$ = CreateTree(0,INTE,NULL,OPERATOR,"-",$1,$3,NULL);}
	 | expr MUL expr		{ $$ = CreateTree(0,INTE,NULL,OPERATOR,"*",$1,$3,NULL);}
	 | expr DIV expr		{ $$ = CreateTree(0,INTE,NULL,OPERATOR,"/",$1,$3,NULL);}
	 | expr LST expr        { $$ = CreateTree(0,BOLE,NULL,OPERATOR,"<",$1,$3,NULL);}
	 | expr GRT expr		{ $$ = CreateTree(0,BOLE,NULL,OPERATOR,">",$1,$3,NULL);}
	 | expr GRE expr        { $$ = CreateTree(0,BOLE,NULL,OPERATOR,">=",$1,$3,NULL);}
	 | expr LSE expr		{ $$ = CreateTree(0,BOLE,NULL,OPERATOR,"<=",$1,$3,NULL);}
	 | expr EEQUAL expr     { $$ = CreateTree(0,BOLE,NULL,OPERATOR,"==",$1,$3,NULL);}
	 | expr NEQUAL expr     { $$ = CreateTree(0,BOLE,NULL,OPERATOR,"!=",$1,$3,NULL);}
	 | '(' expr ')'			{$$ = $2;}
	 | VAR '(' arguments ')'{$$ = CreateTree(0,INTE,$1,FUNCALL,NULL,$3,NULL,NULL);}
	 | VAR '[' expr ']'		{$$ = CreateTree(0,INTE,$1,VARIABLE,NULL,$3,NULL,NULL);}
	 | NUM					{$$ = $1;}
	 | VAR 					{$$ = CreateTree(0,INTE,$1,VARIABLE,NULL,NULL,NULL,NULL);}
	 | Field				{$$=$1;}
	 | NULL0				{$$=CreateTree(0,NULL1,strdup(NULL1),VARIABLE,NULL,NULL,NULL,NULL);}
	 ;
arguments : argument {$$=$1;}
		  | {$$=NULL;}
		  ;
argument 	 : argument ',' expr {$$=CreateTree(0,0,NULL,CONNECTOR,NULL,$1,CreateTree(0,$3->type,$3->varname,ARGUMENT,NULL,$3,NULL,NULL),NULL);}
			 | expr	{$$=CreateTree(0,$1->type,$1->varname,ARGUMENT,NULL,$1,NULL,NULL);}
			 ;
%%

int yyerror(char const *s)
{
    printf("yyerror %s %s",s,yytext);
}


int main(int argc,char** argv) {
	if(argc<2)
	{
		printf("usage expl <filename>");
		exit(0);
	}
	yyin=fopen(argv[1],"r");
	target_file=fopen("output.txt","w");
	label_file=fopen("label.dat","w");
	TypeTableCreate();
	fprintf(target_file, " %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n BRKP\n",0,2056,0,0,0,0,0,0);
	fprintf(target_file, " MOV SP, 5000\n");
	fprintf(target_file, " PUSH R0\n");
	fprintf(target_file," CALL L0\n");
	fprintf(target_file," MOV SP, 5000\n PUSH R1\n PUSH R0\n MOV R1, \"Exit\"\n PUSH R1\n MOV R1,-2\n PUSH R1\n MOV R0,[%d]\n PUSH R0\n PUSH R1\n PUSH R1\n CALL 0\n POP R0\n POP R1\n POP R1\n POP R1\n POP R1\n POP R0\n POP R1\n",r1);
	yyparse();
	fclose(label_file);
	fclose(target_file);
	return 0;
}