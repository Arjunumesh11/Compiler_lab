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
    SELF = 263,
    CLASS = 264,
    ENDCLASS = 265,
    Extends = 266,
    WRITE = 267,
    TYPE = 268,
    ENDTYPE = 269,
    NULL0 = 270,
    POW = 271,
    VAR = 272,
    PLUS = 273,
    MINUS = 274,
    MUL = 275,
    DIV = 276,
    BEGIN0 = 277,
    END = 278,
    NUM = 279,
    EQUAL = 280,
    GRT = 281,
    LST = 282,
    GRE = 283,
    LSE = 284,
    NEQUAL = 285,
    EEQUAL = 286,
    IF = 287,
    THEN = 288,
    ENDIF = 289,
    ENDWHILE = 290,
    DO = 291,
    ELSE = 292,
    WHILE = 293,
    BREAK = 294,
    CONTINUE = 295,
    DECL = 296,
    ENDDECL = 297,
    INT = 298,
    STR = 299
  };
#endif
/* Tokens.  */
#define ALLOC 258
#define INTIALIZE 259
#define RETURN 260
#define MAIN 261
#define READ 262
#define SELF 263
#define CLASS 264
#define ENDCLASS 265
#define Extends 266
#define WRITE 267
#define TYPE 268
#define ENDTYPE 269
#define NULL0 270
#define POW 271
#define VAR 272
#define PLUS 273
#define MINUS 274
#define MUL 275
#define DIV 276
#define BEGIN0 277
#define END 278
#define NUM 279
#define EQUAL 280
#define GRT 281
#define LST 282
#define GRE 283
#define LSE 284
#define NEQUAL 285
#define EEQUAL 286
#define IF 287
#define THEN 288
#define ENDIF 289
#define ENDWHILE 290
#define DO 291
#define ELSE 292
#define WHILE 293
#define BREAK 294
#define CONTINUE 295
#define DECL 296
#define ENDDECL 297
#define INT 298
#define STR 299

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 20 "stage7.y" /* yacc.c:1909  */

	char* name;
	struct tnode *no;

#line 147 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
