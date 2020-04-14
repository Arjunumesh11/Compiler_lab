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
#line 1 "./stage_7/stage7.y" /* yacc.c:339  */

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

#line 84 "y.tab.c" /* yacc.c:339  */

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
#line 18 "./stage_7/stage7.y" /* yacc.c:355  */

	char* name;
	struct tnode *no;

#line 209 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 226 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   356

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  219

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

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
      41,    42,     2,     2,    47,     2,    46,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    45,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    48,     2,    49,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,    44,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    29,    29,    30,    31,    32,    33,    35,    37,    38,
      41,    45,    56,    59,    76,    93,    96,   105,   117,   120,
     136,   153,   155,   156,   158,   171,   179,   187,   198,   206,
     214,   227,   228,   229,   232,   237,   239,   244,   250,   264,
     265,   268,   269,   272,   273,   274,   275,   276,   277,   278,
     279,   283,   293,   295,   312,   330,   344,   345,   346,   348,
     356,   364,   371,   380,   381,   382,   385,   388,   389,   390,
     391,   392,   393,   396,   397,   400,   403,   404,   405,   406,
     407,   408,   409,   410,   411,   412,   413,   414,   415,   416,
     417,   418,   419,   421,   422,   424,   425
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ALLOC", "INTIALIZE", "RETURN", "MAIN",
  "READ", "WRITE", "TYPE", "ENDTYPE", "NULL0", "POW", "VAR", "PLUS",
  "MINUS", "MUL", "DIV", "BEGIN0", "END", "NUM", "EQUAL", "GRT", "LST",
  "GRE", "LSE", "NEQUAL", "EEQUAL", "IF", "THEN", "ENDIF", "ENDWHILE",
  "DO", "ELSE", "WHILE", "BREAK", "CONTINUE", "DECL", "ENDDECL", "INT",
  "STR", "'('", "')'", "'{'", "'}'", "';'", "'.'", "','", "'['", "']'",
  "$accept", "Program", "MainBlock", "FuncList", "FuncBlock",
  "GDeclaration", "GDeclList", "TypeDefBlock", "TypeDefList", "TypeDef",
  "FieldDeclList", "FieldDecl", "Field", "GDecl", "GVarlist", "Body",
  "Parameters", "ParamList", "Param", "Retstmt", "Slist", "Stmt",
  "Declarations", "DeclList", "Decl", "Type", "Varlist", "InputStmt",
  "OutputStmt", "AsgStmt", "Ifstmt", "Whilestmt", "expr", "arguments",
  "argument", YY_NULLPTR
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
     295,    40,    41,   123,   125,    59,    46,    44,    91,    93
};
# endif

#define YYPACT_NINF -183

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-183)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      37,    -2,    72,    20,    35,  -183,    25,    36,    53,    84,
    -183,  -183,  -183,  -183,  -183,    92,  -183,   106,    95,  -183,
      20,  -183,    25,  -183,   166,    25,   135,  -183,  -183,  -183,
    -183,   -16,    39,   139,  -183,  -183,   160,  -183,    25,    -3,
    -183,   191,   135,   187,  -183,   195,   167,   135,  -183,  -183,
    -183,   168,   170,   162,  -183,   201,   169,    65,   178,   174,
    -183,  -183,   135,  -183,  -183,   135,   200,   107,   203,   179,
    -183,   204,   182,  -183,   126,  -183,   232,   154,   212,   178,
    -183,  -183,  -183,  -183,   199,   123,   115,   207,   216,    41,
    -183,   217,   218,   215,   221,    -7,   242,   198,  -183,   222,
     223,   235,   236,   237,  -183,   203,   263,  -183,   278,   247,
     249,   280,    96,     4,   282,    96,    96,    96,  -183,  -183,
      10,   288,  -183,   277,  -183,  -183,  -183,  -183,  -183,  -183,
     258,   254,   267,  -183,  -183,   145,   114,  -183,    81,  -183,
      96,   270,   213,   276,   284,   283,  -183,    55,   227,   248,
     285,   283,  -183,  -183,  -183,  -183,   298,  -183,    96,  -183,
      96,    96,   262,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,  -183,   286,   287,   306,   301,   299,   290,
     289,    76,   283,   291,   292,   127,  -183,   101,   101,  -183,
    -183,   297,   297,   297,   297,   297,   297,  -183,  -183,    96,
     198,   198,  -183,  -183,   293,  -183,    96,  -183,   283,  -183,
     150,   164,  -183,   283,  -183,   198,  -183,   189,  -183
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     6,     0,     0,     0,     0,
      17,    58,    12,    56,    57,     0,    14,     0,     0,     1,
      56,     5,     0,     9,     0,     0,     0,    15,    16,    11,
      13,    28,     0,     0,     4,     8,     0,     3,     0,     0,
      20,     0,    35,     0,    24,     0,     0,    35,     2,    18,
      19,     0,     0,    34,    37,     0,     0,    25,     0,     0,
      21,    30,     0,    38,    29,    35,     0,     0,     0,     0,
      36,     0,     0,    52,     0,    54,     0,     0,     0,     0,
      27,    26,    51,    53,    61,     0,     0,     0,     0,     0,
      31,     0,     0,     0,     0,     0,    50,     0,    42,     0,
       0,     0,     0,     0,     7,     0,     0,    55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
       0,     0,    33,    50,    41,    43,    44,    45,    46,    47,
       0,     0,    59,    40,    39,     0,     0,    92,    90,    89,
       0,    91,     0,     0,     0,    67,    23,     0,     0,     0,
       0,    69,    22,    32,    10,    62,     0,    63,     0,    65,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    66,     0,     0,     0,     0,     0,     0,
       0,     0,    96,     0,    93,     0,    86,    76,    77,    78,
      79,    81,    80,    82,    83,    85,    84,    70,    71,     0,
       0,     0,    72,    60,     0,    87,     0,    88,    68,    50,
       0,     0,    64,    95,    74,     0,    75,     0,    73
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -183,  -183,     6,   309,    45,   329,  -183,  -183,  -183,   328,
    -183,   302,   -77,   325,  -183,   238,    61,  -183,   294,   -55,
    -182,   -96,   265,  -183,   268,     1,  -183,  -183,  -183,  -183,
    -183,  -183,  -111,  -183,  -183
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,    22,    23,     6,    15,     7,     9,    10,
      39,    40,   141,    16,    32,    78,    52,    53,    54,   209,
      97,    98,    68,    74,    75,    24,    85,    99,   100,   101,
     102,   103,   142,   183,   184
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      95,   124,   145,    17,   147,   148,   149,   143,   144,   151,
      11,     8,    21,   150,   120,   137,    17,   138,   210,   211,
      95,   137,    96,   138,   139,    42,    18,    41,    34,   162,
     139,    37,    43,   217,   136,    19,    13,    14,    11,   121,
      41,    49,   123,    55,    48,   140,     1,   181,    55,   182,
     185,   140,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   113,    55,    20,    14,    55,    35,    76,   163,
     164,   165,   166,     2,     2,    76,     3,   167,   168,   169,
     170,   171,   172,    35,    44,    11,    45,   114,   208,   115,
     163,   164,   165,   166,    27,   213,    26,     8,   167,   168,
     169,   170,   171,   172,   176,    11,    65,   137,    59,   138,
      12,    13,    14,    66,   124,   124,   139,   165,   166,    31,
      11,   124,   160,    95,    95,   204,    71,   114,   109,   161,
      29,    13,    14,    95,    95,   110,    33,   140,    95,    11,
      95,   163,   164,   165,   166,    73,    13,    14,    11,   167,
     168,   169,   170,   171,   172,    86,   159,    87,    88,    86,
     121,    87,    88,    89,    82,    13,    14,    89,   107,    86,
     108,    87,    88,    90,    13,    14,   207,    89,    91,    36,
     214,    46,    91,   215,    92,    93,    94,   157,    92,    93,
      94,   114,    91,   158,    86,   216,    87,    88,    92,    93,
      94,    47,    89,    86,    51,    87,    88,    56,    57,    62,
      58,    89,    61,    60,    63,    67,    69,    91,    64,   218,
      72,    77,    79,    92,    93,    94,    91,   163,   164,   165,
     166,    81,    92,    93,    94,   167,   168,   169,   170,   171,
     172,   163,   164,   165,   166,    84,    80,   106,   111,   167,
     168,   169,   170,   171,   172,   173,   104,   112,   116,   117,
     118,   122,   163,   164,   165,   166,   119,   125,   126,   177,
     167,   168,   169,   170,   171,   172,   163,   164,   165,   166,
     127,   128,   129,   131,   167,   168,   169,   170,   171,   172,
     178,   132,   133,   135,   134,   146,   153,   163,   164,   165,
     166,   152,   154,   155,   186,   167,   168,   169,   170,   171,
     172,   163,   164,   165,   166,   156,   121,   174,   180,    -1,
      -1,    -1,    -1,    -1,    -1,   175,   179,   199,   197,   198,
     200,   201,   202,   205,    38,   212,    25,    28,   203,   206,
      30,    50,    83,   130,   105,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    70
};

static const yytype_int16 yycheck[] =
{
      77,    97,   113,     2,   115,   116,   117,     3,     4,   120,
      13,    13,     6,     3,    21,    11,    15,    13,   200,   201,
      97,    11,    77,    13,    20,    41,     6,    26,    22,   140,
      20,    25,    48,   215,   111,     0,    39,    40,    13,    46,
      39,    44,    97,    42,    38,    41,     9,   158,    47,   160,
     161,    41,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,    21,    62,    39,    40,    65,    22,    67,    14,
      15,    16,    17,    37,    37,    74,    39,    22,    23,    24,
      25,    26,    27,    38,    45,    13,    47,    46,   199,    48,
      14,    15,    16,    17,    10,   206,    43,    13,    22,    23,
      24,    25,    26,    27,    49,    13,    41,    11,    47,    13,
      38,    39,    40,    48,   210,   211,    20,    16,    17,    13,
      13,   217,    41,   200,   201,    49,    65,    46,    13,    48,
      38,    39,    40,   210,   211,    20,    41,    41,   215,    13,
     217,    14,    15,    16,    17,    38,    39,    40,    13,    22,
      23,    24,    25,    26,    27,     5,    42,     7,     8,     5,
      46,     7,     8,    13,    38,    39,    40,    13,    45,     5,
      47,     7,     8,    19,    39,    40,    49,    13,    28,    13,
      30,    42,    28,    33,    34,    35,    36,    42,    34,    35,
      36,    46,    28,    48,     5,    31,     7,     8,    34,    35,
      36,    41,    13,     5,    13,     7,     8,    20,    13,    47,
      43,    13,    42,    45,    13,    37,    42,    28,    49,    30,
      20,    18,    43,    34,    35,    36,    28,    14,    15,    16,
      17,    49,    34,    35,    36,    22,    23,    24,    25,    26,
      27,    14,    15,    16,    17,    13,    42,    48,    41,    22,
      23,    24,    25,    26,    27,    42,    44,    41,    41,    41,
      45,    19,    14,    15,    16,    17,    45,    45,    45,    42,
      22,    23,    24,    25,    26,    27,    14,    15,    16,    17,
      45,    45,    45,    20,    22,    23,    24,    25,    26,    27,
      42,    13,    45,    13,    45,    13,    19,    14,    15,    16,
      17,    13,    44,    49,    42,    22,    23,    24,    25,    26,
      27,    14,    15,    16,    17,    48,    46,    41,    20,    22,
      23,    24,    25,    26,    27,    41,    41,    21,    42,    42,
      29,    32,    42,    42,    25,    42,     7,     9,    49,    47,
      15,    39,    74,   105,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    37,    39,    51,    52,    55,    57,    13,    58,
      59,    13,    38,    39,    40,    56,    63,    75,     6,     0,
      39,    52,    53,    54,    75,    55,    43,    10,    59,    38,
      63,    13,    64,    41,    52,    54,    13,    52,    53,    60,
      61,    75,    41,    48,    45,    47,    42,    41,    52,    44,
      61,    13,    66,    67,    68,    75,    20,    13,    43,    66,
      45,    42,    47,    13,    49,    41,    48,    37,    72,    42,
      68,    66,    20,    38,    73,    74,    75,    18,    65,    43,
      42,    49,    38,    74,    13,    76,     5,     7,     8,    13,
      19,    28,    34,    35,    36,    62,    69,    70,    71,    77,
      78,    79,    80,    81,    44,    72,    48,    45,    47,    13,
      20,    41,    41,    21,    46,    48,    41,    41,    45,    45,
      21,    46,    19,    69,    71,    45,    45,    45,    45,    45,
      65,    20,    13,    45,    45,    13,    62,    11,    13,    20,
      41,    62,    82,     3,     4,    82,    13,    82,    82,    82,
       3,    82,    13,    19,    44,    49,    48,    42,    48,    42,
      41,    48,    82,    14,    15,    16,    17,    22,    23,    24,
      25,    26,    27,    42,    41,    41,    49,    42,    42,    41,
      20,    82,    82,    83,    84,    82,    42,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    42,    42,    21,
      29,    32,    42,    49,    49,    42,    47,    49,    82,    69,
      70,    70,    42,    82,    30,    33,    31,    70,    30
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    51,    51,    51,    51,    52,    53,    53,
      54,    55,    55,    56,    56,    57,    58,    58,    59,    60,
      60,    61,    62,    62,    63,    64,    64,    64,    64,    64,
      64,    65,    65,    65,    66,    66,    67,    67,    68,    69,
      69,    70,    70,    71,    71,    71,    71,    71,    71,    71,
      71,    72,    72,    73,    73,    74,    75,    75,    75,    76,
      76,    76,    76,    77,    77,    77,    78,    79,    79,    79,
      79,    79,    79,    80,    80,    81,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    83,    83,    84,    84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     3,     3,     2,     1,     8,     2,     1,
       9,     3,     2,     2,     1,     3,     2,     1,     4,     2,
       1,     3,     3,     3,     3,     3,     6,     6,     1,     4,
       4,     2,     4,     3,     1,     0,     3,     1,     2,     3,
       3,     2,     1,     2,     2,     2,     2,     2,     2,     2,
       1,     3,     2,     2,     1,     3,     1,     1,     1,     3,
       6,     1,     4,     4,     7,     4,     4,     3,     6,     3,
       5,     5,     5,     9,     7,     7,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     4,     4,     1,
       1,     1,     1,     1,     0,     3,     1
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
#line 29 "./stage_7/stage7.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 30 "./stage_7/stage7.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 31 "./stage_7/stage7.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 32 "./stage_7/stage7.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 33 "./stage_7/stage7.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 35 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,"MAIN",FUNCDEF,NULL,(yyvsp[-2].no),(yyvsp[-1].no),NULL);}
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 37 "./stage_7/stage7.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 38 "./stage_7/stage7.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 41 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,strdup((yyvsp[-8].name)),(yyvsp[-7].name),FUNCDEF,NULL,(yyvsp[-5].no),CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-2].no),(yyvsp[-1].no),NULL),NULL);}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 45 "./stage_7/stage7.y" /* yacc.c:1646  */
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
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 56 "./stage_7/stage7.y" /* yacc.c:1646  */
    { (yyval.no)=CreateTree(0,0,NULL,GDECLARATION,NULL,NULL,NULL,NULL);}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 60 "./stage_7/stage7.y" /* yacc.c:1646  */
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
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 76 "./stage_7/stage7.y" /* yacc.c:1646  */
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
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 93 "./stage_7/stage7.y" /* yacc.c:1646  */
    {}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 96 "./stage_7/stage7.y" /* yacc.c:1646  */
    {	
											temptypetable=TYPE_TABLE;
				  							while(temptypetable->next)
											  {
												  temptypetable=temptypetable->next;
											  }
											temptypetable->next=TInstall(name,0,tempfield);
											tempfield=NULL;
										}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 105 "./stage_7/stage7.y" /* yacc.c:1646  */
    {
				  							
											temptypetable=TYPE_TABLE;
				  							while(temptypetable->next)
											  {
												  temptypetable=temptypetable->next;
											  }
											temptypetable->next=TInstall(name,0,tempfield);
											tempfield=NULL;
			  							}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 117 "./stage_7/stage7.y" /* yacc.c:1646  */
    {name=strdup((yyvsp[-3].name));Index=0;}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 120 "./stage_7/stage7.y" /* yacc.c:1646  */
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
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 136 "./stage_7/stage7.y" /* yacc.c:1646  */
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
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 153 "./stage_7/stage7.y" /* yacc.c:1646  */
    {name=strdup((yyvsp[-1].name));type_flag=strdup((yyvsp[-2].name));}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 155 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(3,0,(yyvsp[0].name),FIELD,NULL,(yyvsp[-2].no),NULL,NULL);}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 156 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(2,0,(yyvsp[0].name),FIELD,NULL,CreateTree(1,0,(yyvsp[-2].name),FIELD,NULL,NULL,NULL,NULL),NULL,NULL);}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 158 "./stage_7/stage7.y" /* yacc.c:1646  */
    {
								
									temp_table=G_TABLE_temp;
									while(temp_table)
									{	
										
										temp_table->type=strdup((yyvsp[-2].name));
										temp_table=temp_table->prev;
									}	
															
								}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 172 "./stage_7/stage7.y" /* yacc.c:1646  */
    {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[0].name));
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 180 "./stage_7/stage7.y" /* yacc.c:1646  */
    {
							temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[-3].name));
							temp_table->size=(yyvsp[-1].no)->val;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 188 "./stage_7/stage7.y" /* yacc.c:1646  */
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
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 199 "./stage_7/stage7.y" /* yacc.c:1646  */
    {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[0].name));
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 207 "./stage_7/stage7.y" /* yacc.c:1646  */
    {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[-3].name));
							temp_table->size=(yyvsp[-1].no)->val;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 215 "./stage_7/stage7.y" /* yacc.c:1646  */
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
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 227 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no)=NULL;}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 228 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-2].no),(yyvsp[-1].no),NULL);}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 229 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 232 "./stage_7/stage7.y" /* yacc.c:1646  */
    {
								decltypeflag=0;
								(yyval.no)=CreateTree(0,0,NULL,PDECLARATION,NULL,NULL,NULL,G_PARATABLE);
								G_PARATABLE=NULL;
							}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 237 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no)=NULL;}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 240 "./stage_7/stage7.y" /* yacc.c:1646  */
    {
				 				Temp_Parameter->prev=V_Parameter;
								V_Parameter=Temp_Parameter;
							}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 244 "./stage_7/stage7.y" /* yacc.c:1646  */
    {
				 				Temp_Parameter->prev=V_Parameter;
								V_Parameter=Temp_Parameter;

			 				}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 251 "./stage_7/stage7.y" /* yacc.c:1646  */
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
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 264 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,RETURNST,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 265 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,RETURNST,NULL,CreateTree(0,INTE,(yyvsp[-1].name),VARIABLE,NULL,NULL,NULL,NULL),NULL,NULL);}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 268 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-1].no),(yyvsp[0].no),NULL);}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 269 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 272 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 273 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 274 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 275 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 276 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 277 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,BREAKST,NULL,NULL,NULL,NULL);}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 278 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,CONTINUEST,NULL,NULL,NULL,NULL);}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 279 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,RETURNST,NULL,(yyvsp[0].no),NULL,NULL);}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 283 "./stage_7/stage7.y" /* yacc.c:1646  */
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
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 293 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no)=NULL;}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 296 "./stage_7/stage7.y" /* yacc.c:1646  */
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
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 312 "./stage_7/stage7.y" /* yacc.c:1646  */
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
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 330 "./stage_7/stage7.y" /* yacc.c:1646  */
    {
						
							while(temp_table)
							{	
							
								temp_table->type=strdup((yyvsp[-2].name));
								temp_table=temp_table->prev;
							}	
						
										
						}
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 344 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.name)=strdup(INTE);}
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 345 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.name)=strdup(STRE);}
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 346 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.name)=strdup((yyvsp[0].name));}
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 349 "./stage_7/stage7.y" /* yacc.c:1646  */
    {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[0].name));
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 357 "./stage_7/stage7.y" /* yacc.c:1646  */
    {
							temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[-3].name));
							temp_table->size=(yyvsp[-1].no)->val;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 364 "./stage_7/stage7.y" /* yacc.c:1646  */
    {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[0].name));
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 371 "./stage_7/stage7.y" /* yacc.c:1646  */
    {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[-3].name));
							temp_table->size=(yyvsp[-1].no)->val;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 380 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,READ0,NULL,CreateTree(0,INTE,(yyvsp[-1].name),VARIABLE,NULL,NULL,NULL,NULL),NULL,NULL);}
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 381 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,READ0,NULL,CreateTree(0,0,(yyvsp[-4].name),VARIABLE,NULL,(yyvsp[-2].no),NULL,NULL),NULL,NULL);}
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 382 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,READ0,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 385 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,WRITE0,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 2094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 388 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"=",CreateTree(0,INTE,(yyvsp[-2].name),VARIABLE,NULL,NULL,NULL,NULL),(yyvsp[0].no),NULL);}
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 389 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"=",CreateTree(0,INTE,(yyvsp[-5].name),VARIABLE,NULL,(yyvsp[-3].no),NULL,NULL),(yyvsp[0].no),NULL);}
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 390 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 391 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"=",CreateTree(0,INTE,(yyvsp[-4].name),VARIABLE,NULL,NULL,NULL,NULL),CreateTree(0,NULL1,strdup("alloc"),ALOC,NULL,NULL,NULL,NULL),NULL);}
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 392 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,NULL1,strdup("intialize"),INIT,NULL,NULL,NULL,NULL);}
#line 2124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 393 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"=",(yyvsp[-4].no),CreateTree(0,NULL1,strdup("alloc"),ALOC,NULL,NULL,NULL,NULL),NULL);}
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 396 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) =  CreateTree(0,BOLE,NULL,IFST,NULL,(yyvsp[-6].no),CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-3].no),(yyvsp[-1].no),NULL),NULL);}
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 397 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) =  CreateTree(0,BOLE,NULL,IFST,NULL,(yyvsp[-4].no),CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-1].no),NULL,NULL),NULL);}
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 400 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) =  CreateTree(0,BOLE,NULL,WHILEST,NULL,(yyvsp[-4].no),(yyvsp[-1].no),NULL);}
#line 2148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 403 "./stage_7/stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"+",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 404 "./stage_7/stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"-",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 405 "./stage_7/stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"*",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 406 "./stage_7/stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"/",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 407 "./stage_7/stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,"<",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 408 "./stage_7/stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,">",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 409 "./stage_7/stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,">=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 410 "./stage_7/stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,"<=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 411 "./stage_7/stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,"==",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 412 "./stage_7/stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,"!=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 413 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no);}
#line 2214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 414 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,(yyvsp[-3].name),FUNCALL,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 415 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,(yyvsp[-3].name),VARIABLE,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 416 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 417 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,(yyvsp[0].name),VARIABLE,NULL,NULL,NULL,NULL);}
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 418 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[0].no);}
#line 2244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 419 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,NULL1,strdup(NULL1),VARIABLE,NULL,NULL,NULL,NULL);}
#line 2250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 421 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[0].no);}
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 422 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no)=NULL;}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 424 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-2].no),CreateTree(0,(yyvsp[0].no)->type,(yyvsp[0].no)->varname,ARGUMENT,NULL,(yyvsp[0].no),NULL,NULL),NULL);}
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 425 "./stage_7/stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,(yyvsp[0].no)->type,(yyvsp[0].no)->varname,ARGUMENT,NULL,(yyvsp[0].no),NULL,NULL);}
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2278 "y.tab.c" /* yacc.c:1646  */
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
#line 427 "./stage_7/stage7.y" /* yacc.c:1906  */


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
