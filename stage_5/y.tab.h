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
    POW = 262,
    VAR = 263,
    PLUS = 264,
    MINUS = 265,
    MUL = 266,
    DIV = 267,
    BEGIN0 = 268,
    END = 269,
    NUM = 270,
    EQUAL = 271,
    GRT = 272,
    LST = 273,
    GRE = 274,
    LSE = 275,
    NEQUAL = 276,
    EEQUAL = 277,
    IF = 278,
    THEN = 279,
    ENDIF = 280,
    ENDWHILE = 281,
    DO = 282,
    ELSE = 283,
    WHILE = 284,
    BREAK = 285,
    CONTINUE = 286,
    DECL = 287,
    ENDDECL = 288,
    INT = 289,
    STR = 290
  };
#endif
/* Tokens.  */
#define RETURN 258
#define MAIN 259
#define READ 260
#define WRITE 261
#define POW 262
#define VAR 263
#define PLUS 264
#define MINUS 265
#define MUL 266
#define DIV 267
#define BEGIN0 268
#define END 269
#define NUM 270
#define EQUAL 271
#define GRT 272
#define LST 273
#define GRE 274
#define LSE 275
#define NEQUAL 276
#define EEQUAL 277
#define IF 278
#define THEN 279
#define ENDIF 280
#define ENDWHILE 281
#define DO 282
#define ELSE 283
#define WHILE 284
#define BREAK 285
#define CONTINUE 286
#define DECL 287
#define ENDDECL 288
#define INT 289
#define STR 290

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "stage5.y" /* yacc.c:1909  */

	struct tnode *no;

#line 128 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
