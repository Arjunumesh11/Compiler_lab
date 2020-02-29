/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    RETURN = 258,
    MAIN = 259,
    READ = 260,
    WRITE = 261,
    TYPE = 262,
    ENDTYPE = 263,
    POW = 264,
    VAR = 265,
    PLUS = 266,
    MINUS = 267,
    MUL = 268,
    DIV = 269,
    BEGIN0 = 270,
    END = 271,
    NUM = 272,
    EQUAL = 273,
    GRT = 274,
    LST = 275,
    GRE = 276,
    LSE = 277,
    NEQUAL = 278,
    EEQUAL = 279,
    IF = 280,
    THEN = 281,
    ENDIF = 282,
    ENDWHILE = 283,
    DO = 284,
    ELSE = 285,
    WHILE = 286,
    BREAK = 287,
    CONTINUE = 288,
    DECL = 289,
    ENDDECL = 290,
    INT = 291,
    STR = 292
  };
#endif
/* Tokens.  */
#define RETURN 258
#define MAIN 259
#define READ 260
#define WRITE 261
#define TYPE 262
#define ENDTYPE 263
#define POW 264
#define VAR 265
#define PLUS 266
#define MINUS 267
#define MUL 268
#define DIV 269
#define BEGIN0 270
#define END 271
#define NUM 272
#define EQUAL 273
#define GRT 274
#define LST 275
#define GRE 276
#define LSE 277
#define NEQUAL 278
#define EEQUAL 279
#define IF 280
#define THEN 281
#define ENDIF 282
#define ENDWHILE 283
#define DO 284
#define ELSE 285
#define WHILE 286
#define BREAK 287
#define CONTINUE 288
#define DECL 289
#define ENDDECL 290
#define INT 291
#define STR 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 13 "stage5.y" /* yacc.c:1909  */

	struct tnode *no;

#line 132 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
