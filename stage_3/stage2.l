%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	#include "exprtree.h"
	
    int number;
    char *varname;
%}

%%

[0-9]+	{number = atoi(yytext); yylval.no = CreateTree(number,0,NULL,NUMBER,NULL,NULL,NULL); return NUM;}
[a-z] 	{varname= yytext[0];    yylval.no = CreateTree(0,0,varname,VARIABLE,NULL,NULL,NULL); return VAR;}
"begin" {return BEGIN0;}
"end" {return END;}
"pow" {return POW;}
"read" {return READ;}
"write" {return WRITE;}

"if" {return IF;}
"else" {return ELSE;}
"then" {return THEN;}
"endif" {return ENDIF;}
"do" {return DO;}
"while" {return WHILE; }
"endwhile" {return ENDWHILE;}

"+"	{return PLUS;}
"-"	{return MINUS;}
"*"	{return MUL;}
"/"	{return DIV;}
"=" {return EQUAL;}

"==" {return EEQUAL;}
">=" {return LSE;}
"<=" {return GRE;}
">"  {return GRT;}
"<"  {return LST;}
"!=" {return NEQUAL;}

[\n] 	{}
[ \t]	{}
[()]	{return yytext[0];}
.	{yyerror("unknown character\n");exit(1);}

%%

int yywrap(void) {
	return 1;
}