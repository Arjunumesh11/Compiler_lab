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
    SELF = 264,
    CLASS = 265,
    ENDCLASS = 266,
    Extends = 267,
    WRITE = 268,
    TYPE = 269,
    ENDTYPE = 270,
    NULL0 = 271,
    POW = 272,
    VAR = 273,
    PLUS = 274,
    MINUS = 275,
    MUL = 276,
    DIV = 277,
    BEGIN0 = 278,
    END = 279,
    NUM = 280,
    EQUAL = 281,
    GRT = 282,
    LST = 283,
    GRE = 284,
    LSE = 285,
    NEQUAL = 286,
    EEQUAL = 287,
    IF = 288,
    THEN = 289,
    ENDIF = 290,
    ENDWHILE = 291,
    DO = 292,
    ELSE = 293,
    WHILE = 294,
    BREAK = 295,
    CONTINUE = 296,
    DECL = 297,
    ENDDECL = 298,
    INT = 299,
    STR = 300
  };
#endif
/* Tokens.  */
#define ALLOC 258
#define INTIALIZE 259
#define RETURN 260
#define MAIN 261
#define READ 262
#define BRKP 263
#define SELF 264
#define CLASS 265
#define ENDCLASS 266
#define Extends 267
#define WRITE 268
#define TYPE 269
#define ENDTYPE 270
#define NULL0 271
#define POW 272
#define VAR 273
#define PLUS 274
#define MINUS 275
#define MUL 276
#define DIV 277
#define BEGIN0 278
#define END 279
#define NUM 280
#define EQUAL 281
#define GRT 282
#define LST 283
#define GRE 284
#define LSE 285
#define NEQUAL 286
#define EEQUAL 287
#define IF 288
#define THEN 289
#define ENDIF 290
#define ENDWHILE 291
#define DO 292
#define ELSE 293
#define WHILE 294
#define BREAK 295
#define CONTINUE 296
#define DECL 297
#define ENDDECL 298
#define INT 299
#define STR 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 20 "stage7.y" /* yacc.c:1909  */

	char* name;
	struct tnode *no;

#line 149 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
