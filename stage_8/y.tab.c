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
#line 1 "stage8.y" /* yacc.c:339  */

	#include <stdlib.h>
	#include <stdio.h>
	#include "exprtree.h"
	//#include "exprtree.c"
	int yylex(void);
	int labels,r1,decltypeflag, Index=0,size=0;
	char *type_flag,*name_type,*name,*yytext,*Current_type;
	FILE *target_file,*yyin,*f;
	struct symboltable *temp_table,*G_TABLE_temp,*G_TABLE,*temp_paratable,*G_PARATABLE;
	struct Typetable *temptypetable,*TYPE_TABLE;
    struct Fieldlist *tempfieldlist,*tempfield;
	struct Classtable *Cptr=NULL,*CLASS_TABLE,*temp_class=NULL,*Current_class;


#line 82 "y.tab.c" /* yacc.c:339  */

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
#line 16 "stage8.y" /* yacc.c:355  */

	char* name;
	struct tnode *no;

#line 219 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 236 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   419

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  122
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  288

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

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
      47,    48,     2,     2,    53,     2,    52,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    51,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,     2,     2,     2,     2,
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
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    27,    27,    28,    29,    31,    33,    34,    37,    39,
      40,    42,    43,    45,    47,    61,    76,    77,    79,    81,
      82,    84,    86,    87,    89,    91,    97,   100,   105,   110,
     111,   114,   118,   124,   126,   128,   133,   140,   142,   143,
     144,   146,   147,   148,   150,   152,   153,   154,   155,   156,
     157,   160,   161,   162,   165,   170,   172,   177,   183,   197,
     198,   199,   202,   203,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   218,   223,   224,   226,   231,   236,   240,
     241,   242,   244,   245,   246,   247,   250,   251,   252,   255,
     258,   259,   260,   261,   262,   263,   264,   265,   268,   269,
     272,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   294,
     295,   297,   298
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ALLOC", "INTIALIZE", "RETURN", "MAIN",
  "READ", "BRKP", "NEW", "SELF", "CLASS", "ENDCLASS", "Extends", "WRITE",
  "TYPE", "ENDTYPE", "NULL0", "POW", "VAR", "PLUS", "MINUS", "MUL", "DIV",
  "BEGIN0", "END", "NUM", "EQUAL", "GRT", "LST", "GRE", "LSE", "NEQUAL",
  "EEQUAL", "IF", "THEN", "ENDIF", "ENDWHILE", "DO", "ELSE", "WHILE",
  "BREAK", "CONTINUE", "DECL", "ENDDECL", "INT", "STR", "'('", "')'",
  "'{'", "'}'", "';'", "'.'", "','", "'['", "']'", "$accept", "Program",
  "MainBlock", "FuncList", "FuncBlock", "ClassDefBlock", "ClassDefList",
  "ClassDef", "Cname", "Fieldlists", "Fld", "MethodDecl", "MDecl",
  "MethodDefns", "FDef", "GDeclaration", "GDeclList", "TypeDefBlock",
  "TypeDefList", "TypeDef", "Typename", "FieldDeclList", "FieldDecl",
  "Field", "FieldFunction", "GDecl", "GVarlist", "Body", "Parameters",
  "ParamList", "Param", "Retstmt", "Slist", "Stmt", "Declarations",
  "DeclList", "Decl", "Type", "Varlist", "InputStmt", "OutputStmt",
  "AsgStmt", "Ifstmt", "Whilestmt", "expr", "arguments", "argument", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,    40,    41,   123,
     125,    59,    46,    44,    91,    93
};
# endif

#define YYPACT_NINF -190

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-190)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -7,    24,    59,    70,  -190,    95,  -190,    -4,  -190,    74,
      26,  -190,   130,    46,  -190,  -190,    35,   106,   160,    47,
    -190,   128,    67,    38,  -190,  -190,  -190,    18,  -190,   162,
     133,   166,  -190,  -190,   146,  -190,    85,  -190,   171,    59,
    -190,    38,  -190,   172,  -190,  -190,   141,   156,  -190,  -190,
    -190,  -190,    62,   -44,  -190,  -190,   149,  -190,    99,   177,
      35,    35,   178,  -190,   187,    35,  -190,   102,  -190,   189,
     153,   161,  -190,   107,  -190,   191,   164,   167,  -190,   196,
     168,    78,   169,  -190,  -190,   170,    82,    52,   175,   176,
     174,   181,   110,  -190,   184,   186,   183,   188,     0,   213,
     236,  -190,   197,   198,   203,   205,   206,  -190,    35,  -190,
     221,    77,  -190,    35,  -190,  -190,    35,   216,   209,   233,
    -190,   241,    40,   210,   105,    -5,  -190,   243,    -6,    25,
     244,    -6,    -6,    -6,  -190,  -190,    30,   245,  -190,   240,
    -190,  -190,  -190,  -190,  -190,  -190,    29,  -190,   247,   220,
      35,  -190,  -190,   227,   214,   156,   234,   237,  -190,  -190,
    -190,   122,   123,  -190,   238,  -190,    68,  -190,    -6,   252,
    -190,   293,   256,   258,   270,   363,  -190,   251,   307,   328,
     271,   272,   363,  -190,  -190,  -190,  -190,   284,   285,  -190,
    -190,   177,  -190,   242,  -190,    -6,  -190,   273,    -6,   313,
      -6,   342,   323,    -6,    -6,    -6,    -6,    -6,    -6,    -6,
      -6,    -6,    -6,  -190,   295,   296,   326,   319,   312,   314,
     305,   335,    35,   315,   317,   322,   265,   321,   363,   330,
     316,   332,   279,  -190,   333,   143,   143,  -190,  -190,   377,
     377,   377,   377,   377,   377,  -190,  -190,   334,    -6,   236,
     236,  -190,   339,   340,  -190,  -190,  -190,   341,    -6,  -190,
      -6,    -6,  -190,    -6,  -190,   363,  -190,   100,   195,  -190,
     352,  -190,   354,   363,   355,   356,  -190,   236,  -190,   156,
    -190,  -190,  -190,   211,   177,  -190,   331,  -190
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      30,     0,     0,     0,     4,    10,    34,     0,    32,     0,
       0,     1,     0,     0,    29,    31,     0,     0,    14,     0,
      12,     0,     0,     0,    81,    79,    80,     0,    36,     0,
       0,     0,     9,    11,     0,    26,     0,    28,     0,    79,
       3,     0,     7,     0,    33,    35,     0,    75,    15,    17,
      25,    27,    48,     0,     2,     6,     0,    37,     0,     0,
       0,    55,     0,    44,     0,    55,    74,     0,    77,     0,
       0,     0,    16,     0,    20,     0,     0,    54,    57,     0,
       0,    45,     0,    73,    76,    84,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,     0,     0,     0,    71,
       0,    63,     0,     0,     0,     0,     0,     5,     0,    19,
       0,     0,    50,     0,    58,    49,    55,     0,     0,     0,
      78,     0,     0,     0,     0,     0,    72,     0,     0,     0,
       0,     0,     0,     0,    69,    70,     0,     0,    53,    71,
      62,    64,    65,    66,    67,    68,     0,    23,     0,     0,
      55,    18,    56,     0,     0,    75,     0,    82,    60,    59,
      61,     0,     0,    40,     0,   118,   115,   114,     0,   116,
     117,     0,     0,     0,     0,    90,    39,     0,     0,     0,
       0,     0,    92,    38,    52,    13,    22,     0,     0,    47,
      46,     0,    85,     0,    86,     0,    88,     0,   120,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,     0,     0,     0,     0,     0,
       0,     0,    55,     0,     0,     0,     0,    40,   122,     0,
     119,    39,     0,   111,    38,   101,   102,   103,   104,   106,
     105,   107,   108,   110,   109,    93,    94,     0,     0,     0,
       0,    95,     0,     0,    21,     8,    83,     0,   120,   112,
       0,   120,   113,   120,    96,    91,    71,     0,     0,    97,
       0,    87,     0,   121,     0,     0,    99,     0,   100,    75,
      41,    42,    43,     0,     0,    98,     0,    24
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -190,  -190,   -17,  -190,   370,  -190,  -190,   393,  -190,  -190,
    -190,  -190,   343,  -190,   267,  -190,  -190,  -190,  -190,   407,
    -190,  -190,   388,   -70,  -190,   381,  -190,  -181,   -63,  -190,
     306,   -54,  -189,   -99,  -152,  -190,   351,     9,  -190,  -190,
    -190,  -190,  -190,  -190,  -110,   -75,  -190
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    41,    42,    13,    19,    20,    21,    60,
      72,    73,    74,   146,   147,    23,    36,     5,     7,     8,
       9,    27,    28,   169,   170,    37,    53,    71,    76,    77,
      78,   266,   100,   101,    59,    67,    68,    79,    86,   102,
     103,   104,   105,   106,   228,   229,   230
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      98,   140,    82,   191,   164,    90,    40,    63,     1,    64,
     224,   165,    14,   166,   161,     6,    99,   124,   171,   175,
     167,   177,   178,   179,    54,    29,   182,   136,   172,   173,
      98,    38,    43,   180,   174,   164,    29,    24,     2,   181,
     164,   168,   165,     6,   166,    38,   139,   165,    24,   166,
      43,   167,   137,   153,    24,   162,   167,    24,   201,    32,
     267,   268,    90,    25,    26,    10,    18,    69,    44,    75,
      11,   122,   168,    17,    25,    26,    69,   168,   123,   185,
      25,    26,   110,    39,    26,   226,    24,   188,   283,    22,
     232,   158,   130,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   286,    24,    87,    12,    88,    89,    61,
      90,    35,    25,    26,    91,   198,    62,   148,    24,    92,
     199,    24,   200,    16,   150,   116,    24,   284,   151,    50,
      25,    26,   117,   120,    94,   121,   276,   129,   265,   277,
      95,    96,    97,    66,    25,    26,    83,    25,    26,    18,
     273,   108,    25,    26,    30,   148,   160,   137,    87,   253,
      88,    89,   130,    90,   131,   205,   206,    91,   140,   140,
     194,   196,    92,    31,   130,   137,   195,    34,    93,    98,
      98,    46,    47,   272,   140,    48,   274,    94,   275,    49,
      52,    56,    57,    95,    96,    97,    65,    98,    98,    58,
      87,    70,    88,    89,    80,    90,    81,    98,    85,    91,
     111,   107,   112,    98,    92,   114,    87,   118,    88,    89,
     113,    90,   125,   115,   119,    91,   127,   126,   128,    94,
      92,   132,   278,   133,   134,    95,    96,    97,   138,   135,
     149,    87,   154,    88,    89,    94,    90,   285,   141,   142,
      91,    95,    96,    97,   143,    92,   144,   145,   155,   156,
     157,   159,   163,   176,   183,   184,   187,   150,   225,   190,
      94,   203,   204,   205,   206,   189,    95,    96,    97,   207,
     208,   209,   210,   211,   212,   203,   204,   205,   206,   192,
     197,   193,   227,   207,   208,   209,   210,   211,   212,   203,
     204,   205,   206,   214,   202,   215,   217,   207,   208,   209,
     210,   211,   212,   203,   204,   205,   206,   216,   220,   221,
     257,   207,   208,   209,   210,   211,   212,   203,   204,   205,
     206,   222,   231,   223,   262,   207,   208,   209,   210,   211,
     212,   213,   234,   245,   246,   247,   248,   249,   203,   204,
     205,   206,   250,   251,   252,   218,   207,   208,   209,   210,
     211,   212,   203,   204,   205,   206,   254,   255,   258,   260,
     207,   208,   209,   210,   211,   212,   219,   256,   259,   261,
     263,   287,   264,   203,   204,   205,   206,   269,   270,   271,
     233,   207,   208,   209,   210,   211,   212,   203,   204,   205,
     206,   279,   280,   281,   282,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    33,   186,    15,    45,   109,    51,    84,   152
};

static const yytype_uint16 yycheck[] =
{
      70,   100,    65,   155,    10,    10,    23,    51,    15,    53,
     191,    17,    16,    19,    19,    19,    70,    87,   128,   129,
      26,   131,   132,   133,    41,    16,   136,    27,     3,     4,
     100,    22,    23,     3,     9,    10,    27,    19,    45,     9,
      10,    47,    17,    19,    19,    36,   100,    17,    19,    19,
      41,    26,    52,   116,    19,   125,    26,    19,   168,    12,
     249,   250,    10,    45,    46,     6,    19,    58,    50,    60,
       0,    19,    47,    47,    45,    46,    67,    47,    26,    50,
      45,    46,    73,    45,    46,   195,    19,   150,   277,    43,
     200,    51,    52,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   284,    19,     5,    11,     7,     8,    47,
      10,    44,    45,    46,    14,    47,    54,   108,    19,    19,
      52,    19,    54,    49,    47,    47,    19,   279,    51,    44,
      45,    46,    54,    51,    34,    53,    36,    27,   248,    39,
      40,    41,    42,    44,    45,    46,    44,    45,    46,    19,
     260,    44,    45,    46,    48,   146,    51,    52,     5,   222,
       7,     8,    52,    10,    54,    22,    23,    14,   267,   268,
      48,    48,    19,    13,    52,    52,    54,    49,    25,   249,
     250,    19,    49,   258,   283,    19,   261,    34,   263,    43,
      19,    19,    51,    40,    41,    42,    47,   267,   268,    43,
       5,    24,     7,     8,    26,    10,    19,   277,    19,    14,
      19,    50,    48,   283,    19,    19,     5,    48,     7,     8,
      53,    10,    47,    55,    54,    14,    52,    51,    47,    34,
      19,    47,    37,    47,    51,    40,    41,    42,    25,    51,
      19,     5,    26,     7,     8,    34,    10,    36,    51,    51,
      14,    40,    41,    42,    51,    19,    51,    51,    49,    26,
      19,    51,    19,    19,    19,    25,    19,    47,    26,    55,
      34,    20,    21,    22,    23,    48,    40,    41,    42,    28,
      29,    30,    31,    32,    33,    20,    21,    22,    23,    55,
      52,    54,    19,    28,    29,    30,    31,    32,    33,    20,
      21,    22,    23,    47,    52,    47,    55,    28,    29,    30,
      31,    32,    33,    20,    21,    22,    23,    47,    47,    47,
      55,    28,    29,    30,    31,    32,    33,    20,    21,    22,
      23,    47,    19,    48,    55,    28,    29,    30,    31,    32,
      33,    48,    19,    48,    48,    19,    27,    35,    20,    21,
      22,    23,    38,    48,    19,    48,    28,    29,    30,    31,
      32,    33,    20,    21,    22,    23,    51,    50,    47,    53,
      28,    29,    30,    31,    32,    33,    48,    55,    48,    47,
      47,    50,    48,    20,    21,    22,    23,    48,    48,    48,
      48,    28,    29,    30,    31,    32,    33,    20,    21,    22,
      23,    49,    48,    48,    48,    28,    29,    30,    31,    32,
      33,    41,    19,   146,     7,    27,    73,    36,    67,   113
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    45,    57,    58,    73,    19,    74,    75,    76,
       6,     0,    11,    61,    16,    75,    49,    47,    19,    62,
      63,    64,    43,    71,    19,    45,    46,    77,    78,    93,
      48,    13,    12,    63,    49,    44,    72,    81,    93,    45,
      58,    59,    60,    93,    50,    78,    19,    49,    19,    43,
      44,    81,    19,    82,    58,    60,    19,    51,    43,    90,
      65,    47,    54,    51,    53,    47,    44,    91,    92,    93,
      24,    83,    66,    67,    68,    93,    84,    85,    86,    93,
      26,    19,    84,    44,    92,    19,    94,     5,     7,     8,
      10,    14,    19,    25,    34,    40,    41,    42,    79,    87,
      88,    89,    95,    96,    97,    98,    99,    50,    44,    68,
      93,    19,    48,    53,    19,    55,    47,    54,    48,    54,
      51,    53,    19,    26,    79,    47,    51,    52,    47,    27,
      52,    54,    47,    47,    51,    51,    27,    52,    25,    87,
      89,    51,    51,    51,    51,    51,    69,    70,    93,    19,
      47,    51,    86,    84,    26,    49,    26,    19,    51,    51,
      51,    19,    79,    19,    10,    17,    19,    26,    47,    79,
      80,   100,     3,     4,     9,   100,    19,   100,   100,   100,
       3,     9,   100,    19,    25,    50,    70,    19,    84,    48,
      55,    90,    55,    54,    48,    54,    48,    52,    47,    52,
      54,   100,    52,    20,    21,    22,    23,    28,    29,    30,
      31,    32,    33,    48,    47,    47,    47,    55,    48,    48,
      47,    47,    47,    48,    83,    26,   100,    19,   100,   101,
     102,    19,   100,    48,    19,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,    48,    48,    19,    27,    35,
      38,    48,    19,    84,    51,    50,    55,    55,    47,    48,
      53,    47,    55,    47,    48,   100,    87,    88,    88,    48,
      48,    48,   101,   100,   101,   101,    36,    39,    37,    49,
      48,    48,    48,    88,    90,    36,    83,    50
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    57,    57,    58,    59,    59,    60,    61,
      61,    62,    62,    63,    64,    64,    65,    65,    66,    67,
      67,    68,    69,    69,    70,    71,    71,    72,    72,    73,
      73,    74,    74,    75,    76,    77,    77,    78,    79,    79,
      79,    80,    80,    80,    81,    82,    82,    82,    82,    82,
      82,    83,    83,    83,    84,    84,    85,    85,    86,    87,
      87,    87,    88,    88,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    90,    90,    90,    91,    91,    92,    93,
      93,    93,    94,    94,    94,    94,    95,    95,    95,    96,
      97,    97,    97,    97,    97,    97,    97,    97,    98,    98,
      99,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   101,
     101,   102,   102
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     4,     1,     8,     2,     1,     9,     3,
       0,     2,     1,     8,     1,     3,     2,     0,     3,     2,
       1,     6,     2,     1,     9,     3,     2,     2,     1,     3,
       0,     2,     1,     4,     1,     2,     1,     3,     3,     3,
       3,     6,     6,     6,     3,     3,     6,     6,     1,     4,
       4,     2,     4,     3,     1,     0,     3,     1,     2,     3,
       3,     3,     2,     1,     2,     2,     2,     2,     2,     2,
       2,     1,     2,     3,     2,     0,     2,     1,     3,     1,
       1,     1,     3,     6,     1,     4,     4,     7,     4,     4,
       3,     6,     3,     5,     5,     5,     6,     6,     9,     7,
       7,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     4,     4,     1,     1,     1,     1,     1,     1,
       0,     3,     1
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
#line 27 "stage8.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 28 "stage8.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 29 "stage8.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 31 "stage8.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,"MAIN",FUNCDEF,NULL,(yyvsp[-2].no),(yyvsp[-1].no),NULL);}
#line 1552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 33 "stage8.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 34 "stage8.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 37 "stage8.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,strdup((yyvsp[-8].name)),(yyvsp[-7].name),FUNCDEF,NULL,(yyvsp[-5].no),CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-2].no),(yyvsp[-1].no),NULL),NULL);}
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 39 "stage8.y" /* yacc.c:1646  */
    {Current_class=NULL;}
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 47 "stage8.y" /* yacc.c:1646  */
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
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 61 "stage8.y" /* yacc.c:1646  */
    {
									Cptr = CInstall((yyvsp[-2].name),(yyvsp[0].name));Current_class=Cptr; 
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
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 79 "stage8.y" /* yacc.c:1646  */
    {Class_Finstall(Cptr,(yyvsp[-2].name),(yyvsp[-1].name));}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 84 "stage8.y" /* yacc.c:1646  */
    {Class_Minstall(Cptr,(yyvsp[-4].name),(yyvsp[-5].name),V_Parameter); V_Parameter=NULL;}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 86 "stage8.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 87 "stage8.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 89 "stage8.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,strdup((yyvsp[-8].name)),(yyvsp[-7].name),FUNCDEF,NULL,(yyvsp[-5].no),CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-2].no),(yyvsp[-1].no),NULL),NULL);}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 91 "stage8.y" /* yacc.c:1646  */
    { 
										(yyval.no)=CreateTree(0,0,NULL,GDECLARATION,NULL,NULL,NULL,G_TABLE);
										codeGen((yyval.no), target_file, 0);
										G_TABLE=NULL;
										G_TABLE_temp=NULL;
									  }
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 97 "stage8.y" /* yacc.c:1646  */
    { (yyval.no)=CreateTree(0,0,NULL,GDECLARATION,NULL,NULL,NULL,NULL);}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 101 "stage8.y" /* yacc.c:1646  */
    {
											G_TABLE= declaration_addentry(G_TABLE,G_TABLE_temp);
											G_TABLE_temp=NULL;
										}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 105 "stage8.y" /* yacc.c:1646  */
    {
											G_TABLE= declaration_addentry(G_TABLE,G_TABLE_temp);
											G_TABLE_temp=NULL;
										}
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 110 "stage8.y" /* yacc.c:1646  */
    {}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 114 "stage8.y" /* yacc.c:1646  */
    {	
											TYPE_TABLE=TInstall(name,0,tempfield,TYPE_TABLE);
											tempfield=NULL;
										}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 118 "stage8.y" /* yacc.c:1646  */
    {
											TYPE_TABLE=TInstall(name,0,tempfield,TYPE_TABLE);
											tempfield=NULL;
			  							}
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 124 "stage8.y" /* yacc.c:1646  */
    {name=strdup((yyvsp[-3].name));Index=0;}
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 126 "stage8.y" /* yacc.c:1646  */
    {(yyval.name)=(yyvsp[0].name); Current_type=strdup((yyvsp[0].name));}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 128 "stage8.y" /* yacc.c:1646  */
    {
											tempfield=Type_FInstall(name,type_flag,Index,tempfield,Current_type);
											name=NULL;type_flag=NULL;
											Index++;
										}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 133 "stage8.y" /* yacc.c:1646  */
    {	
				  							tempfield=Type_FInstall(name,type_flag,Index,tempfield,Current_type);
											name=NULL;type_flag=NULL; 
											Index++;
										}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 140 "stage8.y" /* yacc.c:1646  */
    {name=strdup((yyvsp[-1].name));type_flag=strdup((yyvsp[-2].name));}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 142 "stage8.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(3,0,(yyvsp[0].name),FIELD,NULL,(yyvsp[-2].no),NULL,NULL);}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 143 "stage8.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(2,0,(yyvsp[0].name),FIELD,NULL,CreateTree(1,0,(yyvsp[-2].name),FIELD,NULL,NULL,NULL,NULL),NULL,NULL);}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 144 "stage8.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(2,0,(yyvsp[0].name),FIELD,NULL,CreateTree(1,0,(yyvsp[-2].name),FIELD,NULL,NULL,NULL,NULL),NULL,NULL);}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 146 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(2,0,(yyvsp[-3].name),CFUNCALL,NULL,CreateTree(1,0,(yyvsp[-5].name),FIELD,NULL,NULL,NULL,NULL),(yyvsp[-1].no),NULL);}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 147 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(2,0,(yyvsp[-3].name),CFUNCALL,NULL,CreateTree(1,0,(yyvsp[-5].name),FIELD,NULL,NULL,NULL,NULL),(yyvsp[-1].no),NULL);}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 148 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,(yyvsp[-3].name),CFUNCALL,NULL,(yyvsp[-5].no),(yyvsp[-1].no),NULL);}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 150 "stage8.y" /* yacc.c:1646  */
    {	declaration_typeupdate((yyvsp[-2].name),G_TABLE_temp); }
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 152 "stage8.y" /* yacc.c:1646  */
    { G_TABLE_temp=declaration_addvar((yyvsp[0].name),1,G_TABLE_temp,NULL,0,G_TABLE);}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 153 "stage8.y" /* yacc.c:1646  */
    { G_TABLE_temp=declaration_addvar((yyvsp[-3].name),(yyvsp[-1].no)->val,G_TABLE_temp,NULL,0,G_TABLE);	}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 154 "stage8.y" /* yacc.c:1646  */
    { G_TABLE_temp=declaration_addvar((yyvsp[-3].name),1,G_TABLE_temp,V_Parameter,getlabel(),G_TABLE); V_Parameter=NULL; }
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 155 "stage8.y" /* yacc.c:1646  */
    { G_TABLE_temp=declaration_addvar((yyvsp[0].name),1,G_TABLE_temp,NULL,0,G_TABLE); }
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 156 "stage8.y" /* yacc.c:1646  */
    { G_TABLE_temp=declaration_addvar((yyvsp[-3].name),(yyvsp[-1].no)->val,G_TABLE_temp,NULL,0,G_TABLE); }
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 157 "stage8.y" /* yacc.c:1646  */
    { G_TABLE_temp=declaration_addvar((yyvsp[-3].name),1,G_TABLE_temp,V_Parameter,getlabel(),G_TABLE);	V_Parameter=NULL; }
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 160 "stage8.y" /* yacc.c:1646  */
    {(yyval.no)=NULL;}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 161 "stage8.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-2].no),(yyvsp[-1].no),NULL);}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 162 "stage8.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 165 "stage8.y" /* yacc.c:1646  */
    {
								decltypeflag=0;
								(yyval.no)=CreateTree(0,0,NULL,PDECLARATION,NULL,NULL,NULL,G_PARATABLE);
								G_PARATABLE=NULL;
							}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 170 "stage8.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,PDECLARATION,NULL,NULL,NULL,NULL);}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 173 "stage8.y" /* yacc.c:1646  */
    {
				 				Temp_Parameter->prev=V_Parameter;
								V_Parameter=Temp_Parameter;
							}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 177 "stage8.y" /* yacc.c:1646  */
    {
				 				Temp_Parameter->prev=NULL;
								V_Parameter=Temp_Parameter;

			 				}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 184 "stage8.y" /* yacc.c:1646  */
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
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 197 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,RETURNST,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 198 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,RETURNST,NULL,CreateTree(0,INTE,(yyvsp[-1].name),VARIABLE,NULL,NULL,NULL,NULL),NULL,NULL);}
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 199 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,RETURNST,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 202 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-1].no),(yyvsp[0].no),NULL);}
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 203 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 206 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 207 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 208 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 209 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 210 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 211 "stage8.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,BREAKST,NULL,NULL,NULL,NULL);}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 212 "stage8.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,CONTINUEST,NULL,NULL,NULL,NULL);}
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 213 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,RETURNST,NULL,(yyvsp[0].no),NULL,NULL);}
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 214 "stage8.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,BREAKP,NULL,NULL,NULL,NULL);}
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 218 "stage8.y" /* yacc.c:1646  */
    { 
										(yyval.no)=CreateTree(0,0,NULL,DECLARATION,NULL,NULL,NULL,G_TABLE);
										G_TABLE=NULL;
										G_TABLE_temp=NULL;
									}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 223 "stage8.y" /* yacc.c:1646  */
    {(yyval.no)=NULL;}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 224 "stage8.y" /* yacc.c:1646  */
    {(yyval.no)=NULL;}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 227 "stage8.y" /* yacc.c:1646  */
    {			
							G_TABLE=declaration_addentry(G_TABLE,G_TABLE_temp);
									G_TABLE_temp=NULL;
						}
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 231 "stage8.y" /* yacc.c:1646  */
    {	
					G_TABLE=declaration_addentry(G_TABLE,G_TABLE_temp);
									G_TABLE_temp=NULL;
				}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 236 "stage8.y" /* yacc.c:1646  */
    {	declaration_typeupdate((yyvsp[-2].name),G_TABLE_temp); }
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 240 "stage8.y" /* yacc.c:1646  */
    {(yyval.name)=strdup(INTE);}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 241 "stage8.y" /* yacc.c:1646  */
    {(yyval.name)=strdup(STRE);}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 242 "stage8.y" /* yacc.c:1646  */
    {(yyval.name)=strdup((yyvsp[0].name));}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 244 "stage8.y" /* yacc.c:1646  */
    { G_TABLE_temp=declaration_addvar((yyvsp[0].name),1,G_TABLE_temp,NULL,0,G_TABLE);}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 245 "stage8.y" /* yacc.c:1646  */
    { G_TABLE_temp=declaration_addvar((yyvsp[-3].name),(yyvsp[-1].no)->val,G_TABLE_temp,NULL,0,G_TABLE);}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 246 "stage8.y" /* yacc.c:1646  */
    { G_TABLE_temp=declaration_addvar((yyvsp[0].name),1,G_TABLE_temp,NULL,0,G_TABLE); }
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 247 "stage8.y" /* yacc.c:1646  */
    { G_TABLE_temp=declaration_addvar((yyvsp[-3].name),(yyvsp[-1].no)->val,G_TABLE_temp,NULL,0,G_TABLE); }
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 250 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,READ0,NULL,CreateTree(0,INTE,(yyvsp[-1].name),VARIABLE,NULL,NULL,NULL,NULL),NULL,NULL);}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 251 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,READ0,NULL,CreateTree(0,0,(yyvsp[-4].name),VARIABLE,NULL,(yyvsp[-2].no),NULL,NULL),NULL,NULL);}
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 252 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,READ0,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 255 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,WRITE0,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 258 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"=",CreateTree(0,INTE,(yyvsp[-2].name),VARIABLE,NULL,NULL,NULL,NULL),(yyvsp[0].no),NULL);}
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 259 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"=",CreateTree(0,INTE,(yyvsp[-5].name),VARIABLE,NULL,(yyvsp[-3].no),NULL,NULL),(yyvsp[0].no),NULL);}
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 260 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 261 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"=",CreateTree(0,INTE,(yyvsp[-4].name),VARIABLE,NULL,NULL,NULL,NULL),CreateTree(0,NULL1,strdup("alloc"),ALOC,NULL,NULL,NULL,NULL),NULL);}
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 262 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,NULL1,strdup("intialize"),INIT,NULL,NULL,NULL,NULL);}
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 263 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"=",(yyvsp[-4].no),CreateTree(0,NULL1,strdup("alloc"),ALOC,NULL,NULL,NULL,NULL),NULL);}
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 264 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"=",CreateTree(0,INTE,(yyvsp[-5].name),VARIABLE,NULL,NULL,NULL,NULL),CreateTree(0,NULL1,strdup("alloc"),ALOC,NULL,NULL,NULL,NULL),NULL);}
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 265 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"=",(yyvsp[-5].no),CreateTree(0,NULL1,strdup("alloc"),ALOC,NULL,NULL,NULL,NULL),NULL);}
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 268 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) =  CreateTree(0,BOLE,NULL,IFST,NULL,(yyvsp[-6].no),CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-3].no),(yyvsp[-1].no),NULL),NULL);}
#line 2139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 269 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) =  CreateTree(0,BOLE,NULL,IFST,NULL,(yyvsp[-4].no),CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-1].no),NULL,NULL),NULL);}
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 272 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) =  CreateTree(0,BOLE,NULL,WHILEST,NULL,(yyvsp[-4].no),(yyvsp[-1].no),NULL);}
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 275 "stage8.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"+",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 276 "stage8.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"-",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 277 "stage8.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"*",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 278 "stage8.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"/",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 279 "stage8.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,"<",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 280 "stage8.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,">",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 281 "stage8.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,">=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 282 "stage8.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,"<=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 283 "stage8.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,"==",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 284 "stage8.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,"!=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 285 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no);}
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 286 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,(yyvsp[-3].name),FUNCALL,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 287 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,(yyvsp[-3].name),VARIABLE,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 2229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 288 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 289 "stage8.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,(yyvsp[0].name),VARIABLE,NULL,NULL,NULL,NULL);}
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 290 "stage8.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[0].no);}
#line 2247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 291 "stage8.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[0].no);}
#line 2253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 292 "stage8.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,NULL1,strdup(NULL1),VARIABLE,NULL,NULL,NULL,NULL);}
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 294 "stage8.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[0].no);}
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 295 "stage8.y" /* yacc.c:1646  */
    {(yyval.no)=NULL;}
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 297 "stage8.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-2].no),CreateTree(0,(yyvsp[0].no)->type,(yyvsp[0].no)->varname,ARGUMENT,NULL,(yyvsp[0].no),NULL,NULL),NULL);}
#line 2277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 298 "stage8.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,(yyvsp[0].no)->type,(yyvsp[0].no)->varname,ARGUMENT,NULL,(yyvsp[0].no),NULL,NULL);}
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2287 "y.tab.c" /* yacc.c:1646  */
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
#line 300 "stage8.y" /* yacc.c:1906  */


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
