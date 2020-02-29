%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	#include "exprtree.h"
	
    int number;
    char *varname;
	int declflag=0,decltypeflag=0;
%}

%%

[0-9]+		{number = atoi(yytext); yylval.no = CreateTree(number,INTE,NULL,NUMBER,NULL,NULL,NULL,NULL); return NUM;}
"begin" 	{return BEGIN0;}
"end" 		{return END;}
"pow" 		{return POW;}
"read" 		{return READ;}
"write" 	{return WRITE;}
"main"		{return MAIN;}
"return" 	{return RETURN;}

"if" 		{return IF;}
"else" 		{return ELSE;}
"then" 		{return THEN;}
"endif" 	{return ENDIF;}
"do" 		{return DO;}
"while" 	{return WHILE; }
"endwhile"  {return ENDWHILE;}
"break" 	{return BREAK;}
"continue"  {return CONTINUE;}
"decl"		{declflag=1;return DECL;}
"enddecl"   {declflag=0;return ENDDECL;}
"int"		{decltypeflag=1;return INT;}
"str"		{decltypeflag=1;return STR;}
"type"		{return TYPE;}
"endtype"	{return ENDTYPE;}

"+"	{return PLUS;}
"-"	{return MINUS;}
"*"	{return MUL;}
"/"	{return DIV;}
"=" {return EQUAL;}

"==" {return EEQUAL;}
"<=" {return LSE;}
">=" {return GRE;}
">"  {return GRT;}
"<"  {return LST;}
"!=" {return NEQUAL;}

[A-Za-z][0-9A-Za-z]* 	{varname=strdup(yytext);    yylval.no = CreateTree(0,INTE,varname,VARIABLE,NULL,NULL,NULL,NULL); return VAR;}
[\"][0-9A-Za-z]+[\"] 	{varname=strdup(yytext);    yylval.no = CreateTree(0,STRI,varname,STRI,NULL,NULL,NULL,NULL); return NUM;}
[\n] 	{}
[ \t]	{}
[()]	{return yytext[0];}
"["    {return yytext[0];}
"]"    {return yytext[0];}

","		{return yytext[0];}
";"		{return yytext[0];}
[{}]	{return yytext[0];}
.	{yyerror("unknown character\n");printf("%s",yytext);exit(1);}

%%

int yywrap(void) {
	return 1;
}