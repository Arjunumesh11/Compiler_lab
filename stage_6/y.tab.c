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
#line 1 "stage6.y" /* yacc.c:339  */

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
#line 18 "stage6.y" /* yacc.c:355  */

	char* name;
	struct tnode *no;

#line 203 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 220 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   337

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  207

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
      38,    39,     2,     2,    44,     2,    43,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    42,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,     2,     2,     2,     2,     2,     2,
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
       0,    29,    29,    30,    31,    32,    33,    35,    37,    38,
      41,    45,    56,    59,    76,    93,    96,   100,   106,   109,
     118,   128,   130,   131,   133,   145,   153,   161,   172,   180,
     188,   201,   202,   203,   206,   211,   213,   218,   224,   238,
     239,   242,   243,   246,   247,   248,   249,   250,   251,   252,
     253,   257,   267,   269,   286,   304,   317,   318,   319,   321,
     329,   337,   344,   353,   354,   357,   360,   361,   362,   365,
     366,   369,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   389,   390,
     392,   393
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
  "';'", "'.'", "','", "'['", "']'", "$accept", "Program", "MainBlock",
  "FuncList", "FuncBlock", "GDeclaration", "GDeclList", "TypeDefBlock",
  "TypeDefList", "TypeDef", "FieldDeclList", "FieldDecl", "Field", "GDecl",
  "GVarlist", "Body", "Parameters", "ParamList", "Param", "Retstmt",
  "Slist", "Stmt", "Declarations", "DeclList", "Decl", "Type", "Varlist",
  "InputStmt", "OutputStmt", "AsgStmt", "Ifstmt", "Whilestmt", "expr",
  "arguments", "argument", YY_NULLPTR
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
     123,   125,    59,    46,    44,    91,    93
};
# endif

#define YYPACT_NINF -180

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-180)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      58,    70,    69,    78,    85,  -180,   115,    53,    67,     4,
    -180,  -180,  -180,  -180,  -180,    98,  -180,   101,    76,  -180,
      78,  -180,   115,  -180,   105,   115,   164,  -180,  -180,  -180,
    -180,    24,   -29,    79,  -180,  -180,    81,  -180,   115,    23,
    -180,   107,   164,   103,  -180,   114,    87,   164,  -180,  -180,
    -180,   102,   108,   104,  -180,   139,   111,    30,   120,   119,
    -180,  -180,   164,  -180,  -180,   164,   142,   126,   153,   136,
    -180,   146,   132,  -180,   159,  -180,   177,   150,   149,   120,
    -180,  -180,  -180,  -180,   147,    28,    61,   165,   166,   180,
    -180,   171,   173,   155,   170,   -11,   175,   214,  -180,   176,
     179,   184,   185,   186,  -180,   153,   196,  -180,   212,   187,
     188,   221,    57,    57,   222,    57,    57,    57,  -180,  -180,
      57,   223,  -180,   218,  -180,  -180,  -180,  -180,  -180,  -180,
     194,   190,   192,  -180,  -180,    71,   -20,  -180,    57,   195,
     229,   299,  -180,    17,   243,   264,   299,  -180,  -180,  -180,
    -180,   227,  -180,    57,    57,    57,   278,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,  -180,   240,   233,
     231,   215,    77,   299,   230,   226,   118,  -180,     3,     3,
    -180,  -180,   313,   313,   313,   313,   313,   313,    57,   214,
     214,  -180,   232,  -180,    57,  -180,   299,  -180,   140,   174,
    -180,   299,  -180,   214,  -180,   183,  -180
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
       0,     0,    59,    40,    39,     0,    86,    85,     0,    87,
       0,    66,    23,     0,     0,     0,    68,    22,    32,    10,
      62,     0,    63,     0,    89,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    65,     0,     0,
       0,     0,     0,    91,     0,    88,     0,    82,    72,    73,
      74,    75,    77,    76,    78,    79,    81,    80,     0,     0,
       0,    60,     0,    83,     0,    84,    67,    50,     0,     0,
      64,    90,    70,     0,    71,     0,    69
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -180,  -180,    -3,   247,    35,   266,  -180,  -180,  -180,   265,
    -180,   241,   -77,   279,  -180,   191,   -39,  -180,   217,   -21,
    -179,   -96,   202,  -180,   219,    19,  -180,  -180,  -180,  -180,
    -180,  -180,  -111,  -180,  -180
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,    22,    23,     6,    15,     7,     9,    10,
      39,    40,   139,    16,    32,    78,    52,    53,    54,   197,
      97,    98,    68,    74,    75,    24,    85,    99,   100,   101,
     102,   103,   140,   174,   175
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      95,   124,   141,    21,   143,   144,   145,   120,    59,   146,
     198,   199,    27,    44,     8,    45,   159,   160,   154,    34,
      95,    17,    37,   114,   205,   155,    71,   156,   157,   158,
     159,   160,   121,    11,    17,    48,   161,   162,   163,   164,
     165,   166,   172,   173,   176,    41,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,    96,    35,    41,    13,
      14,    55,    42,   168,    49,     1,    55,   136,    65,    43,
     107,   109,   108,    35,   137,    66,   123,   196,   110,    11,
       8,    55,    18,   201,    55,    19,    76,     2,   157,   158,
     159,   160,     2,    76,     3,   138,   161,   162,   163,   164,
     165,   166,   124,   124,    12,    13,    14,    26,    11,   124,
     152,    31,    95,    95,    33,    36,   153,    51,    46,    47,
      56,    95,    95,   192,    57,    11,    95,    58,    95,   157,
     158,   159,   160,    29,    13,    14,    11,   161,   162,   163,
     164,   165,   166,    86,    60,    87,    88,    61,    62,    63,
      89,    20,    14,    86,    67,    87,    88,    64,    69,    72,
      89,    73,    13,    14,   195,    91,    90,   202,    77,    11,
     203,    92,    93,    94,    11,    91,    79,    86,    81,    87,
      88,    92,    93,    94,    89,    80,    86,    84,    87,    88,
     104,   122,   106,    89,    82,    13,    14,   118,   113,    91,
      13,    14,   204,   111,   112,    92,    93,    94,    91,   116,
     206,   117,   119,   131,    92,    93,    94,    86,   125,    87,
      88,   126,   132,   114,    89,   115,   127,   128,   129,   133,
     134,   135,   142,   147,   148,   149,   150,   151,   121,    91,
     157,   158,   159,   160,   171,    92,    93,    94,   161,   162,
     163,   164,   165,   166,   157,   158,   159,   160,   188,   189,
     190,   191,   161,   162,   163,   164,   165,   166,   167,   193,
     194,   200,    38,    25,    28,   157,   158,   159,   160,    70,
      50,   105,   169,   161,   162,   163,   164,   165,   166,   157,
     158,   159,   160,    83,    30,     0,   130,   161,   162,   163,
     164,   165,   166,   170,     0,     0,     0,     0,     0,     0,
     157,   158,   159,   160,     0,     0,     0,   177,   161,   162,
     163,   164,   165,   166,   157,   158,   159,   160,     0,     0,
       0,     0,    -1,    -1,    -1,    -1,    -1,    -1
};

static const yytype_int16 yycheck[] =
{
      77,    97,   113,     6,   115,   116,   117,    18,    47,   120,
     189,   190,     8,    42,    10,    44,    13,    14,    38,    22,
      97,     2,    25,    43,   203,    45,    65,   138,    11,    12,
      13,    14,    43,    10,    15,    38,    19,    20,    21,    22,
      23,    24,   153,   154,   155,    26,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,    77,    22,    39,    36,
      37,    42,    38,    46,    41,     7,    47,    10,    38,    45,
      42,    10,    44,    38,    17,    45,    97,   188,    17,    10,
      10,    62,     4,   194,    65,     0,    67,    34,    11,    12,
      13,    14,    34,    74,    36,    38,    19,    20,    21,    22,
      23,    24,   198,   199,    35,    36,    37,    40,    10,   205,
      39,    10,   189,   190,    38,    10,    45,    10,    39,    38,
      17,   198,   199,    46,    10,    10,   203,    40,   205,    11,
      12,    13,    14,    35,    36,    37,    10,    19,    20,    21,
      22,    23,    24,     3,    42,     5,     6,    39,    44,    10,
      10,    36,    37,     3,    34,     5,     6,    46,    39,    17,
      10,    35,    36,    37,    46,    25,    16,    27,    15,    10,
      30,    31,    32,    33,    10,    25,    40,     3,    46,     5,
       6,    31,    32,    33,    10,    39,     3,    10,     5,     6,
      41,    16,    45,    10,    35,    36,    37,    42,    18,    25,
      36,    37,    28,    38,    38,    31,    32,    33,    25,    38,
      27,    38,    42,    17,    31,    32,    33,     3,    42,     5,
       6,    42,    10,    43,    10,    45,    42,    42,    42,    42,
      42,    10,    10,    10,    16,    41,    46,    45,    43,    25,
      11,    12,    13,    14,    17,    31,    32,    33,    19,    20,
      21,    22,    23,    24,    11,    12,    13,    14,    18,    26,
      29,    46,    19,    20,    21,    22,    23,    24,    39,    39,
      44,    39,    25,     7,     9,    11,    12,    13,    14,    62,
      39,    79,    39,    19,    20,    21,    22,    23,    24,    11,
      12,    13,    14,    74,    15,    -1,   105,    19,    20,    21,
      22,    23,    24,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      11,    12,    13,    14,    -1,    -1,    -1,    39,    19,    20,
      21,    22,    23,    24,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    24
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    34,    36,    48,    49,    52,    54,    10,    55,
      56,    10,    35,    36,    37,    53,    60,    72,     4,     0,
      36,    49,    50,    51,    72,    52,    40,     8,    56,    35,
      60,    10,    61,    38,    49,    51,    10,    49,    50,    57,
      58,    72,    38,    45,    42,    44,    39,    38,    49,    41,
      58,    10,    63,    64,    65,    72,    17,    10,    40,    63,
      42,    39,    44,    10,    46,    38,    45,    34,    69,    39,
      65,    63,    17,    35,    70,    71,    72,    15,    62,    40,
      39,    46,    35,    71,    10,    73,     3,     5,     6,    10,
      16,    25,    31,    32,    33,    59,    66,    67,    68,    74,
      75,    76,    77,    78,    41,    69,    45,    42,    44,    10,
      17,    38,    38,    18,    43,    45,    38,    38,    42,    42,
      18,    43,    16,    66,    68,    42,    42,    42,    42,    42,
      62,    17,    10,    42,    42,    10,    10,    17,    38,    59,
      79,    79,    10,    79,    79,    79,    79,    10,    16,    41,
      46,    45,    39,    45,    38,    45,    79,    11,    12,    13,
      14,    19,    20,    21,    22,    23,    24,    39,    46,    39,
      39,    17,    79,    79,    80,    81,    79,    39,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    18,    26,
      29,    46,    46,    39,    44,    46,    79,    66,    67,    67,
      39,    79,    27,    30,    28,    67,    27
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    48,    48,    48,    49,    50,    50,
      51,    52,    52,    53,    53,    54,    55,    55,    56,    57,
      57,    58,    59,    59,    60,    61,    61,    61,    61,    61,
      61,    62,    62,    62,    63,    63,    64,    64,    65,    66,
      66,    67,    67,    68,    68,    68,    68,    68,    68,    68,
      68,    69,    69,    70,    70,    71,    72,    72,    72,    73,
      73,    73,    73,    74,    74,    75,    76,    76,    76,    77,
      77,    78,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    80,    80,
      81,    81
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
       6,     1,     4,     4,     7,     4,     3,     6,     3,     9,
       7,     7,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     4,     1,     1,     1,     1,     0,
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
#line 29 "stage6.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 30 "stage6.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 31 "stage6.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 32 "stage6.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 33 "stage6.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 35 "stage6.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,"MAIN",FUNCDEF,NULL,(yyvsp[-2].no),(yyvsp[-1].no),NULL);}
#line 1492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 37 "stage6.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 38 "stage6.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 41 "stage6.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,strdup((yyvsp[-8].name)),(yyvsp[-7].name),FUNCDEF,NULL,(yyvsp[-5].no),CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-2].no),(yyvsp[-1].no),NULL),NULL);}
#line 1510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 45 "stage6.y" /* yacc.c:1646  */
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
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 56 "stage6.y" /* yacc.c:1646  */
    { (yyval.no)=CreateTree(0,0,NULL,GDECLARATION,NULL,NULL,NULL,NULL);}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 60 "stage6.y" /* yacc.c:1646  */
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
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 76 "stage6.y" /* yacc.c:1646  */
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
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 93 "stage6.y" /* yacc.c:1646  */
    {help_viewtypetable();}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 96 "stage6.y" /* yacc.c:1646  */
    {	
											temptypetable->next=TInstall(name,0,tempfield);
											temptypetable=temptypetable->next;
										}
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 100 "stage6.y" /* yacc.c:1646  */
    {
				  							TYPE_TABLE=TInstall(name,0,tempfieldlist);
											temptypetable=TYPE_TABLE;
			  							}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 106 "stage6.y" /* yacc.c:1646  */
    {name=strdup((yyvsp[-3].name));Index=0;}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 109 "stage6.y" /* yacc.c:1646  */
    {
											tempfieldlist->next=(struct Fieldlist*)malloc(sizeof(struct Fieldlist));
											tempfieldlist=tempfieldlist->next;	
											tempfieldlist->name=strdup(name);
											tempfieldlist->type=TLookup(type_flag);
											tempfieldlist->fieldIndex=Index;
											name=NULL;type_flag=NULL;
											Index++;
										}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 118 "stage6.y" /* yacc.c:1646  */
    {	
				  							tempfieldlist=(struct Fieldlist*)malloc(sizeof(struct Fieldlist));
											tempfieldlist->name=strdup(name);
											name=NULL;type_flag=NULL;
											tempfieldlist->fieldIndex=Index;
											tempfield=tempfieldlist;
											Index++;
										}
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 128 "stage6.y" /* yacc.c:1646  */
    {name=strdup((yyvsp[-1].name));type_flag=strdup((yyvsp[-2].name));}
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 130 "stage6.y" /* yacc.c:1646  */
    {;}
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 131 "stage6.y" /* yacc.c:1646  */
    {;}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 133 "stage6.y" /* yacc.c:1646  */
    {
								
									temp_table=G_TABLE_temp;
									while(temp_table)
									{	
										temp_table->type=strdup((yyvsp[-2].name));
										temp_table=temp_table->prev;
									}	
															
								}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 146 "stage6.y" /* yacc.c:1646  */
    {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[0].name));
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 154 "stage6.y" /* yacc.c:1646  */
    {
							temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[-3].name));
							temp_table->size=(yyvsp[-1].no)->val;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 162 "stage6.y" /* yacc.c:1646  */
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
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 173 "stage6.y" /* yacc.c:1646  */
    {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[0].name));
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 181 "stage6.y" /* yacc.c:1646  */
    {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[-3].name));
							temp_table->size=(yyvsp[-1].no)->val;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 189 "stage6.y" /* yacc.c:1646  */
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
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 201 "stage6.y" /* yacc.c:1646  */
    {(yyval.no)=NULL;}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 202 "stage6.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-2].no),(yyvsp[-1].no),NULL);}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 203 "stage6.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 206 "stage6.y" /* yacc.c:1646  */
    {
								decltypeflag=0;
								(yyval.no)=CreateTree(0,0,NULL,PDECLARATION,NULL,NULL,NULL,G_PARATABLE);
								G_PARATABLE=NULL;
							}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 211 "stage6.y" /* yacc.c:1646  */
    {(yyval.no)=NULL;}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 214 "stage6.y" /* yacc.c:1646  */
    {
				 				Temp_Parameter->prev=V_Parameter;
								V_Parameter=Temp_Parameter;
							}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 218 "stage6.y" /* yacc.c:1646  */
    {
				 				Temp_Parameter->prev=V_Parameter;
								V_Parameter=Temp_Parameter;

			 				}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 225 "stage6.y" /* yacc.c:1646  */
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
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 238 "stage6.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,RETURNST,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 239 "stage6.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,RETURNST,NULL,CreateTree(0,INTE,(yyvsp[-1].name),VARIABLE,NULL,NULL,NULL,NULL),NULL,NULL);}
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 242 "stage6.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-1].no),(yyvsp[0].no),NULL);}
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 243 "stage6.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 246 "stage6.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 247 "stage6.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 248 "stage6.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 249 "stage6.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 250 "stage6.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 251 "stage6.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,BREAKST,NULL,NULL,NULL,NULL);}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 252 "stage6.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,CONTINUEST,NULL,NULL,NULL,NULL);}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 253 "stage6.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,RETURNST,NULL,(yyvsp[0].no),NULL,NULL);}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 257 "stage6.y" /* yacc.c:1646  */
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
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 267 "stage6.y" /* yacc.c:1646  */
    {(yyval.no)=NULL;}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 270 "stage6.y" /* yacc.c:1646  */
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
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 286 "stage6.y" /* yacc.c:1646  */
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
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 304 "stage6.y" /* yacc.c:1646  */
    {
						
							while(temp_table)
							{	
								temp_table->type=strdup((yyvsp[-2].name));
								temp_table=temp_table->prev;
							}	
						
										
						}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 317 "stage6.y" /* yacc.c:1646  */
    {(yyval.name)=strdup(INTE);}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 318 "stage6.y" /* yacc.c:1646  */
    {(yyval.name)=strdup(STRE);}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 319 "stage6.y" /* yacc.c:1646  */
    {(yyval.name)=strdup((yyvsp[0].name));}
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 322 "stage6.y" /* yacc.c:1646  */
    {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[0].name));
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 330 "stage6.y" /* yacc.c:1646  */
    {
							temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[-3].name));
							temp_table->size=(yyvsp[-1].no)->val;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 337 "stage6.y" /* yacc.c:1646  */
    {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[0].name));
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 344 "stage6.y" /* yacc.c:1646  */
    {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[-3].name));
							temp_table->size=(yyvsp[-1].no)->val;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 353 "stage6.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,READ0,NULL,CreateTree(0,INTE,(yyvsp[-1].name),VARIABLE,NULL,NULL,NULL,NULL),NULL,NULL);}
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 354 "stage6.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,READ0,NULL,CreateTree(0,0,(yyvsp[-4].name),VARIABLE,NULL,(yyvsp[-2].no),NULL,NULL),NULL,NULL);}
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 357 "stage6.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,WRITE0,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 360 "stage6.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"=",CreateTree(0,INTE,(yyvsp[-2].name),VARIABLE,NULL,NULL,NULL,NULL),(yyvsp[0].no),NULL);}
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 361 "stage6.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"=",CreateTree(0,(yyvsp[-3].no)->type,(yyvsp[-5].name),VARIABLE,NULL,(yyvsp[-3].no),NULL,NULL),(yyvsp[0].no),NULL);}
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 362 "stage6.y" /* yacc.c:1646  */
    {}
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 365 "stage6.y" /* yacc.c:1646  */
    {(yyval.no) =  CreateTree(0,BOLE,NULL,IFST,NULL,(yyvsp[-6].no),CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-3].no),(yyvsp[-1].no),NULL),NULL);}
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 366 "stage6.y" /* yacc.c:1646  */
    {(yyval.no) =  CreateTree(0,BOLE,NULL,IFST,NULL,(yyvsp[-4].no),CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-1].no),NULL,NULL),NULL);}
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 369 "stage6.y" /* yacc.c:1646  */
    {(yyval.no) =  CreateTree(0,BOLE,NULL,WHILEST,NULL,(yyvsp[-4].no),(yyvsp[-1].no),NULL);}
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 372 "stage6.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"+",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 373 "stage6.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"-",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 374 "stage6.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"*",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 375 "stage6.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"/",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 376 "stage6.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,"<",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 377 "stage6.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,">",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 378 "stage6.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,">=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 379 "stage6.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,"<=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 380 "stage6.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,"==",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 381 "stage6.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,"!=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 382 "stage6.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no);}
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 383 "stage6.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,(yyvsp[-3].name),FUNCALL,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 384 "stage6.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,(yyvsp[-3].name),VARIABLE,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 385 "stage6.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 386 "stage6.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,(yyvsp[0].name),VARIABLE,NULL,NULL,NULL,NULL);}
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 387 "stage6.y" /* yacc.c:1646  */
    {;}
#line 2179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 389 "stage6.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[0].no);}
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 390 "stage6.y" /* yacc.c:1646  */
    {(yyval.no)=NULL;}
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 392 "stage6.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-2].no),CreateTree(0,INTE,NULL,ARGUMENT,NULL,(yyvsp[0].no),NULL,NULL),NULL);}
#line 2197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 393 "stage6.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,(yyvsp[0].no)->type,NULL,ARGUMENT,NULL,(yyvsp[0].no),NULL,NULL);}
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2207 "y.tab.c" /* yacc.c:1646  */
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
#line 395 "stage6.y" /* yacc.c:1906  */


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
