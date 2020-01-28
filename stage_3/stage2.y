%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "exprtree.h"
	#include "exprtree.c"
	int yylex(void);
	int r1;
	FILE *target_file,*yyin,*f;
	

%}
%union{
	struct tnode *no;
}
%type<no> BEGIN0 END Program Slist Stmt NUM InputStmt OutputStmt AsgStmt READ WRITE expr VAR Ifstmt Whilestmt
%token READ WRITE POW VAR PLUS MINUS MUL DIV BEGIN0 END NUM EQUAL GRT LST GRE LSE NEQUAL EEQUAL IF THEN ENDIF ENDWHILE DO ELSE WHILE
%nonassoc  GRT LST GRE LSE NEQUAL EEQUAL
%left PLUS MINUS
%left MUL DIV
%%
Program : BEGIN0 Slist END {evaluate($2); r1=codeGen($2,target_file,0); fprintf(target_file," MOV SP, 4123\n PUSH R1\n PUSH R0\n MOV R1, \"Exit\"\n PUSH R1\n MOV R1,-2\n PUSH R1\n MOV R0,[%d]\n PUSH R0\n PUSH R1\n PUSH R1\n CALL 0\n POP R0\n POP R1\n POP R1\n POP R1\n POP R1\n POP R0\n POP R1\n ",r1);}
		| BEGIN0 END  {exit(0);} ;

Slist : Slist Stmt	{$$ = CreateTree(0,0,NULL,CONNECTOR,NULL,$1,$2);}
	  | Stmt 		{$$ = $1;}
	  ;

Stmt : InputStmt 	{$$ = $1; }
	 | OutputStmt	{$$ = $1; }
	 | AsgStmt 		{$$ = $1; }
	 | Ifstmt		{$$ = $1; }
	 | Whilestmt    {$$ = $1; }  
	 ;

InputStmt : READ '(' expr ')'  	 {$$ = CreateTree(0,0,NULL,READ0,NULL,$3,NULL);};

OutputStmt : WRITE '(' expr ')'  {$$ = CreateTree(0,0,NULL,WRITE0,NULL,$3,NULL);};

AsgStmt : VAR EQUAL expr 			 {$$ = CreateTree(0,0,NULL,OPERATOR,"=",$1,$3);}	;

Ifstmt : IF '(' expr ')' THEN Slist ELSE Slist ENDIF {$$ =  CreateTree(0,0,NULL,IFST,NULL,$3,CreateTree(0,0,NULL,CONNECTOR,NULL,$6,$8));}
	   | IF '(' expr ')' THEN Slist ENDIF			 {$$ =  CreateTree(0,0,NULL,IFST,NULL,$3,CreateTree(0,0,NULL,CONNECTOR,NULL,$6,NULL));}
	   ;

Whilestmt : WHILE '(' expr')' DO Slist ENDWHILE {$$ =  CreateTree(0,0,NULL,WHILEST,NULL,$3,$6);}
		  ;

expr : expr PLUS expr		{$$ = CreateTree(0,INTE,NULL,OPERATOR,"+",$1,$3);}
	 | expr MINUS expr  	{$$ = CreateTree(0,INTE,NULL,OPERATOR,"-",$1,$3);}
	 | expr MUL expr		{$$ = CreateTree(0,INTE,NULL,OPERATOR,"*",$1,$3);}
	 | expr DIV expr		{$$ = CreateTree(0,INTE,NULL,OPERATOR,"/",$1,$3);}
	 
	 | expr LST expr        {$$ = CreateTree(0,BOLE,NULL,OPERATOR,"<",$1,$3);}
	 | expr GRT expr		{$$ = CreateTree(0,BOLE,NULL,OPERATOR,">",$1,$3);}
	 | expr GRE expr        {$$ = CreateTree(0,BOLE,NULL,OPERATOR,">=",$1,$3);}
	 | expr LSE expr		{$$ = CreateTree(0,BOLE,NULL,OPERATOR,"<=",$1,$3);}
	 | expr EEQUAL expr     {$$ = CreateTree(0,BOLE,NULL,OPERATOR,"==",$1,$3);}
	 | expr NEQUAL expr     {$$ = CreateTree(0,BOLE,NULL,OPERATOR,"!=",$1,$3);}
	 
	 | '(' expr ')'			{$$ = $2;}
	 
	 | NUM					{$$ = $1;}
	 | VAR 					{$$ = $1;}
	 | POW '(' expr ')'		{$$=CreateTree(0,0,NULL,POWER,NULL,$3,NULL);}
	 ;

%%

int yyerror(char const *s)
{
    printf("yyerror %s",s);
}


int main(void) {
	yyin=fopen("input.txt","r");
	target_file=fopen("output.txt","w");
	label_file=fopen("label.dat","w");
	fprintf(target_file, " %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n BRKP\n",0,2056,0,0,0,0,0,0);
	fprintf(target_file, " MOV SP, 4123\n");
	yyparse();
	printf("%s",LabelTable[0].name);
	fclose(label_file);
	fclose(target_file);
	return 0;
}