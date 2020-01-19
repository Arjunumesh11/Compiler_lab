%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "exprtree.h"
	#include "exprtree.c"
	//#include"utli.h"
	int yylex(void);
	int r1;
	FILE *target_file;

%}
%union{
	struct tnode *no;
}
%type<no> BEGIN0 END Program Slist Stmt NUM InputStmt OutputStmt AsgStmt READ WRITE expr VAR
%token READ WRITE VAR PLUS MINUS MUL DIV BEGIN0 END NUM
%left PLUS MINUS
%left MUL DIV
%%
Program : BEGIN0 Slist END {evaluate($2); r1=codeGen($2,target_file,0); exit(0);}
		| BEGIN0 END  {exit(0);} ;

Slist : Slist Stmt	{printf("Slist "); $$ = makeConnectorNode($1,$2);}
	  | Stmt 		{printf("Stmt "); $$ = $1;}
	  ;

Stmt : InputStmt 	{printf("i/p "); $$ = $1; }
	 | OutputStmt	{printf("o/p "); $$ = $1; }
	 | AsgStmt 		{printf("asg "); $$ = $1; }
	 ;

InputStmt : READ '(' expr ')'  	 {$$ = makeReadNode($3);};

OutputStmt : WRITE '(' expr ')'  {$$ = makeWriteNode($3);};

AsgStmt : VAR '=' expr 			 {$$ = makeOperatorNode('=',$1,$3);}	;

expr : expr PLUS expr		{$$ = makeOperatorNode('+',$1,$3);}
	 | expr MINUS expr  	{$$ = makeOperatorNode('-',$1,$3);}
	 | expr MUL expr		{$$ = makeOperatorNode('*',$1,$3);}
	 | expr DIV expr		{$$ = makeOperatorNode('/',$1,$3);}
	 | '(' expr ')'			{$$ = $2;}
	 | NUM					{$$ = $1;}
	 | VAR 					{$$ = $1;}
	 ;

%%

yyerror(char const *s)
{
    printf("yyerror %s",s);
}


int main(void) {
	target_file=fopen("ahc.txt","w");
	//printf("check1");
	yyparse();
	return 0;
}