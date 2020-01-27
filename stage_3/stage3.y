%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "exprtree.h"
	#include "exprtree.c"
	int yylex(void);
	int r1;
	FILE *target_file;

%}
%union{
	struct tnode *no;
}
%type<no> BEGIN0 END Program Slist Stmt NUM InputStmt OutputStmt AsgStmt READ WRITE expr VAR condi Ifstmt Whilestmt
%token READ WRITE VAR PLUS MINUS MUL DIV BEGIN0 END NUM EQUAL GRT LST GRE LSE NEQUAL EEQUAL IF THEN ENDIF ENDWHILE DO ELSE WHILE
%left PLUS MINUS
%left MUL DIV
%%
Program : BEGIN0 Slist END {/*evaluate($2);*/ r1=codeGen($2,target_file,0); fprintf(target_file," MOV SP, 4123\n PUSH R1\n PUSH R0\n MOV R1, \"Exit\"\n PUSH R1\n MOV R1,-2\n PUSH R1\n MOV R0,[%d]\n PUSH R0\n PUSH R1\n PUSH R1\n CALL 0\n POP R0\n POP R1\n POP R1\n POP R1\n POP R1\n POP R0\n POP R1\n ",r1); exit(0);}
		| BEGIN0 END  {exit(0);} ;

Slist : Slist Stmt	{/*printf("Slist ");*/ $$ = makeConnectorNode($1,$2);}
	  | Stmt 		{/*printf("Stmt ");*/ $$ = $1;}
	  ;

Stmt : InputStmt 	{/*printf("i/p ");*/ $$ = $1; }
	 | OutputStmt	{/*printf("o/p ");*/ $$ = $1; }
	 | AsgStmt 		{/*printf("asg ");*/ $$ = $1; }
	 | Ifstmt		{/*printf("if");*/ $$ = $1;}
	 | Whilestmt	{/*printf("while");*/ $$ = $1;}
	 ;

InputStmt : READ '(' expr ')'  	 {$$ = makeReadNode($3);};

OutputStmt : WRITE '(' expr ')'  {$$ = makeWriteNode($3);};

AsgStmt : VAR EQUAL expr 			 {$$ = makeOperatorNode('=',$1,$3);};

Ifstmt : IF '(' condi ')' THEN Slist ELSE Slist ENDIF
	   | IF '(' condi ')' THEN Slist ENDIF
	   ;

Whilestmt : WHILE '(' condi ')' DO Slist ENDWHILE
		  ;

condi : expr LST expr        {makeCondiNode("<",$1,$3);}
	  | expr GRT expr		 {makeCondiNode(">",$1,$3);}	
	  | expr GRE expr        {makeCondiNode(">=",$1,$3);}
	  | expr LSE expr		 {makeCondiNode("<=",$1,$3);}
	  | expr EEQUAL expr     {makeCondiNode("==",$1,$3);}
	  | expr NEQUAL expr	 {makeCondiNode("!=",$1,$3);}
	  ;
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
	fprintf(target_file, " %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n",0,2056,0,0,0,0,0,0);
	fprintf(target_file, " MOV SP, 4123\n"); 
	yyparse();
	return 0;
}