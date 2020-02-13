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
%type<no> BEGIN0 END Program Slist Stmt NUM InputStmt OutputStmt AsgStmt READ WRITE expr VAR Ifstmt Whilestmt BREAK CONTINUE Declarations DECL ENDDECL
%token READ WRITE POW VAR PLUS MINUS MUL DIV BEGIN0 END NUM EQUAL GRT LST GRE LSE NEQUAL EEQUAL IF THEN ENDIF ENDWHILE DO ELSE WHILE BREAK CONTINUE DECL ENDDECL INT STR
%nonassoc  GRT LST GRE LSE NEQUAL EEQUAL
%left PLUS MINUS
%left MUL DIV
%%
Program : BEGIN0 Slist END {evaluate($2); r1=codeGen($2,target_file,0); fprintf(target_file," MOV SP, 5000\n PUSH R1\n PUSH R0\n MOV R1, \"Exit\"\n PUSH R1\n MOV R1,-2\n PUSH R1\n MOV R0,[%d]\n PUSH R0\n PUSH R1\n PUSH R1\n CALL 0\n POP R0\n POP R1\n POP R1\n POP R1\n POP R1\n POP R0\n POP R1\n ",r1);}
		| BEGIN0 END  {exit(0);} ;

Slist : Slist Stmt   {$$ = CreateTree(0,0,NULL,CONNECTOR,NULL,$1,$2,NULL);}
	  | Stmt 		{$$ = $1;}
	  ;

Stmt : InputStmt 	 {$$ = $1; }
	 | OutputStmt	 {$$ = $1; }
	 | AsgStmt 		 {$$ = $1; }
	 | Ifstmt		 {$$ = $1; }
	 | Whilestmt     {$$ = $1; }
	 | BREAK		 {$$=CreateTree(0,0,NULL,BREAKST,NULL,NULL,NULL,NULL);}
	 | CONTINUE      {$$=CreateTree(0,0,NULL,CONTINUEST,NULL,NULL,NULL,NULL);}
	 | Declarations  {$$=$1;}  
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
									} 
			 | DECL ENDDECL
			 ;
DeclList : DeclList Decl|Decl	{
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
Decl : Type Varlist	{
						if(type_flag==0)
						{
							temp_table=G_TABLE_temp;
							while(temp_table)
							{	
								temp_table->type=INTE;
								temp_table=temp_table->prev;
							}	
						}
						else if(type_flag==1)
						{
							temp_table=G_TABLE_temp;
							while(temp_table){	
								temp_table->type=STRE;
								temp_table=temp_table->prev;
								}	
						}
					}
	 ;
Type : INT	{type_flag=0;} 
	 | STR	{type_flag=1;}
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

InputStmt : READ '(' expr ')'  	 			 {$$ = CreateTree(0,0,NULL,READ0,NULL,$3,NULL,NULL);}
		  ;

OutputStmt : WRITE '(' expr ')'  			 {$$ = CreateTree(0,0,NULL,WRITE0,NULL,$3,NULL,NULL);}
		   ;

AsgStmt : VAR EQUAL expr 	     			 {$$ = CreateTree(0,0,NULL,OPERATOR,"=",$1,$3,NULL);}
      	| VAR '[' expr ']' EQUAL expr 		 {$$ = CreateTree(0,0,NULL,OPERATOR,"=",CreateTree(0,0,$1->varname,VARIABLE,NULL,$3,NULL,NULL),$6,NULL);}
		;

Ifstmt : IF '(' expr ')' THEN Slist ELSE Slist ENDIF {$$ =  CreateTree(0,0,NULL,IFST,NULL,$3,CreateTree(0,0,NULL,CONNECTOR,NULL,$6,$8,NULL),NULL);}
	   | IF '(' expr ')' THEN Slist ENDIF 			 {$$ =  CreateTree(0,0,NULL,IFST,NULL,$3,CreateTree(0,0,NULL,CONNECTOR,NULL,$6,NULL,NULL),NULL);}
	   ;

Whilestmt : WHILE '(' expr ')' DO Slist ENDWHILE {$$ =  CreateTree(0,0,NULL,WHILEST,NULL,$3,$6,NULL);}
		  ;

expr : expr PLUS expr		{$$ = CreateTree(0,INTE,NULL,OPERATOR,"+",$1,$3,NULL);}
	 | expr MINUS expr  	{$$ = CreateTree(0,INTE,NULL,OPERATOR,"-",$1,$3,NULL);}
	 | expr MUL expr		{$$ = CreateTree(0,INTE,NULL,OPERATOR,"*",$1,$3,NULL);}
	 | expr DIV expr		{$$ = CreateTree(0,INTE,NULL,OPERATOR,"/",$1,$3,NULL);}
	 
	 | expr LST expr        {$$ = CreateTree(0,BOLE,NULL,OPERATOR,"<",$1,$3,NULL);}
	 | expr GRT expr		{$$ = CreateTree(0,BOLE,NULL,OPERATOR,">",$1,$3,NULL);}
	 | expr GRE expr        {$$ = CreateTree(0,BOLE,NULL,OPERATOR,">=",$1,$3,NULL);}
	 | expr LSE expr		{$$ = CreateTree(0,BOLE,NULL,OPERATOR,"<=",$1,$3,NULL);}
	 | expr EEQUAL expr     {$$ = CreateTree(0,BOLE,NULL,OPERATOR,"==",$1,$3,NULL);}
	 | expr NEQUAL expr     {$$ = CreateTree(0,BOLE,NULL,OPERATOR,"!=",$1,$3,NULL);}
	 
	 | '(' expr ')'			{$$ = $2;}
	 | VAR '[' expr ']'		{$$ = CreateTree(0,0,$1->varname,VARIABLE,NULL,$3,NULL,NULL);}
	 | NUM					{$$ = $1;}
	 | VAR 					{$$ = $1;}
	 | POW '(' expr ')'		{$$=CreateTree(0,0,NULL,POWER,NULL,$3,NULL,NULL);}
	 ;



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