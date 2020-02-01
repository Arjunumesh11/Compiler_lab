%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	#include "exprtree.h"
	
    int number;
    char *varname;
%}

%%

[0-9]+	{number = atoi(yytext); yylval.no = CreateTree(number,0,NULL,NUMBER,NULL,NULL,NULL,NULL); return NUM;}
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
"break" 	{return BREAK;}
"continue"  {return CONTINUE;}
"decl"		{return DECL;}
"enddecl"   {return ENDDECL;}
"int"		{return INT;}
"str"		{return STR;}

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

[0-9A-Za-z]+ 	{varname=strdup(yytext);    yylval.no = CreateTree(0,0,varname,VARIABLE,NULL,NULL,NULL,NULL); return VAR;}
[\n] 	{}
[ \t]	{}
[()]	{return yytext[0];}
"["    {return yytext[0];}
"]"    {return yytext[0];}

[,]		{return yytext[0];}
.	{yyerror("unknown character\n");exit(1);}

%%

int yywrap(void) {
	return 1;
}