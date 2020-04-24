/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "stage7.y" /* yacc.c:339  */

	#include <stdlib.h>
	#include <stdio.h>
	#include "exprtree.h"
	//#include "exprtree.c"
	int yylex(void);
	int labels;
	int r1,decltypeflag;
	char *type_flag;
	FILE *target_file,*yyin,*f;
	struct symboltable *temp_table,*G_TABLE_temp,*G_TABLE,*temp_paratable,*G_PARATABLE;
	struct Typetable *temptypetable;
	struct Typetable *TYPE_TABLE;
    struct Fieldlist *tempfieldlist,*tempfield;
	int Index=0,size=0;
	char *name_type,*name,*yytext;
	struct Classtable *Cptr=NULL,*CLASS_TABLE,*temp_class=NULL,*Current_class;


#line 86 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 20 "stage7.y" /* yacc.c:355  */

	char* name;
	struct tnode *no;

#line 221 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 238 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   414

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  119
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  279

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      46,    47,     2,     2,    52,     2,    51,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    50,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,     2,    49,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    31,    31,    32,    33,    35,    37,    38,    41,    43,
      44,    46,    47,    49,    51,    65,    67,    68,    70,    72,
      73,    75,    77,    78,    80,    82,    93,    96,   113,   130,
     131,   134,   143,   155,   158,   174,   191,   193,   194,   195,
     197,   198,   199,   201,   214,   222,   230,   241,   249,   257,
     270,   271,   272,   275,   280,   282,   287,   293,   307,   308,
     309,   312,   313,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   328,   338,   339,   341,   358,   376,   390,   391,
     392,   394,   402,   410,   417,   426,   427,   428,   431,   434,
     435,   436,   437,   438,   439,   442,   443,   446,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   468,   469,   471,   472
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ALLOC", "INTIALIZE", "RETURN", "MAIN",
  "READ", "BRKP", "SELF", "CLASS", "ENDCLASS", "Extends", "WRITE", "TYPE",
  "ENDTYPE", "NULL0", "POW", "VAR", "PLUS", "MINUS", "MUL", "DIV",
  "BEGIN0", "END", "NUM", "EQUAL", "GRT", "LST", "GRE", "LSE", "NEQUAL",
  "EEQUAL", "IF", "THEN", "ENDIF", "ENDWHILE", "DO", "ELSE", "WHILE",
  "BREAK", "CONTINUE", "DECL", "ENDDECL", "INT", "STR", "'('", "')'",
  "'{'", "'}'", "';'", "'.'", "','", "'['", "']'", "$accept", "Program",
  "MainBlock", "FuncList", "FuncBlock", "ClassDefBlock", "ClassDefList",
  "ClassDef", "Cname", "Fieldlists", "Fld", "MethodDecl", "MDecl",
  "MethodDefns", "FDef", "GDeclaration", "GDeclList", "TypeDefBlock",
  "TypeDefList", "TypeDef", "FieldDeclList", "FieldDecl", "Field",
  "FieldFunction", "GDecl", "GVarlist", "Body", "Parameters", "ParamList",
  "Param", "Retstmt", "Slist", "Stmt", "Declarations", "DeclList", "Decl",
  "Type", "Varlist", "InputStmt", "OutputStmt", "AsgStmt", "Ifstmt",
  "Whilestmt", "expr", "arguments", "argument", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,    40,    41,   123,   125,
      59,    46,    44,    91,    93
};
# endif

#define YYPACT_NINF -179

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-179)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,    23,    22,    52,  -179,    47,    19,   120,  -179,    57,
    -179,    54,    71,    30,  -179,  -179,    86,   131,    89,  -179,
     108,    26,    44,  -179,  -179,  -179,     1,  -179,   136,   111,
     149,  -179,  -179,   150,  -179,    72,  -179,   182,    22,  -179,
      44,  -179,   186,  -179,  -179,   158,   168,  -179,  -179,  -179,
    -179,   107,   -27,  -179,  -179,   165,  -179,    83,   190,    30,
      30,   193,  -179,   201,    30,  -179,    87,  -179,   202,   139,
     187,  -179,   106,  -179,   219,   191,   194,  -179,   227,   195,
     112,   200,  -179,  -179,   218,    42,   189,   209,   198,   214,
     226,   -14,  -179,   228,   239,   223,   237,   -11,   264,   217,
    -179,   249,   250,   251,   260,   261,  -179,    30,  -179,   294,
     127,  -179,    30,  -179,  -179,    30,   288,   266,   290,  -179,
     302,    61,   271,   137,    38,  -179,   304,    77,    17,   316,
      77,    77,    77,  -179,  -179,    13,   317,  -179,   312,  -179,
    -179,  -179,  -179,  -179,  -179,    16,  -179,   319,   299,    30,
    -179,  -179,   300,   292,   168,   295,   303,  -179,  -179,  -179,
     117,   135,  -179,   306,  -179,    45,  -179,    77,   318,  -179,
     262,   309,   324,   332,  -179,   212,   276,   297,   325,   332,
    -179,  -179,  -179,  -179,   326,   301,  -179,  -179,   190,  -179,
     354,  -179,    77,  -179,   362,    77,   363,    77,   311,   364,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
    -179,   336,   337,   359,   352,   313,   340,    30,   338,   341,
     335,   232,   345,   332,   347,   343,   350,   248,  -179,   351,
     181,   181,  -179,  -179,   346,   346,   346,   346,   346,   346,
    -179,  -179,    77,   217,   217,  -179,   353,  -179,  -179,  -179,
     355,    77,  -179,    77,    77,  -179,    77,   332,  -179,   101,
     176,   344,  -179,   356,   332,   357,   358,  -179,   217,  -179,
     168,  -179,  -179,  -179,   188,   190,  -179,   349,  -179
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      30,     0,     0,     0,     4,    10,     0,     0,    32,     0,
       1,     0,     0,     0,    29,    31,     0,    14,     0,    12,
       0,     0,     0,    80,    78,    79,     0,    35,     0,     0,
       0,     9,    11,     0,    26,     0,    28,     0,    78,     3,
       0,     7,     0,    33,    34,     0,    74,    15,    17,    25,
      27,    47,     0,     2,     6,     0,    36,     0,     0,     0,
      54,     0,    43,     0,    54,    73,     0,    76,     0,     0,
       0,    16,     0,    20,     0,     0,    53,    56,     0,     0,
      44,     0,    72,    75,    83,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,     0,     0,    70,     0,
      62,     0,     0,     0,     0,     0,     5,     0,    19,     0,
       0,    49,     0,    57,    48,    54,     0,     0,     0,    77,
       0,     0,     0,     0,     0,    71,     0,     0,     0,     0,
       0,     0,     0,    68,    69,     0,     0,    52,    70,    61,
      63,    64,    65,    66,    67,     0,    23,     0,     0,    54,
      18,    55,     0,     0,    74,     0,    81,    59,    58,    60,
       0,     0,    39,     0,   115,   112,   111,     0,   113,   114,
       0,     0,     0,    89,    38,     0,     0,     0,     0,    91,
      37,    51,    13,    22,     0,     0,    46,    45,     0,    84,
       0,    85,     0,    87,     0,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,     0,     0,    54,     0,     0,
       0,     0,    39,   119,     0,   116,    38,     0,   108,    37,
      98,    99,   100,   101,   103,   102,   104,   105,   107,   106,
      92,    93,     0,     0,     0,    94,     0,    21,     8,    82,
       0,   117,   109,     0,   117,   110,   117,    90,    70,     0,
       0,     0,    86,     0,   118,     0,     0,    96,     0,    97,
      74,    40,    41,    42,     0,     0,    95,     0,    24
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -179,  -179,    82,  -179,   361,  -179,  -179,   375,  -179,  -179,
    -179,  -179,   327,  -179,   263,  -179,  -179,  -179,  -179,   399,
    -179,   381,   -69,  -179,   374,  -179,  -178,   -62,  -179,   298,
     -33,  -123,   -98,  -145,  -179,   348,    -8,  -179,  -179,  -179,
    -179,  -179,  -179,  -124,   -85,  -179
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    40,    41,    12,    18,    19,    20,    59,
      71,    72,    73,   145,   146,    22,    35,     5,     7,     8,
      26,    27,   168,   169,    36,    52,    70,    75,    76,    77,
     258,    99,   100,    58,    66,    67,    78,    85,   101,   102,
     103,   104,   105,   223,   224,   225
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      97,   139,    81,   170,   173,    28,   175,   176,   177,   188,
     219,   179,   128,    37,    42,   135,   178,   123,    28,    23,
     171,   172,   163,    62,     1,    63,   163,    37,     9,   164,
      97,   165,    42,   164,    23,   165,    98,   129,   166,   130,
     136,     6,   166,   198,    23,    24,    25,    89,    23,    68,
      43,    74,    10,   152,     2,   161,   160,    11,    68,   167,
      24,    25,    23,   167,   109,   182,   138,    13,   221,    34,
      24,    25,    17,   227,    24,    25,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   163,   185,    38,    25,
      23,   195,   119,   164,   120,   165,   196,   277,   197,   147,
      31,    23,   166,    16,    39,    23,    86,    17,    87,    88,
      89,   157,   129,    21,    90,    49,    24,    25,   257,    91,
     259,   260,    53,   167,    23,   275,    65,    24,    25,   264,
      82,    24,    25,    29,    93,    14,   267,   147,     6,   268,
      94,    95,    96,    30,    86,   274,    87,    88,    89,   107,
      24,    25,    90,    60,    45,   246,    33,    91,   115,    46,
      61,   139,   139,    92,   191,   116,   263,    47,   129,   265,
     192,   266,    93,   149,    97,    97,   139,   150,    94,    95,
      96,    86,   193,    87,    88,    89,   136,   159,   136,    90,
      97,    97,    48,    86,    91,    87,    88,    89,    89,    97,
      51,    90,   202,   203,    55,    97,    91,   121,    56,    93,
      57,    64,   269,    69,   122,    94,    95,    96,    79,    80,
      84,    93,    86,   276,    87,    88,    89,    94,    95,    96,
      90,   200,   201,   202,   203,    91,   106,   110,   111,   204,
     205,   206,   207,   208,   209,   113,   112,   117,   125,   114,
      93,   200,   201,   202,   203,   124,    94,    95,    96,   204,
     205,   206,   207,   208,   209,   126,   213,   200,   201,   202,
     203,   118,   127,   133,   131,   204,   205,   206,   207,   208,
     209,   200,   201,   202,   203,   132,   250,   134,   137,   204,
     205,   206,   207,   208,   209,   200,   201,   202,   203,   140,
     141,   142,   255,   204,   205,   206,   207,   208,   209,   210,
     143,   144,   148,   153,   154,   155,   200,   201,   202,   203,
     156,   158,   162,   214,   204,   205,   206,   207,   208,   209,
     200,   201,   202,   203,   174,   180,   181,   184,   204,   205,
     206,   207,   208,   209,   215,   149,   187,   186,   218,   189,
     244,   200,   201,   202,   203,   211,   190,   194,   228,   204,
     205,   206,   207,   208,   209,   200,   201,   202,   203,   199,
     212,   216,   217,    -1,    -1,    -1,    -1,    -1,    -1,   220,
     222,   226,   229,   240,   241,   242,   243,   245,   247,   249,
     248,   251,   270,    32,   252,   253,   254,   256,   278,   108,
     261,    54,   262,   271,   272,   273,    15,    44,   183,    50,
     151,     0,     0,     0,    83
};

static const yytype_int16 yycheck[] =
{
      69,    99,    64,   127,   128,    13,   130,   131,   132,   154,
     188,   135,    26,    21,    22,    26,     3,    86,    26,    18,
       3,     4,     9,    50,    14,    52,     9,    35,     6,    16,
      99,    18,    40,    16,    18,    18,    69,    51,    25,    53,
      51,    18,    25,   167,    18,    44,    45,     9,    18,    57,
      49,    59,     0,   115,    44,   124,    18,    10,    66,    46,
      44,    45,    18,    46,    72,    49,    99,    48,   192,    43,
      44,    45,    18,   197,    44,    45,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,     9,   149,    44,    45,
      18,    46,    50,    16,    52,    18,    51,   275,    53,   107,
      11,    18,    25,    46,    22,    18,     5,    18,     7,     8,
       9,    50,    51,    42,    13,    43,    44,    45,   242,    18,
     243,   244,    40,    46,    18,   270,    43,    44,    45,   253,
      43,    44,    45,    47,    33,    15,    35,   145,    18,    38,
      39,    40,    41,    12,     5,   268,     7,     8,     9,    43,
      44,    45,    13,    46,    18,   217,    48,    18,    46,    48,
      53,   259,   260,    24,    47,    53,   251,    18,    51,   254,
      53,   256,    33,    46,   243,   244,   274,    50,    39,    40,
      41,     5,    47,     7,     8,     9,    51,    50,    51,    13,
     259,   260,    42,     5,    18,     7,     8,     9,     9,   268,
      18,    13,    21,    22,    18,   274,    18,    18,    50,    33,
      42,    46,    36,    23,    25,    39,    40,    41,    25,    18,
      18,    33,     5,    35,     7,     8,     9,    39,    40,    41,
      13,    19,    20,    21,    22,    18,    49,    18,    47,    27,
      28,    29,    30,    31,    32,    18,    52,    47,    50,    54,
      33,    19,    20,    21,    22,    46,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    51,    54,    19,    20,    21,
      22,    53,    46,    50,    46,    27,    28,    29,    30,    31,
      32,    19,    20,    21,    22,    46,    54,    50,    24,    27,
      28,    29,    30,    31,    32,    19,    20,    21,    22,    50,
      50,    50,    54,    27,    28,    29,    30,    31,    32,    47,
      50,    50,    18,    25,    48,    25,    19,    20,    21,    22,
      18,    50,    18,    47,    27,    28,    29,    30,    31,    32,
      19,    20,    21,    22,    18,    18,    24,    18,    27,    28,
      29,    30,    31,    32,    47,    46,    54,    47,    47,    54,
      37,    19,    20,    21,    22,    46,    53,    51,    47,    27,
      28,    29,    30,    31,    32,    19,    20,    21,    22,    51,
      46,    46,    46,    27,    28,    29,    30,    31,    32,    25,
      18,    18,    18,    47,    47,    26,    34,    47,    50,    54,
      49,    46,    48,    18,    47,    52,    46,    46,    49,    72,
      47,    40,    47,    47,    47,    47,     7,    26,   145,    35,
     112,    -1,    -1,    -1,    66
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    14,    44,    56,    57,    72,    18,    73,    74,     6,
       0,    10,    60,    48,    15,    74,    46,    18,    61,    62,
      63,    42,    70,    18,    44,    45,    75,    76,    91,    47,
      12,    11,    62,    48,    43,    71,    79,    91,    44,    57,
      58,    59,    91,    49,    76,    18,    48,    18,    42,    43,
      79,    18,    80,    57,    59,    18,    50,    42,    88,    64,
      46,    53,    50,    52,    46,    43,    89,    90,    91,    23,
      81,    65,    66,    67,    91,    82,    83,    84,    91,    25,
      18,    82,    43,    90,    18,    92,     5,     7,     8,     9,
      13,    18,    24,    33,    39,    40,    41,    77,    85,    86,
      87,    93,    94,    95,    96,    97,    49,    43,    67,    91,
      18,    47,    52,    18,    54,    46,    53,    47,    53,    50,
      52,    18,    25,    77,    46,    50,    51,    46,    26,    51,
      53,    46,    46,    50,    50,    26,    51,    24,    85,    87,
      50,    50,    50,    50,    50,    68,    69,    91,    18,    46,
      50,    84,    82,    25,    48,    25,    18,    50,    50,    50,
      18,    77,    18,     9,    16,    18,    25,    46,    77,    78,
      98,     3,     4,    98,    18,    98,    98,    98,     3,    98,
      18,    24,    49,    69,    18,    82,    47,    54,    88,    54,
      53,    47,    53,    47,    51,    46,    51,    53,    98,    51,
      19,    20,    21,    22,    27,    28,    29,    30,    31,    32,
      47,    46,    46,    54,    47,    47,    46,    46,    47,    81,
      25,    98,    18,    98,    99,   100,    18,    98,    47,    18,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      47,    47,    26,    34,    37,    47,    82,    50,    49,    54,
      54,    46,    47,    52,    46,    54,    46,    98,    85,    86,
      86,    47,    47,    99,    98,    99,    99,    35,    38,    36,
      48,    47,    47,    47,    86,    88,    35,    81,    49
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    56,    56,    57,    58,    58,    59,    60,
      60,    61,    61,    62,    63,    63,    64,    64,    65,    66,
      66,    67,    68,    68,    69,    70,    70,    71,    71,    72,
      72,    73,    73,    74,    75,    75,    76,    77,    77,    77,
      78,    78,    78,    79,    80,    80,    80,    80,    80,    80,
      81,    81,    81,    82,    82,    83,    83,    84,    85,    85,
      85,    86,    86,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    88,    88,    88,    89,    89,    90,    91,    91,
      91,    92,    92,    92,    92,    93,    93,    93,    94,    95,
      95,    95,    95,    95,    95,    96,    96,    97,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    99,    99,   100,   100
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     4,     1,     8,     2,     1,     9,     3,
       0,     2,     1,     8,     1,     3,     2,     0,     3,     2,
       1,     6,     2,     1,     9,     3,     2,     2,     1,     3,
       0,     2,     1,     4,     2,     1,     3,     3,     3,     3,
       6,     6,     6,     3,     3,     6,     6,     1,     4,     4,
       2,     4,     3,     1,     0,     3,     1,     2,     3,     3,
       3,     2,     1,     2,     2,     2,     2,     2,     2,     2,
       1,     2,     3,     2,     0,     2,     1,     3,     1,     1,
       1,     3,     6,     1,     4,     4,     7,     4,     4,     3,
       6,     3,     5,     5,     5,     9,     7,     7,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       4,     1,     1,     1,     1,     1,     1,     0,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 31 "stage7.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 32 "stage7.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 33 "stage7.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 35 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,"MAIN",FUNCDEF,NULL,(yyvsp[-2].no),(yyvsp[-1].no),NULL);}
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 37 "stage7.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 38 "stage7.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 41 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,strdup((yyvsp[-8].name)),(yyvsp[-7].name),FUNCDEF,NULL,(yyvsp[-5].no),CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-2].no),(yyvsp[-1].no),NULL),NULL);}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 43 "stage7.y" /* yacc.c:1646  */
    {Current_class=NULL;}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 51 "stage7.y" /* yacc.c:1646  */
    {
									Cptr = CInstall((yyvsp[0].name),NULL);
									Current_class=Cptr;  temp_class=CLASS_TABLE; 
									if(CLASS_TABLE==NULL)
										CLASS_TABLE=Cptr;
									else 
									{
										while(temp_class->Next)
										{
											temp_class=temp_class->Next;
										}
										temp_class->Next=Cptr;
									}
								}
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 65 "stage7.y" /* yacc.c:1646  */
    {Cptr = CInstall((yyvsp[-2].name),(yyvsp[0].name));Current_class=Cptr;    }
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 70 "stage7.y" /* yacc.c:1646  */
    {Class_Finstall(Cptr,(yyvsp[-2].name),(yyvsp[-1].name));}
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 75 "stage7.y" /* yacc.c:1646  */
    {Class_Minstall(Cptr,(yyvsp[-4].name),(yyvsp[-5].name),V_Parameter); V_Parameter=NULL;}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 77 "stage7.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 78 "stage7.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 80 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,strdup((yyvsp[-8].name)),(yyvsp[-7].name),FUNCDEF,NULL,(yyvsp[-5].no),CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-2].no),(yyvsp[-1].no),NULL),NULL);}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 82 "stage7.y" /* yacc.c:1646  */
    { 
										G_TABLE_temp=G_TABLE;
										while(G_TABLE_temp)
										{
											G_TABLE_temp=G_TABLE_temp->prev;
										}
										(yyval.no)=CreateTree(0,0,NULL,GDECLARATION,NULL,NULL,NULL,G_TABLE);
										codeGen((yyval.no), target_file, 0);
										G_TABLE=NULL;
										G_TABLE_temp=NULL;
									  }
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 93 "stage7.y" /* yacc.c:1646  */
    { (yyval.no)=CreateTree(0,0,NULL,GDECLARATION,NULL,NULL,NULL,NULL);}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 97 "stage7.y" /* yacc.c:1646  */
    {
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
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 113 "stage7.y" /* yacc.c:1646  */
    {
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
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 130 "stage7.y" /* yacc.c:1646  */
    {}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 134 "stage7.y" /* yacc.c:1646  */
    {	
											temptypetable=TYPE_TABLE;
				  							while(temptypetable->next)
											  {
												  temptypetable=temptypetable->next;
											  }
											temptypetable->next=TInstall(name,0,tempfield);
											tempfield=NULL;
										}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 143 "stage7.y" /* yacc.c:1646  */
    {
				  							
											temptypetable=TYPE_TABLE;
				  							while(temptypetable->next)
											  {
												  temptypetable=temptypetable->next;
											  }
											temptypetable->next=TInstall(name,0,tempfield);
											tempfield=NULL;
			  							}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 155 "stage7.y" /* yacc.c:1646  */
    {name=strdup((yyvsp[-3].name));Index=0;}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 158 "stage7.y" /* yacc.c:1646  */
    {
											tempfieldlist->next=(struct Fieldlist*)malloc(sizeof(struct Fieldlist));
											tempfieldlist=tempfieldlist->next;	
											tempfieldlist->name=strdup(name);
											tempfieldlist->type=TLookup(type_flag);
											if(tempfield->type==NULL)
											{
												printf("ERROR TYPE not found %s",type_flag);
												exit(0);
											}
											tempfieldlist->typename=strdup(type_flag);
											
											tempfieldlist->fieldIndex=Index;
											name=NULL;type_flag=NULL;
											Index++;
										}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 174 "stage7.y" /* yacc.c:1646  */
    {	
				  							tempfield=(struct Fieldlist*)malloc(sizeof(struct Fieldlist));
											tempfield->name=strdup(name);
											tempfield->type=TLookup(type_flag);
											tempfield->typename=strdup(type_flag);
											if(tempfield->type==NULL)
											{
												printf("ERROR TYPE not found %s",type_flag);
												exit(0);
											}
											tempfield->fieldIndex=Index;
											tempfieldlist=tempfield;
											name=NULL;type_flag=NULL; 
											Index++;
										}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 191 "stage7.y" /* yacc.c:1646  */
    {name=strdup((yyvsp[-1].name));type_flag=strdup((yyvsp[-2].name));}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 193 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(3,0,(yyvsp[0].name),FIELD,NULL,(yyvsp[-2].no),NULL,NULL);}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 194 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(2,0,(yyvsp[0].name),FIELD,NULL,CreateTree(1,0,(yyvsp[-2].name),FIELD,NULL,NULL,NULL,NULL),NULL,NULL);}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 195 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(2,0,(yyvsp[0].name),FIELD,NULL,CreateTree(1,0,(yyvsp[-2].name),FIELD,NULL,NULL,NULL,NULL),NULL,NULL);}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 197 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(2,0,(yyvsp[-3].name),CFUNCALL,NULL,CreateTree(1,0,(yyvsp[-5].name),FIELD,NULL,NULL,NULL,NULL),(yyvsp[-1].no),NULL);}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 198 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(2,0,(yyvsp[-3].name),CFUNCALL,NULL,CreateTree(1,0,(yyvsp[-5].name),FIELD,NULL,NULL,NULL,NULL),(yyvsp[-1].no),NULL);}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 199 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,(yyvsp[-3].name),CFUNCALL,NULL,(yyvsp[-5].no),(yyvsp[-1].no),NULL);}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 201 "stage7.y" /* yacc.c:1646  */
    {
								
									temp_table=G_TABLE_temp;
									while(temp_table)
									{	
				
										temp_table->type=strdup((yyvsp[-2].name));
										temp_table=temp_table->prev;
									}	
															
								}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 215 "stage7.y" /* yacc.c:1646  */
    {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[0].name));
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 223 "stage7.y" /* yacc.c:1646  */
    {
							temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[-3].name));
							temp_table->size=(yyvsp[-1].no)->val;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 231 "stage7.y" /* yacc.c:1646  */
    {
							temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[-3].name));
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							temp_table->paramlist=V_Parameter;
							temp_table->flabel=getlabel();
							G_TABLE_temp=temp_table;
							V_Parameter=NULL; 	
						}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 242 "stage7.y" /* yacc.c:1646  */
    {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[0].name));
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 250 "stage7.y" /* yacc.c:1646  */
    {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[-3].name));
							temp_table->size=(yyvsp[-1].no)->val;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 258 "stage7.y" /* yacc.c:1646  */
    {
							temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[-3].name));
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							temp_table->paramlist=V_Parameter;
							temp_table->flabel=getlabel();
							G_TABLE_temp=temp_table;
							V_Parameter=NULL;
						}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 270 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=NULL;}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 271 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-2].no),(yyvsp[-1].no),NULL);}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 272 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 275 "stage7.y" /* yacc.c:1646  */
    {
								decltypeflag=0;
								(yyval.no)=CreateTree(0,0,NULL,PDECLARATION,NULL,NULL,NULL,G_PARATABLE);
								G_PARATABLE=NULL;
							}
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 280 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,PDECLARATION,NULL,NULL,NULL,NULL);}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 283 "stage7.y" /* yacc.c:1646  */
    {
				 				Temp_Parameter->prev=V_Parameter;
								V_Parameter=Temp_Parameter;
							}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 287 "stage7.y" /* yacc.c:1646  */
    {
				 				Temp_Parameter->prev=V_Parameter;
								V_Parameter=Temp_Parameter;

			 				}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 294 "stage7.y" /* yacc.c:1646  */
    {
							Temp_Parameter=(struct parameter*)malloc(sizeof(struct parameter));
							Temp_Parameter->type=strdup((yyvsp[-1].name));
							Temp_Parameter->name=strdup((yyvsp[0].name));
							
							temp_paratable=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_paratable->name=strdup((yyvsp[0].name));
							temp_paratable->size=1;
							temp_paratable->type=(yyvsp[-1].name);
							temp_paratable->prev=G_PARATABLE;
							G_PARATABLE=temp_paratable;
						}
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 307 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,RETURNST,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 1985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 308 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,RETURNST,NULL,CreateTree(0,INTE,(yyvsp[-1].name),VARIABLE,NULL,NULL,NULL,NULL),NULL,NULL);}
#line 1991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 309 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,RETURNST,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 312 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-1].no),(yyvsp[0].no),NULL);}
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 313 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 316 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 317 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 2021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 318 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 2027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 319 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 2033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 320 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 321 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,BREAKST,NULL,NULL,NULL,NULL);}
#line 2045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 322 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,CONTINUEST,NULL,NULL,NULL,NULL);}
#line 2051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 323 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,RETURNST,NULL,(yyvsp[0].no),NULL,NULL);}
#line 2057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 324 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,BREAKP,NULL,NULL,NULL,NULL);}
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 328 "stage7.y" /* yacc.c:1646  */
    { 
										G_TABLE_temp=G_TABLE;
										while(G_TABLE_temp)
										{
											G_TABLE_temp=G_TABLE_temp->prev;
										}
										(yyval.no)=CreateTree(0,0,NULL,DECLARATION,NULL,NULL,NULL,G_TABLE);
										G_TABLE=NULL;
										G_TABLE_temp=NULL;
									}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 338 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=NULL;}
#line 2084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 339 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=NULL;}
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 342 "stage7.y" /* yacc.c:1646  */
    {			decltypeflag=0;
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
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 358 "stage7.y" /* yacc.c:1646  */
    {					
									decltypeflag=0;
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
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 376 "stage7.y" /* yacc.c:1646  */
    {
						
							while(temp_table)
							{	
							
								temp_table->type=strdup((yyvsp[-2].name));
								temp_table=temp_table->prev;
							}	
						
										
						}
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 390 "stage7.y" /* yacc.c:1646  */
    {(yyval.name)=strdup(INTE);}
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 391 "stage7.y" /* yacc.c:1646  */
    {(yyval.name)=strdup(STRE);}
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 392 "stage7.y" /* yacc.c:1646  */
    {(yyval.name)=strdup((yyvsp[0].name));}
#line 2167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 395 "stage7.y" /* yacc.c:1646  */
    {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[0].name));
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 2179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 403 "stage7.y" /* yacc.c:1646  */
    {
							temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[-3].name));
							temp_table->size=(yyvsp[-1].no)->val;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 410 "stage7.y" /* yacc.c:1646  */
    {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[0].name));
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 417 "stage7.y" /* yacc.c:1646  */
    {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[-3].name));
							temp_table->size=(yyvsp[-1].no)->val;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 2215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 426 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,READ0,NULL,CreateTree(0,INTE,(yyvsp[-1].name),VARIABLE,NULL,NULL,NULL,NULL),NULL,NULL);}
#line 2221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 427 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,READ0,NULL,CreateTree(0,0,(yyvsp[-4].name),VARIABLE,NULL,(yyvsp[-2].no),NULL,NULL),NULL,NULL);}
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 428 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,READ0,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 2233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 431 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,WRITE0,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 2239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 434 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"=",CreateTree(0,INTE,(yyvsp[-2].name),VARIABLE,NULL,NULL,NULL,NULL),(yyvsp[0].no),NULL);}
#line 2245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 435 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"=",CreateTree(0,INTE,(yyvsp[-5].name),VARIABLE,NULL,(yyvsp[-3].no),NULL,NULL),(yyvsp[0].no),NULL);}
#line 2251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 436 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 437 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"=",CreateTree(0,INTE,(yyvsp[-4].name),VARIABLE,NULL,NULL,NULL,NULL),CreateTree(0,NULL1,strdup("alloc"),ALOC,NULL,NULL,NULL,NULL),NULL);}
#line 2263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 438 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,NULL1,strdup("intialize"),INIT,NULL,NULL,NULL,NULL);}
#line 2269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 439 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"=",(yyvsp[-4].no),CreateTree(0,NULL1,strdup("alloc"),ALOC,NULL,NULL,NULL,NULL),NULL);}
#line 2275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 442 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) =  CreateTree(0,BOLE,NULL,IFST,NULL,(yyvsp[-6].no),CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-3].no),(yyvsp[-1].no),NULL),NULL);}
#line 2281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 443 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) =  CreateTree(0,BOLE,NULL,IFST,NULL,(yyvsp[-4].no),CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-1].no),NULL,NULL),NULL);}
#line 2287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 446 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) =  CreateTree(0,BOLE,NULL,WHILEST,NULL,(yyvsp[-4].no),(yyvsp[-1].no),NULL);}
#line 2293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 449 "stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"+",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 450 "stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"-",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 451 "stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"*",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 452 "stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"/",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 453 "stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,"<",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 454 "stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,">",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 455 "stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,">=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 456 "stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,"<=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 457 "stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,"==",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 458 "stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,"!=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 459 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no);}
#line 2359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 460 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,(yyvsp[-3].name),FUNCALL,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 2365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 461 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,(yyvsp[-3].name),VARIABLE,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 2371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 462 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 463 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,(yyvsp[0].name),VARIABLE,NULL,NULL,NULL,NULL);}
#line 2383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 464 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[0].no);}
#line 2389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 465 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[0].no);}
#line 2395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 466 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,NULL1,strdup(NULL1),VARIABLE,NULL,NULL,NULL,NULL);}
#line 2401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 468 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[0].no);}
#line 2407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 469 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=NULL;}
#line 2413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 471 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-2].no),CreateTree(0,(yyvsp[0].no)->type,(yyvsp[0].no)->varname,ARGUMENT,NULL,(yyvsp[0].no),NULL,NULL),NULL);}
#line 2419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 472 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,(yyvsp[0].no)->type,(yyvsp[0].no)->varname,ARGUMENT,NULL,(yyvsp[0].no),NULL,NULL);}
#line 2425 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2429 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 474 "stage7.y" /* yacc.c:1906  */


int yyerror(char const *s)
{
    printf("yyerror %s %s",s,yytext);
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
	TypeTableCreate();
	fprintf(target_file, " %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n BRKP\n",0,2056,0,0,0,0,0,0);
	fprintf(target_file, " MOV SP, 5000\n");
	fprintf(target_file, " PUSH R0\n");
	fprintf(target_file," CALL L0\n");
	fprintf(target_file," MOV SP, 5000\n PUSH R1\n PUSH R0\n MOV R1, \"Exit\"\n PUSH R1\n MOV R1,-2\n PUSH R1\n MOV R0,[%d]\n PUSH R0\n PUSH R1\n PUSH R1\n CALL 0\n POP R0\n POP R1\n POP R1\n POP R1\n POP R1\n POP R0\n POP R1\n",r1);
	yyparse();
	fclose(label_file);
	fclose(target_file);
	return 0;
}
