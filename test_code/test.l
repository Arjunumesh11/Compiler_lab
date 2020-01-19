%option noyywrap
%{
    #include<stdio.h>
    #include<stdlib.h>
    #include"y.tab.h"
    char var_name;
%}
%%
[a-zA-z] {yylval.var_name=yytext[0];return VAR;}
[\n] {return END;}
%%
