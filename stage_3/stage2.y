%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "exprtree.h"
	#include "exprtree.c"
	int yylex(void);
	int r1,type_flag=0;
	FILE *target_file,*yyin,*f;
	struct symboltable *temp_table,*G_TABLE_temp,*G_TABLE;

%}
%union{
	struct tnode *no;
}
%type<no> BEGIN0 END GDeclaration FuncBlock FuncList MainBlock Body Slist Stmt NUM InputStmt OutputStmt AsgStmt READ WRITE expr VAR Ifstmt Whilestmt BREAK CONTINUE Declarations DECL ENDDECL
%token RETURN MAIN READ WRITE POW VAR PLUS MINUS MUL DIV BEGIN0 END NUM EQUAL GRT LST GRE LSE NEQUAL EEQUAL IF THEN ENDIF ENDWHILE DO ELSE WHILE BREAK CONTINUE DECL ENDDECL INT STR
%nonassoc  GRT LST GRE LSE NEQUAL EEQUAL
%left PLUS MINUS
%left MUL DIV
%%
Program      : GDeclaration FuncList MainBlock	
			 | GDeclaration MainBlock
			 | MainBlock
			 ;
MainBlock    : INT MAIN '(' ')' '{'Declarations Body'}' {r1=codeGen($6,target_file,0);r1=codeGen($7,target_file,0);$$=$6;}
		  	 ;
FuncList     : FuncList FuncBlock
		  	 | FuncBlock
		  	 ;
		  
FuncBlock    : Type VAR '(' ParamList ')' '{' Declarations Body '}'	{r1=codeGen($7,target_file,0);r1=codeGen($8,target_file,0);$$=$8;}
		  	 ;


GDeclaration : DECL GDeclList ENDDECL { 
										G_TABLE_temp=G_TABLE;
										while(G_TABLE_temp)
										{
											printf("%s",G_TABLE_temp->name);
											G_TABLE_temp=G_TABLE_temp->prev;
										}
										$$=CreateTree(0,0,NULL,DECLARATION,NULL,NULL,NULL,G_TABLE);
										G_TABLE=NULL;
										G_TABLE_temp=NULL;
									 } 
			 | DECL ENDDECL			 {$$=CreateTree(0,0,NULL,DECLARATION,NULL,NULL,NULL,NULL);}
			 ;
GDeclList 	 : GDeclList GDecl|GDecl	{
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
							printf("%s",$3->varname);
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
			 | GVarlist','VAR '(' ParamList ')'
			 			{
							temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup($1->varname);
							printf("%s",$1->varname);
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							temp_table->paramlist=ParamList;
							temp_table->flabel=getlabel();
							G_TABLE_temp=temp_table;
							ParamList=NULL; 	
						}
			 | VAR 	
			 			{
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup($1->varname);
							printf("%s",$1->varname);
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
			 | VAR '(' ParamList ')'
			 			{
							temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup($1->varname);
							printf("%s",$1->varname);
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							temp_table->paramlist=ParamList;
							temp_table->flabel=getlabel();
							G_TABLE_temp=temp_table;
							ParamList=NULL;
						}	
	    	 ;

Body         : BEGIN0 END
     		 | BEGIN0 Slist Retstmt END
			 | BEGIN0 Retstmt END
	 		 ;
ParamList    : ParamList ',' Param
							{
				 				Temp_Parameter->prev=Parameter;
								Parameter=Temp_Parameter;
							}
			 | Param		{
				 				Temp_Parameter->prev=Parameter;
								Parameter=Temp_Parameter;

			 				}
			 ;
Param		 : Type VAR	
						{
							Temp_Parameter=(struct parameter*)malloc(sizof(struct parameter));
							Temp_Parameter->type=type_flag;
							Temp_Parameter->name=strdup($2->varname);
						}
			 ;
Retstmt		 : RETURN NUM ';'
		| BEGIN0 END  {exit(0);} ;

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
	 ;

	 
Declarations : DECL DeclList ENDDECL { 
										G_TABLE_temp=G_TABLE;
										while(G_TABLE_temp)
										{
											printf("%s",G_TABLE_temp->name);
											G_TABLE_temp=G_TABLE_temp->prev;
										}
										$$=CreateTree(0,0,NULL,DECLARATION,NULL,NULL,NULL,G_TABLE);
										G_TABLE=NULL;
										G_TABLE_temp=NULL;
									} 
			 | DECL ENDDECL
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
								temp_table->type=INTE;
								temp_table=temp_table->prev;
							}	
						
										
						}
	 ;
Type : INT	{type_flag=INTE;} 
	 | STR	{type_flag=STRE;}
	 ;
Varlist : Varlist','VAR
						{
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup($3->varname);
							printf("%s",$3->varname);
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
							printf("%s",$1->varname);
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
	 | VAR '(' argument ')'
	 | VAR '[' expr ']'		{if($3->type != INTE) {printf("type mismatch");exit(0);}$$ = CreateTree(0,INTE,$1->varname,VARIABLE,NULL,$3,NULL,NULL);}
	 | NUM					{$$ = $1;}
	 | VAR 					{$$ = $1;}
	 | POW '(' expr ')'		{$$=CreateTree(0,0,NULL,POWER,NULL,$3,NULL,NULL);}
	 ;

argument 	 : argument ',' VAR;
			 | argument ',' VAR '[' expr ']'
			 | argument ',' NUM
			 | VAR '[' expr ']'	
			 | VAR
			 | NUM

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
	yyparse();
	printf("%s",LabelTable[0].name);
	fclose(label_file);
	fclose(target_file);
	return 0;
}