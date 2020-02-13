%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "exprtree.h"
	#include "exprtree.c"
	int yylex(void);
	int r1,type_flag=0,ptype_flag=0;
	FILE *target_file,*yyin,*f;
	struct symboltable *temp_table,*G_TABLE_temp,*G_TABLE,*temp_paratable,*G_PARATABLE;

%}
%union{
	struct tnode *no;
}
%type<no> BEGIN0 END GDeclaration FuncBlock Parameters FuncList MainBlock Body Slist Stmt NUM InputStmt Retstmt argument arguments OutputStmt AsgStmt READ WRITE expr VAR Ifstmt Whilestmt BREAK CONTINUE Declarations DECL ENDDECL
%token RETURN MAIN READ WRITE POW VAR PLUS MINUS MUL DIV BEGIN0 END NUM EQUAL GRT LST GRE LSE NEQUAL EEQUAL IF THEN ENDIF ENDWHILE DO ELSE WHILE BREAK CONTINUE DECL ENDDECL INT STR
%nonassoc  GRT LST GRE LSE NEQUAL EEQUAL
%left PLUS MINUS
%left MUL DIV
%%
Program      : GDeclaration FuncList MainBlock	{codeGen($3, target_file, 0);}
			 | GDeclaration MainBlock			{codeGen($2, target_file, 0);}
			 | MainBlock						{codeGen($1, target_file, 0);}			
			 ;
MainBlock    : INT MAIN '(' ')' '{'Declarations Body'}' {$$=CreateTree(0,0,"MAIN",FUNCDEF,NULL,$6,$7,NULL);}
		  	 ;
FuncList     : FuncList FuncBlock	{codeGen($1, target_file, 0);}
		  	 | FuncBlock	{codeGen($1, target_file, 0);}
		  	 ;
		  
FuncBlock    : Type VAR '(' Parameters ')' '{' Declarations Body '}'	{$$=CreateTree(0,0,$2->varname,FUNCDEF,NULL,$4,CreateTree(0,0,NULL,CONNECTOR,NULL,$7,$8,NULL),NULL);}
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
GDecl  	     : Type GVarlist ';' {
								
									temp_table=G_TABLE_temp;
									while(temp_table)
									{	
										temp_table->type=type_flag;
										temp_table=temp_table->prev;
									}	
															
								}

			 ;
GVarlist     : GVarlist','VAR
						{
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup($3->varname);
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
			 | GVarlist','VAR'['NUM']'
			 			{
							temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup($3->varname);
							temp_table->size=$5->val;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
			 | GVarlist','VAR '(' Parameters ')'
			 			{
							temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup($3->varname);
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
		 					temp_table->name=strdup($1->varname);
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}		
			 | VAR'['NUM']' 
			 			{
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup($1->varname);
							temp_table->size=$3->val;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
			 | VAR '(' Parameters ')'
			 			{
							temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup($1->varname);
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
Param		 : PType VAR	
						{
							Temp_Parameter=(struct parameter*)malloc(sizeof(struct parameter));
							Temp_Parameter->type=ptype_flag;
							Temp_Parameter->name=strdup($2->varname);
							
							temp_paratable=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_paratable->name=strdup($2->varname);
							temp_paratable->size=1;
							temp_paratable->type=ptype_flag;
							temp_paratable->prev=G_PARATABLE;
							G_PARATABLE=temp_paratable;
						}
			 ;
Retstmt		 : RETURN NUM ';' 		   {$$ = CreateTree(0,0,NULL,RETURNST,NULL,$2,NULL,NULL);}
			 | RETURN VAR ';' 		   {$$ = CreateTree(0,0,NULL,RETURNST,NULL,$2,NULL,NULL);}	
			 ;

Slist : Slist Stmt   {$$ = CreateTree(0,0,NULL,CONNECTOR,NULL,$1,$2,NULL);}
	  | Stmt 		{$$ = $1;}
	  ;

Stmt : InputStmt ';' {$$ = $1; }
	 | OutputStmt ';'	 {$$ = $1; }
	 | AsgStmt ';'		 {$$ = $1; }
	 | Ifstmt ';'		 {$$ = $1; }
	 | Whilestmt ';'    {$$ = $1; }
	 | BREAK ';'		 {$$=CreateTree(0,0,NULL,BREAKST,NULL,NULL,NULL,NULL);}
	 | CONTINUE ';'     {$$=CreateTree(0,0,NULL,CONTINUEST,NULL,NULL,NULL,NULL);}
	 | VAR '(' arguments ')' ';' {$$ = CreateTree(0,INTE,$1->varname,FUNCALL,NULL,$3,NULL,NULL);}
	 | Retstmt	{$$ = CreateTree(0,0,NULL,RETURNST,NULL,$1,NULL,NULL);}
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
		  |Decl	{
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
								temp_table->type=type_flag;
								temp_table=temp_table->prev;
							}	
						
										
						}
	 ;
PType : INT	{ptype_flag=INTE;} 
	  | STR	{ptype_flag=STRE;}
	  ;
Type : INT	{type_flag=INTE;} 
	 | STR	{type_flag=STRE;}
	 ;
Varlist : Varlist','VAR
						{
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup($3->varname);
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
		| Varlist','VAR'['NUM']'
						{
							temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup($3->varname);
							temp_table->size=$5->val;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
	 	| VAR 			{
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup($1->varname);
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
		| VAR'['NUM']' {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup($1->varname);
							temp_table->size=$1->val;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
	    ;

InputStmt : READ '(' VAR ')' 	  	 			{$$ = CreateTree(0,0,NULL,READ0,NULL,$3,NULL,NULL);}
		  | READ '(' VAR '[' expr ']' ')'		{$$ = CreateTree(0,0,NULL,READ0,NULL,CreateTree(0,0,$3->varname,VARIABLE,NULL,$5,NULL,NULL),NULL,NULL);}
		  ;

OutputStmt : WRITE '(' expr ')' 			 {$$ = CreateTree(0,0,NULL,WRITE0,NULL,$3,NULL,NULL);}
		   ;

AsgStmt : VAR EQUAL expr 	     			 {$$ = CreateTree(0,0,NULL,OPERATOR,"=",$1,$3,NULL);}
      	| VAR '[' expr ']' EQUAL expr  		 {if($3->type != INTE) {printf("type mismatch");exit(0);}$$ = CreateTree(0,0,NULL,OPERATOR,"=",CreateTree(0,0,$1->varname,VARIABLE,NULL,$3,NULL,NULL),$6,NULL);}
		;

Ifstmt : IF '(' expr ')' THEN Slist ELSE Slist ENDIF  {if($3->type != BOLE) {printf("type mismatch");exit(0);}$$ =  CreateTree(0,0,NULL,IFST,NULL,$3,CreateTree(0,0,NULL,CONNECTOR,NULL,$6,$8,NULL),NULL);}
	   | IF '(' expr ')' THEN Slist ENDIF			 {if($3->type != BOLE) {printf("type mismatch");exit(0);}$$ =  CreateTree(0,0,NULL,IFST,NULL,$3,CreateTree(0,0,NULL,CONNECTOR,NULL,$6,NULL,NULL),NULL);}
	   ;

Whilestmt : WHILE '(' expr ')' DO Slist ENDWHILE  {if($3->type != BOLE) {printf("type mismatch");exit(0);}$$ =  CreateTree(0,0,NULL,WHILEST,NULL,$3,$6,NULL);}
		  ;

expr : expr PLUS expr		{if(($1->type != INTE) || ($3->type != INTE)) {printf("type mismatch");exit(0);}
		 					$$ = CreateTree(0,INTE,NULL,OPERATOR,"+",$1,$3,NULL);}
	 | expr MINUS expr  	{if(($1->type != INTE) || ($3->type != INTE)) {printf("type mismatch");exit(0);}
		 					$$ = CreateTree(0,INTE,NULL,OPERATOR,"-",$1,$3,NULL);}
	 | expr MUL expr		{if(($1->type != INTE) || ($3->type != INTE)) {printf("type mismatch");exit(0);}
		 					$$ = CreateTree(0,INTE,NULL,OPERATOR,"*",$1,$3,NULL);}
	 | expr DIV expr		{if(($1->type != INTE) || ($3->type != INTE)) {printf("type mismatch");exit(0);}
		 					$$ = CreateTree(0,INTE,NULL,OPERATOR,"/",$1,$3,NULL);}
	 
	 | expr LST expr        {if(($1->type != INTE) || ($3->type != INTE)) {printf("type mismatch");exit(0);}
	 						$$ = CreateTree(0,BOLE,NULL,OPERATOR,"<",$1,$3,NULL);}
	 | expr GRT expr		{if(($1->type != INTE) || ($3->type != INTE)) {printf("type mismatch");exit(0);}
		 					$$ = CreateTree(0,BOLE,NULL,OPERATOR,">",$1,$3,NULL);}
	 | expr GRE expr        {if(($1->type != INTE) || ($3->type != INTE)) {printf("type mismatch");exit(0);}
		 					$$ = CreateTree(0,BOLE,NULL,OPERATOR,">=",$1,$3,NULL);}
	 | expr LSE expr		{if(($1->type != INTE) || ($3->type != INTE)) {printf("type mismatch");exit(0);}
		 					$$ = CreateTree(0,BOLE,NULL,OPERATOR,"<=",$1,$3,NULL);}
	 | expr EEQUAL expr     {if(($1->type != INTE) || ($3->type != INTE)) {printf("type mismatch");exit(0);}
		 					$$ = CreateTree(0,BOLE,NULL,OPERATOR,"==",$1,$3,NULL);}
	 | expr NEQUAL expr     {if(($1->type != INTE) || ($3->type != INTE)) {printf("type mismatch");exit(0);}
		 					$$ = CreateTree(0,BOLE,NULL,OPERATOR,"!=",$1,$3,NULL);}
	 
	 | '(' expr ')'			{$$ = $2;}
	 | VAR '(' arguments ')'	{$$ = CreateTree(0,INTE,$1->varname,FUNCALL,NULL,$3,NULL,NULL);}
	 | VAR '[' expr ']'		{if($3->type != INTE) {printf("type mismatch");exit(0);}$$ = CreateTree(0,INTE,$1->varname,VARIABLE,NULL,$3,NULL,NULL);}
	 | NUM					{$$ = $1;}
	 | VAR 					{$$ = $1;}
	 | POW '(' expr ')'		{$$=CreateTree(0,0,NULL,POWER,NULL,$3,NULL,NULL);}
	 ;
arguments : argument {$$=$1;}
		  | {$$=NULL;}
		  ;
argument 	 : argument ',' VAR {$$=CreateTree(0,0,NULL,CONNECTOR,NULL,$1,CreateTree(0,0,NULL,ARGUMENT,NULL,$3,NULL,NULL),NULL);}
			 | argument ',' NUM	{$$=CreateTree(0,0,NULL,CONNECTOR,NULL,$1,CreateTree(0,0,NULL,ARGUMENT,NULL,$3,NULL,NULL),NULL);}
			 | VAR	{$$=CreateTree(0,0,NULL,ARGUMENT,NULL,$1,NULL,NULL);}
			 | NUM	{$$=CreateTree(0,0,NULL,ARGUMENT,NULL,$1,NULL,NULL);}

%%

int yyerror(char const *s)
{
    printf("yyerror %s",s);
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