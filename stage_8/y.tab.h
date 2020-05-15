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
    DEALLOC = 259,
    INTIALIZE = 260,
    RETURN = 261,
    MAIN = 262,
    READ = 263,
    BRKP = 264,
    NEW = 265,
    SELF = 266,
    CLASS = 267,
    ENDCLASS = 268,
    Extends = 269,
    WRITE = 270,
    TYPE = 271,
    ENDTYPE = 272,
    NULL0 = 273,
    POW = 274,
    VAR = 275,
    PLUS = 276,
    MINUS = 277,
    MUL = 278,
    DIV = 279,
    BEGIN0 = 280,
    END = 281,
    NUM = 282,
    EQUAL = 283,
    GRT = 284,
    LST = 285,
    GRE = 286,
    LSE = 287,
    NEQUAL = 288,
    EEQUAL = 289,
    IF = 290,
    THEN = 291,
    ENDIF = 292,
    ENDWHILE = 293,
    DO = 294,
    ELSE = 295,
    WHILE = 296,
    BREAK = 297,
    CONTINUE = 298,
    DECL = 299,
    ENDDECL = 300,
    INT = 301,
    STR = 302
  };
#endif
/* Tokens.  */
#define ALLOC 258
#define DEALLOC 259
#define INTIALIZE 260
#define RETURN 261
#define MAIN 262
#define READ 263
#define BRKP 264
#define NEW 265
#define SELF 266
#define CLASS 267
#define ENDCLASS 268
#define Extends 269
#define WRITE 270
#define TYPE 271
#define ENDTYPE 272
#define NULL0 273
#define POW 274
#define VAR 275
#define PLUS 276
#define MINUS 277
#define MUL 278
#define DIV 279
#define BEGIN0 280
#define END 281
#define NUM 282
#define EQUAL 283
#define GRT 284
#define LST 285
#define GRE 286
#define LSE 287
#define NEQUAL 288
#define EEQUAL 289
#define IF 290
#define THEN 291
#define ENDIF 292
#define ENDWHILE 293
#define DO 294
#define ELSE 295
#define WHILE 296
#define BREAK 297
#define CONTINUE 298
#define DECL 299
#define ENDDECL 300
#define INT 301
#define STR 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 18 "stage8.y" /* yacc.c:1909  */

	char* name;
	struct tnode *no;

#line 153 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
