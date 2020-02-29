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
#line 1 "stage5.y" /* yacc.c:339  */

	#include <stdlib.h>
	#include <stdio.h>
	#include "exprtree.h"
	//#include "exprtree.c"
	int yylex(void);
	int labels;
	int r1,type_flag=0,ptype_flag=0,decltypeflag;
	FILE *target_file,*yyin,*f;
	struct symboltable *temp_table,*G_TABLE_temp,*G_TABLE,*temp_paratable,*G_PARATABLE;


#line 79 "y.tab.c" /* yacc.c:339  */

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
#line 13 "stage5.y" /* yacc.c:355  */

	struct tnode *no;

#line 197 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 214 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   298

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  203

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

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
      38,    39,     2,     2,    43,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    42,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,     2,    41,     2,     2,     2,     2,
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
      35,    36,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    22,    22,    23,    24,    25,    26,    28,    30,    31,
      34,    38,    49,    52,    69,    86,    89,    90,    93,    96,
      97,   100,   102,   103,   104,   106,   118,   126,   134,   145,
     153,   161,   174,   175,   176,   179,   184,   186,   191,   197,
     211,   212,   215,   216,   219,   220,   221,   222,   223,   224,
     225,   226,   230,   240,   242,   259,   277,   288,   289,   291,
     292,   294,   302,   310,   317,   326,   327,   330,   333,   334,
     337,   338,   341,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   360,   361,
     363,   364
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "RETURN", "MAIN", "READ", "WRITE",
  "TYPE", "ENDTYPE", "POW", "VAR", "PLUS", "MINUS", "MUL", "DIV", "BEGIN0",
  "END", "NUM", "EQUAL", "GRT", "LST", "GRE", "LSE", "NEQUAL", "EEQUAL",
  "IF", "THEN", "ENDIF", "ENDWHILE", "DO", "ELSE", "WHILE", "BREAK",
  "CONTINUE", "DECL", "ENDDECL", "INT", "STR", "'('", "')'", "'{'", "'}'",
  "';'", "','", "'['", "']'", "$accept", "Program", "MainBlock",
  "FuncList", "FuncBlock", "GDeclaration", "GDeclList", "TypeDefBlock",
  "TypeDefList", "TypeDef", "FieldDeclList", "FieldDecl", "TypeName",
  "GDecl", "GVarlist", "Body", "Parameters", "ParamList", "Param",
  "Retstmt", "Slist", "Stmt", "Declarations", "DeclList", "Decl", "PType",
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
     285,   286,   287,   288,   289,   290,   291,   292,    40,    41,
     123,   125,    59,    44,    91,    93
};
# endif

#define YYPACT_NINF -176

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-176)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      92,     6,    23,   106,    69,  -176,    78,    66,    72,    96,
    -176,  -176,  -176,  -176,   128,  -176,   120,    99,  -176,   106,
    -176,    78,  -176,   129,    78,    15,  -176,  -176,  -176,  -176,
      -4,    37,   107,  -176,  -176,   109,  -176,    78,  -176,  -176,
    -176,    61,  -176,   143,    88,   139,  -176,   145,   112,    88,
    -176,  -176,  -176,   119,  -176,  -176,   131,   137,  -176,   171,
     140,    49,   148,   144,  -176,  -176,    88,  -176,  -176,    88,
     167,   138,   172,   146,  -176,   149,   151,  -176,   142,  -176,
     179,   117,   169,   148,  -176,  -176,  -176,  -176,   168,   101,
      51,   152,   173,    -9,  -176,   175,   183,   180,   182,   207,
     166,  -176,   184,   189,   190,   191,   203,  -176,   172,   208,
    -176,   236,   205,   206,   246,    -2,    -2,    -2,    -2,    -2,
    -176,  -176,  -176,   241,  -176,  -176,  -176,  -176,  -176,  -176,
     217,   214,   222,  -176,  -176,   -27,    65,  -176,    -2,   181,
     251,     8,   195,   216,  -176,  -176,  -176,   243,  -176,    -2,
      -2,    -2,   230,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,  -176,   249,   235,   239,   237,    43,   251,
     242,   240,    62,  -176,   121,   121,  -176,  -176,   265,   265,
     265,   265,   265,   265,    -2,   166,   166,  -176,   252,  -176,
      -2,  -176,   251,  -176,    86,   126,  -176,   251,  -176,   166,
    -176,   135,  -176
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     6,     0,     0,     0,     0,
      17,    12,    59,    60,     0,    14,     0,     0,     1,    59,
       5,     0,     9,     0,     0,     0,    15,    16,    11,    13,
      29,     0,     0,     4,     8,     0,     3,     0,    24,    22,
      23,     0,    20,     0,    36,     0,    25,     0,     0,    36,
       2,    18,    19,     0,    57,    58,     0,    35,    38,     0,
       0,    26,     0,     0,    21,    31,     0,    39,    30,    36,
       0,     0,     0,     0,    37,     0,     0,    53,     0,    55,
       0,     0,     0,     0,    28,    27,    52,    54,    63,     0,
       0,     0,     0,     0,    32,     0,     0,     0,     0,    51,
       0,    43,     0,     0,     0,     0,     0,     7,     0,     0,
      56,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,    50,    34,    51,    42,    44,    45,    46,    47,    48,
       0,     0,    61,    41,    40,     0,    87,    86,     0,     0,
      68,     0,     0,     0,    33,    10,    64,     0,    65,     0,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    67,     0,     0,     0,     0,     0,    91,
       0,    88,     0,    83,    73,    74,    75,    76,    78,    77,
      79,    80,    82,    81,     0,     0,     0,    62,     0,    84,
       0,    85,    69,    51,     0,     0,    66,    90,    71,     0,
      72,     0,    70
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -176,  -176,    84,   256,   -19,   283,  -176,  -176,  -176,   284,
    -176,   253,  -176,   278,  -176,   187,   -46,  -176,   231,   -67,
    -175,  -100,   213,  -176,   220,  -176,    -1,  -176,  -176,  -176,
    -176,  -176,  -176,  -112,  -176,  -176
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,    21,    22,     6,    14,     7,     9,    10,
      41,    42,    43,    15,    31,    82,    56,    57,    58,   193,
     100,   101,    72,    78,    79,    59,    23,    89,   102,   103,
     104,   105,   106,   139,   170,   171
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     124,    16,    34,    63,   140,   141,   142,   143,   136,   116,
     194,   195,   148,    16,    99,   137,     8,   149,    34,   153,
     154,   155,   156,    75,   201,    38,   152,   157,   158,   159,
     160,   161,   162,   123,    44,   117,   138,   168,   169,   172,
      45,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,    39,    40,   164,   153,   154,   155,   156,    11,    12,
      13,   112,   157,   158,   159,   160,   161,   162,   113,    18,
      80,    38,   192,   153,   154,   155,   156,    80,   197,    46,
      47,   157,   158,   159,   160,   161,   162,    69,   188,    90,
      20,    91,    92,    70,   124,   124,    93,    39,    40,     1,
       2,   124,    51,   150,    26,    33,     8,   191,    36,   151,
      17,    95,    25,   198,    19,    13,   199,    96,    97,    98,
      90,    50,    91,    92,    54,    55,     2,    93,     3,    90,
      30,    91,    92,    94,   155,   156,    93,    32,    90,    35,
      91,    92,    95,   110,   111,    93,    48,    49,    96,    97,
      98,    95,    62,    53,   200,    61,    60,    96,    97,    98,
      95,    64,   202,    28,    12,    13,    96,    97,    98,    90,
      65,    91,    92,    77,    12,    13,    93,    86,    12,    13,
      66,    67,    71,    73,    76,    68,    83,    81,    84,    88,
     114,    95,   153,   154,   155,   156,    85,    96,    97,    98,
     157,   158,   159,   160,   161,   162,   153,   154,   155,   156,
     107,   115,   109,   118,   157,   158,   159,   160,   161,   162,
     163,   119,   120,   122,   121,   131,   125,   153,   154,   155,
     156,   126,   127,   128,   165,   157,   158,   159,   160,   161,
     162,   153,   154,   155,   156,   129,   132,   133,   134,   157,
     158,   159,   160,   161,   162,   166,   135,   144,   145,   146,
     167,   185,   153,   154,   155,   156,   147,   184,   186,   173,
     157,   158,   159,   160,   161,   162,   153,   154,   155,   156,
      37,   189,   187,   190,    -1,    -1,    -1,    -1,    -1,    -1,
      24,   196,    29,    27,    52,   130,   108,    74,    87
};

static const yytype_uint8 yycheck[] =
{
     100,     2,    21,    49,   116,   117,   118,   119,    10,    18,
     185,   186,    39,    14,    81,    17,    10,    44,    37,    11,
      12,    13,    14,    69,   199,    10,   138,    19,    20,    21,
      22,    23,    24,   100,    38,    44,    38,   149,   150,   151,
      44,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,    36,    37,    45,    11,    12,    13,    14,    35,    36,
      37,    10,    19,    20,    21,    22,    23,    24,    17,     0,
      71,    10,   184,    11,    12,    13,    14,    78,   190,    42,
      43,    19,    20,    21,    22,    23,    24,    38,    45,     3,
       6,     5,     6,    44,   194,   195,    10,    36,    37,     7,
      34,   201,    41,    38,     8,    21,    10,    45,    24,    44,
       4,    25,    40,    27,    36,    37,    30,    31,    32,    33,
       3,    37,     5,     6,    36,    37,    34,    10,    36,     3,
      10,     5,     6,    16,    13,    14,    10,    38,     3,    10,
       5,     6,    25,    42,    43,    10,    39,    38,    31,    32,
      33,    25,    40,    10,    28,    10,    17,    31,    32,    33,
      25,    42,    27,    35,    36,    37,    31,    32,    33,     3,
      39,     5,     6,    35,    36,    37,    10,    35,    36,    37,
      43,    10,    34,    39,    17,    45,    40,    15,    39,    10,
      38,    25,    11,    12,    13,    14,    45,    31,    32,    33,
      19,    20,    21,    22,    23,    24,    11,    12,    13,    14,
      41,    38,    44,    38,    19,    20,    21,    22,    23,    24,
      39,    38,    42,    16,    42,    17,    42,    11,    12,    13,
      14,    42,    42,    42,    39,    19,    20,    21,    22,    23,
      24,    11,    12,    13,    14,    42,    10,    42,    42,    19,
      20,    21,    22,    23,    24,    39,    10,    16,    41,    45,
      17,    26,    11,    12,    13,    14,    44,    18,    29,    39,
      19,    20,    21,    22,    23,    24,    11,    12,    13,    14,
      24,    39,    45,    43,    19,    20,    21,    22,    23,    24,
       7,    39,    14,     9,    41,   108,    83,    66,    78
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    34,    36,    47,    48,    51,    53,    10,    54,
      55,    35,    36,    37,    52,    59,    72,     4,     0,    36,
      48,    49,    50,    72,    51,    40,     8,    55,    35,    59,
      10,    60,    38,    48,    50,    10,    48,    49,    10,    36,
      37,    56,    57,    58,    38,    44,    42,    43,    39,    38,
      48,    41,    57,    10,    36,    37,    62,    63,    64,    71,
      17,    10,    40,    62,    42,    39,    43,    10,    45,    38,
      44,    34,    68,    39,    64,    62,    17,    35,    69,    70,
      72,    15,    61,    40,    39,    45,    35,    70,    10,    73,
       3,     5,     6,    10,    16,    25,    31,    32,    33,    65,
      66,    67,    74,    75,    76,    77,    78,    41,    68,    44,
      42,    43,    10,    17,    38,    38,    18,    44,    38,    38,
      42,    42,    16,    65,    67,    42,    42,    42,    42,    42,
      61,    17,    10,    42,    42,    10,    10,    17,    38,    79,
      79,    79,    79,    79,    16,    41,    45,    44,    39,    44,
      38,    44,    79,    11,    12,    13,    14,    19,    20,    21,
      22,    23,    24,    39,    45,    39,    39,    17,    79,    79,
      80,    81,    79,    39,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    18,    26,    29,    45,    45,    39,
      43,    45,    79,    65,    66,    66,    39,    79,    27,    30,
      28,    66,    27
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    47,    47,    47,    47,    48,    49,    49,
      50,    51,    51,    52,    52,    53,    54,    54,    55,    56,
      56,    57,    58,    58,    58,    59,    60,    60,    60,    60,
      60,    60,    61,    61,    61,    62,    62,    63,    63,    64,
      65,    65,    66,    66,    67,    67,    67,    67,    67,    67,
      67,    67,    68,    68,    69,    69,    70,    71,    71,    72,
      72,    73,    73,    73,    73,    74,    74,    75,    76,    76,
      77,    77,    78,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    80,    80,
      81,    81
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     3,     3,     2,     1,     8,     2,     1,
       9,     3,     2,     2,     1,     3,     2,     1,     4,     2,
       1,     3,     1,     1,     1,     3,     3,     6,     6,     1,
       4,     4,     2,     4,     3,     1,     0,     3,     1,     2,
       3,     3,     2,     1,     2,     2,     2,     2,     2,     2,
       2,     1,     3,     2,     2,     1,     3,     1,     1,     1,
       1,     3,     6,     1,     4,     4,     7,     4,     3,     6,
       9,     7,     7,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     4,     1,     1,     1,     0,
       3,     1
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
#line 22 "stage5.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 23 "stage5.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 24 "stage5.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 25 "stage5.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 26 "stage5.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 28 "stage5.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,"MAIN",FUNCDEF,NULL,(yyvsp[-2].no),(yyvsp[-1].no),NULL);}
#line 1478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 30 "stage5.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 31 "stage5.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 34 "stage5.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,(yyvsp[-7].no)->varname,FUNCDEF,NULL,(yyvsp[-5].no),CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-2].no),(yyvsp[-1].no),NULL),NULL);}
#line 1496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 38 "stage5.y" /* yacc.c:1646  */
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
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 49 "stage5.y" /* yacc.c:1646  */
    { (yyval.no)=CreateTree(0,0,NULL,GDECLARATION,NULL,NULL,NULL,NULL);}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 53 "stage5.y" /* yacc.c:1646  */
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
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 69 "stage5.y" /* yacc.c:1646  */
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
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 106 "stage5.y" /* yacc.c:1646  */
    {
								
									temp_table=G_TABLE_temp;
									while(temp_table)
									{	
										temp_table->type=type_flag;
										temp_table=temp_table->prev;
									}	
															
								}
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 119 "stage5.y" /* yacc.c:1646  */
    {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[0].no)->varname);
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 127 "stage5.y" /* yacc.c:1646  */
    {
							temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[-3].no)->varname);
							temp_table->size=(yyvsp[-1].no)->val;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 135 "stage5.y" /* yacc.c:1646  */
    {
							temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[-3].no)->varname);
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							temp_table->paramlist=V_Parameter;
							temp_table->flabel=getlabel();
							G_TABLE_temp=temp_table;
							V_Parameter=NULL; 	
						}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 146 "stage5.y" /* yacc.c:1646  */
    {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[0].no)->varname);
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 154 "stage5.y" /* yacc.c:1646  */
    {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[-3].no)->varname);
							temp_table->size=(yyvsp[-1].no)->val;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 162 "stage5.y" /* yacc.c:1646  */
    {
							temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[-3].no)->varname);
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							temp_table->paramlist=V_Parameter;
							temp_table->flabel=getlabel();
							G_TABLE_temp=temp_table;
							V_Parameter=NULL;
						}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 174 "stage5.y" /* yacc.c:1646  */
    {(yyval.no)=NULL;}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 175 "stage5.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-2].no),(yyvsp[-1].no),NULL);}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 176 "stage5.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 179 "stage5.y" /* yacc.c:1646  */
    {
								decltypeflag=0;
								(yyval.no)=CreateTree(0,0,NULL,PDECLARATION,NULL,NULL,NULL,G_PARATABLE);
								G_PARATABLE=NULL;
							}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 184 "stage5.y" /* yacc.c:1646  */
    {(yyval.no)=NULL;}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 187 "stage5.y" /* yacc.c:1646  */
    {
				 				Temp_Parameter->prev=V_Parameter;
								V_Parameter=Temp_Parameter;
							}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 191 "stage5.y" /* yacc.c:1646  */
    {
				 				Temp_Parameter->prev=V_Parameter;
								V_Parameter=Temp_Parameter;

			 				}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 198 "stage5.y" /* yacc.c:1646  */
    {
							Temp_Parameter=(struct parameter*)malloc(sizeof(struct parameter));
							Temp_Parameter->type=ptype_flag;
							Temp_Parameter->name=strdup((yyvsp[0].no)->varname);
							
							temp_paratable=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_paratable->name=strdup((yyvsp[0].no)->varname);
							temp_paratable->size=1;
							temp_paratable->type=ptype_flag;
							temp_paratable->prev=G_PARATABLE;
							G_PARATABLE=temp_paratable;
						}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 211 "stage5.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,RETURNST,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 212 "stage5.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,RETURNST,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 215 "stage5.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-1].no),(yyvsp[0].no),NULL);}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 216 "stage5.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 219 "stage5.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 220 "stage5.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 221 "stage5.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 222 "stage5.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 223 "stage5.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 224 "stage5.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,BREAKST,NULL,NULL,NULL,NULL);}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 225 "stage5.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,CONTINUEST,NULL,NULL,NULL,NULL);}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 226 "stage5.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,RETURNST,NULL,(yyvsp[0].no),NULL,NULL);}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 230 "stage5.y" /* yacc.c:1646  */
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
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 240 "stage5.y" /* yacc.c:1646  */
    {(yyval.no)=NULL;}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 243 "stage5.y" /* yacc.c:1646  */
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
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 259 "stage5.y" /* yacc.c:1646  */
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
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 277 "stage5.y" /* yacc.c:1646  */
    {
						
							while(temp_table)
							{	
								temp_table->type=type_flag;
								temp_table=temp_table->prev;
							}	
						
										
						}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 288 "stage5.y" /* yacc.c:1646  */
    {ptype_flag=INTE;}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 289 "stage5.y" /* yacc.c:1646  */
    {ptype_flag=STRE;}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 291 "stage5.y" /* yacc.c:1646  */
    {type_flag=INTE;}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 292 "stage5.y" /* yacc.c:1646  */
    {type_flag=STRE;}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 295 "stage5.y" /* yacc.c:1646  */
    {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[0].no)->varname);
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 303 "stage5.y" /* yacc.c:1646  */
    {
							temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[-3].no)->varname);
							temp_table->size=(yyvsp[-1].no)->val;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 310 "stage5.y" /* yacc.c:1646  */
    {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[0].no)->varname);
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 317 "stage5.y" /* yacc.c:1646  */
    {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[-3].no)->varname);
							temp_table->size=(yyvsp[-3].no)->val;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 326 "stage5.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,READ0,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 327 "stage5.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,READ0,NULL,CreateTree(0,0,(yyvsp[-4].no)->varname,VARIABLE,NULL,(yyvsp[-2].no),NULL,NULL),NULL,NULL);}
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 330 "stage5.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,WRITE0,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 333 "stage5.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 334 "stage5.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"=",CreateTree(0,(yyvsp[-3].no)->type,(yyvsp[-5].no)->varname,VARIABLE,NULL,(yyvsp[-3].no),NULL,NULL),(yyvsp[0].no),NULL);}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 337 "stage5.y" /* yacc.c:1646  */
    {(yyval.no) =  CreateTree(0,BOLE,NULL,IFST,NULL,(yyvsp[-6].no),CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-3].no),(yyvsp[-1].no),NULL),NULL);}
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 338 "stage5.y" /* yacc.c:1646  */
    {(yyval.no) =  CreateTree(0,BOLE,NULL,IFST,NULL,(yyvsp[-4].no),CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-1].no),NULL,NULL),NULL);}
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 341 "stage5.y" /* yacc.c:1646  */
    {(yyval.no) =  CreateTree(0,BOLE,NULL,WHILEST,NULL,(yyvsp[-4].no),(yyvsp[-1].no),NULL);}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 344 "stage5.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"+",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 345 "stage5.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"-",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 346 "stage5.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"*",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 347 "stage5.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"/",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 348 "stage5.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,"<",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 349 "stage5.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,">",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 350 "stage5.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,">=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 351 "stage5.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,"<=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 352 "stage5.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,"==",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 353 "stage5.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,"!=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 354 "stage5.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no);}
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 355 "stage5.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,(yyvsp[-3].no)->varname,FUNCALL,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 356 "stage5.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,(yyvsp[-3].no)->varname,VARIABLE,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 357 "stage5.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 358 "stage5.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 360 "stage5.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[0].no);}
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 361 "stage5.y" /* yacc.c:1646  */
    {(yyval.no)=NULL;}
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 363 "stage5.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-2].no),CreateTree(0,INTE,NULL,ARGUMENT,NULL,(yyvsp[0].no),NULL,NULL),NULL);}
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 364 "stage5.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,(yyvsp[0].no)->type,NULL,ARGUMENT,NULL,(yyvsp[0].no),NULL,NULL);}
#line 2108 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2112 "y.tab.c" /* yacc.c:1646  */
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
#line 366 "stage5.y" /* yacc.c:1906  */


int yyerror(char const *s)
{
    printf("yyerror %s",s);
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
