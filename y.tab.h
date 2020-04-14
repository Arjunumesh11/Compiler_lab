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
    ALLOC = 258,
    INTIALIZE = 259,
    RETURN = 260,
    MAIN = 261,
    READ = 262,
    WRITE = 263,
    TYPE = 264,
    ENDTYPE = 265,
    NULL0 = 266,
    POW = 267,
    VAR = 268,
    PLUS = 269,
    MINUS = 270,
    MUL = 271,
    DIV = 272,
    BEGIN0 = 273,
    END = 274,
    NUM = 275,
    EQUAL = 276,
    GRT = 277,
    LST = 278,
    GRE = 279,
    LSE = 280,
    NEQUAL = 281,
    EEQUAL = 282,
    IF = 283,
    THEN = 284,
    ENDIF = 285,
    ENDWHILE = 286,
    DO = 287,
    ELSE = 288,
    WHILE = 289,
    BREAK = 290,
    CONTINUE = 291,
    DECL = 292,
    ENDDECL = 293,
    INT = 294,
    STR = 295
  };
#endif
/* Tokens.  */
#define ALLOC 258
#define INTIALIZE 259
#define RETURN 260
#define MAIN 261
#define READ 262
#define WRITE 263
#define TYPE 264
#define ENDTYPE 265
#define NULL0 266
#define POW 267
#define VAR 268
#define PLUS 269
#define MINUS 270
#define MUL 271
#define DIV 272
#define BEGIN0 273
#define END 274
#define NUM 275
#define EQUAL 276
#define GRT 277
#define LST 278
#define GRE 279
#define LSE 280
#define NEQUAL 281
#define EEQUAL 282
#define IF 283
#define THEN 284
#define ENDIF 285
#define ENDWHILE 286
#define DO 287
#define ELSE 288
#define WHILE 289
#define BREAK 290
#define CONTINUE 291
#define DECL 292
#define ENDDECL 293
#define INT 294
#define STR 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 18 "./stage_7/stage7.y" /* yacc.c:1909  */

	char* name;
	struct tnode *no;

#line 139 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
