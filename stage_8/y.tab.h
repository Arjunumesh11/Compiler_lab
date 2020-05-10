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
    BRKP = 263,
    NEW = 264,
    SELF = 265,
    CLASS = 266,
    ENDCLASS = 267,
    Extends = 268,
    WRITE = 269,
    TYPE = 270,
    ENDTYPE = 271,
    NULL0 = 272,
    POW = 273,
    VAR = 274,
    PLUS = 275,
    MINUS = 276,
    MUL = 277,
    DIV = 278,
    BEGIN0 = 279,
    END = 280,
    NUM = 281,
    EQUAL = 282,
    GRT = 283,
    LST = 284,
    GRE = 285,
    LSE = 286,
    NEQUAL = 287,
    EEQUAL = 288,
    IF = 289,
    THEN = 290,
    ENDIF = 291,
    ENDWHILE = 292,
    DO = 293,
    ELSE = 294,
    WHILE = 295,
    BREAK = 296,
    CONTINUE = 297,
    DECL = 298,
    ENDDECL = 299,
    INT = 300,
    STR = 301
  };
#endif
/* Tokens.  */
#define ALLOC 258
#define INTIALIZE 259
#define RETURN 260
#define MAIN 261
#define READ 262
#define BRKP 263
#define NEW 264
#define SELF 265
#define CLASS 266
#define ENDCLASS 267
#define Extends 268
#define WRITE 269
#define TYPE 270
#define ENDTYPE 271
#define NULL0 272
#define POW 273
#define VAR 274
#define PLUS 275
#define MINUS 276
#define MUL 277
#define DIV 278
#define BEGIN0 279
#define END 280
#define NUM 281
#define EQUAL 282
#define GRT 283
#define LST 284
#define GRE 285
#define LSE 286
#define NEQUAL 287
#define EEQUAL 288
#define IF 289
#define THEN 290
#define ENDIF 291
#define ENDWHILE 292
#define DO 293
#define ELSE 294
#define WHILE 295
#define BREAK 296
#define CONTINUE 297
#define DECL 298
#define ENDDECL 299
#define INT 300
#define STR 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 18 "stage8.y" /* yacc.c:1909  */

	char* name;
	struct tnode *no;

#line 151 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
