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
    READ = 258,
    WRITE = 259,
    VAR = 260,
    PLUS = 261,
    MINUS = 262,
    MUL = 263,
    DIV = 264,
    BEGIN0 = 265,
    END = 266,
    NUM = 267,
    EQUAL = 268,
    GRT = 269,
    LST = 270,
    GRE = 271,
    LSE = 272,
    NEQUAL = 273,
    EEQUAL = 274,
    IF = 275,
    THEN = 276,
    ENDIF = 277,
    ENDWHILE = 278,
    DO = 279,
    ELSE = 280,
    WHILE = 281
  };
#endif
/* Tokens.  */
#define READ 258
#define WRITE 259
#define VAR 260
#define PLUS 261
#define MINUS 262
#define MUL 263
#define DIV 264
#define BEGIN0 265
#define END 266
#define NUM 267
#define EQUAL 268
#define GRT 269
#define LST 270
#define GRE 271
#define LSE 272
#define NEQUAL 273
#define EEQUAL 274
#define IF 275
#define THEN 276
#define ENDIF 277
#define ENDWHILE 278
#define DO 279
#define ELSE 280
#define WHILE 281

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "stage3.y" /* yacc.c:1909  */

	struct tnode *no;

#line 110 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
