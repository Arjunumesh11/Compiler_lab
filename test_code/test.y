%{
    #include<stdio.h>
    #include<stdlib.h>
%}
%union{
    char var_name;
}
%type<var_name> VAR
%token VAR END
%%
program:VAR END {printf("var : %c",$1);}
%%
yyerror(char const *s)
{
    printf("yyerror %s",s);
}
int main()
{
    yyparse();
    return 0;
}