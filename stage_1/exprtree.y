%{
	/*#include <stdlib.h>
	#include <stdio.h>
	#include "exprtree.h"
	#include "exprtree.c"*/
	#include"utli.h"
	int yylex(void);
	int r1;
	FILE *target_file;

%}
%union{
	struct tnode *no;
}
%type <no> expr NUM program END
%token NUM PLUS MINUS MUL DIV END
%left PLUS MINUS
%left MUL DIV

%%

program : expr END	{
				$$ = $2;
				fprintf(target_file, " %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n",0,2056,0,0,0,0,0,0); 
				printf("Answer : %d\n",evaluate($1));
				r1=codeGen($1,target_file);
				fprintf(target_file," MOV SP, 4095\n MOV R1, \"Write\"\n PUSH R1\n MOV R1, -2\n PUSH R1\n PUSH R0\n PUSH R1\n PUSH R1\n CALL 0\n POP R0\n POP R1\n POP R1\n POP R1\n POP R1\n MOV R0, 4095\n MOV SP, 4096\n MOV R1, \"Exit\"\n PUSH R1\n MOV R1, -1\n PUSH R1\n PUSH R0\n PUSH R1\n PUSH R1\n CALL 0\n POP R0\n POP R1\n POP R1\n POP R1\n POP R1\n");
				exit(1);
			}
		;

expr : expr PLUS expr		{$$ = makeOperatorNode('+',$1,$3);}
	 | expr MINUS expr  	{$$ = makeOperatorNode('-',$1,$3);}
	 | expr MUL expr	{$$ = makeOperatorNode('*',$1,$3);}
	 | expr DIV expr	{$$ = makeOperatorNode('/',$1,$3);}
	 | '(' expr ')'		{$$ = $2;}
	 | NUM			{$$ = $1;}
	 ;

%%

yyerror(char const *s)
{
    printf("yyerror %s",s);
}


int main(void) {
	target_file=fopen("ahc.txt","w");
	printf("check1");
	yyparse();
	return 0;
}