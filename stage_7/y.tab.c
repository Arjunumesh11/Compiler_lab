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
#line 20 "stage7.y" /* yacc.c:355  */

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   405

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  277

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

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
      45,    46,     2,     2,    51,     2,    50,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    49,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    53,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,    48,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
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
     323,   327,   337,   338,   340,   357,   375,   389,   390,   391,
     393,   401,   409,   416,   425,   426,   427,   430,   433,   434,
     435,   436,   437,   438,   441,   442,   445,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   467,   468,   470,   471
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ALLOC", "INTIALIZE", "RETURN", "MAIN",
  "READ", "SELF", "CLASS", "ENDCLASS", "Extends", "WRITE", "TYPE",
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
     295,   296,   297,   298,   299,    40,    41,   123,   125,    59,
      46,    44,    91,    93
};
# endif

#define YYPACT_NINF -233

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-233)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      15,     3,    55,    70,  -233,    92,    74,    69,  -233,    90,
    -233,   146,   124,    60,  -233,  -233,   121,   163,    14,  -233,
     157,    46,   105,  -233,  -233,  -233,    21,  -233,   195,   168,
     199,  -233,  -233,   178,  -233,    51,  -233,   203,    55,  -233,
     105,  -233,   204,  -233,  -233,   173,   196,  -233,  -233,  -233,
    -233,    26,    85,  -233,  -233,   183,  -233,    56,   217,    60,
      60,   224,  -233,   232,    60,  -233,   102,  -233,   233,   206,
     207,  -233,   192,  -233,   239,   211,   190,  -233,   242,   208,
      39,   214,  -233,  -233,   210,   106,   135,   219,   215,   221,
     174,  -233,   223,   234,   228,   238,    17,   259,   264,  -233,
     240,   241,   243,   244,   245,  -233,    60,  -233,   266,   117,
    -233,    60,  -233,  -233,    60,   267,   248,   277,  -233,   271,
     -42,   268,   137,    10,   298,    -2,    42,   299,    -2,    -2,
      -2,  -233,  -233,    36,   301,  -233,   303,  -233,  -233,  -233,
    -233,  -233,  -233,    31,  -233,   310,   283,    60,  -233,  -233,
     284,   276,   196,   278,   285,  -233,  -233,  -233,    30,   156,
    -233,   286,  -233,   -31,  -233,    -2,   288,  -233,   150,   305,
     306,   328,  -233,    97,   279,   293,   307,   328,  -233,  -233,
    -233,  -233,   308,   319,  -233,  -233,   217,  -233,   342,  -233,
      -2,  -233,   350,    -2,   351,    -2,   314,   358,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,  -233,   330,
     331,   353,   346,   344,   335,    60,   333,   336,   332,   111,
     338,   328,   340,   337,   345,   164,  -233,   347,   187,   187,
    -233,  -233,   343,   343,   343,   343,   343,   343,  -233,  -233,
      -2,   264,   264,  -233,   341,  -233,  -233,  -233,   348,    -2,
    -233,    -2,    -2,  -233,    -2,   328,  -233,   193,   235,   349,
    -233,   352,   328,   354,   355,  -233,   264,  -233,   196,  -233,
    -233,  -233,   246,   217,  -233,   356,  -233
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      30,     0,     0,     0,     4,    10,     0,     0,    32,     0,
       1,     0,     0,     0,    29,    31,     0,    14,     0,    12,
       0,     0,     0,    79,    77,    78,     0,    35,     0,     0,
       0,     9,    11,     0,    26,     0,    28,     0,    77,     3,
       0,     7,     0,    33,    34,     0,    73,    15,    17,    25,
      27,    47,     0,     2,     6,     0,    36,     0,     0,     0,
      54,     0,    43,     0,    54,    72,     0,    75,     0,     0,
       0,    16,     0,    20,     0,     0,    53,    56,     0,     0,
      44,     0,    71,    74,    82,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,     0,     0,    70,     0,    62,
       0,     0,     0,     0,     0,     5,     0,    19,     0,     0,
      49,     0,    57,    48,    54,     0,     0,     0,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    68,    69,     0,     0,    52,    70,    61,    63,    64,
      65,    66,    67,     0,    23,     0,     0,    54,    18,    55,
       0,     0,    73,     0,    80,    59,    58,    60,     0,     0,
      39,     0,   114,   111,   110,     0,   112,   113,     0,     0,
       0,    88,    38,     0,     0,     0,     0,    90,    37,    51,
      13,    22,     0,     0,    46,    45,     0,    83,     0,    84,
       0,    86,     0,   116,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,     0,     0,    54,     0,     0,     0,     0,
      39,   118,     0,   115,    38,     0,   107,    37,    97,    98,
      99,   100,   102,   101,   103,   104,   106,   105,    91,    92,
       0,     0,     0,    93,     0,    21,     8,    81,     0,   116,
     108,     0,   116,   109,   116,    89,    70,     0,     0,     0,
      85,     0,   117,     0,     0,    95,     0,    96,    73,    40,
      41,    42,     0,     0,    94,     0,    24
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -233,  -233,     1,  -233,   357,  -233,  -233,   371,  -233,  -233,
    -233,  -233,   321,  -233,   252,  -233,  -233,  -233,  -233,   384,
    -233,   373,   -69,  -233,   367,  -233,  -181,   -62,  -233,   292,
     -43,  -232,   -97,  -148,  -233,   339,   -10,  -233,  -233,  -233,
    -233,  -233,  -233,   -93,   -98,  -233
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    40,    41,    12,    18,    19,    20,    59,
      71,    72,    73,   143,   144,    22,    35,     5,     7,     8,
      26,    27,   166,   167,    36,    52,    70,    75,    76,    77,
     256,    98,    99,    58,    66,    67,    78,    85,   100,   101,
     102,   103,   104,   221,   222,   223
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      96,   137,    81,    28,   186,   217,   161,   155,   127,   257,
     258,    37,    42,   162,   193,   163,    28,   122,    88,   194,
       6,   195,   164,    39,    31,    37,    97,   158,     1,    96,
      42,    17,   168,   171,   272,   173,   174,   175,    23,   176,
     177,    53,   133,   165,   161,   169,   170,    68,    23,    74,
     161,   162,   150,   163,   159,   136,    68,   162,     2,   163,
     164,     9,   108,    23,    24,    25,   164,   134,    23,    43,
      10,    60,   196,    23,    24,    25,   189,    23,    61,   180,
     127,   165,   190,    14,   114,   183,     6,   165,    34,    24,
      25,   115,   275,    49,    24,    25,   145,   219,    65,    24,
      25,    11,   225,    24,    25,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   198,   199,   200,   201,    23,
     273,    13,    23,   202,   203,   204,   205,   206,   207,   198,
     199,   200,   201,   145,    62,    16,    63,   202,   203,   204,
     205,   206,   207,    88,    82,    24,    25,   255,    38,    25,
     211,   261,   120,   244,   263,   118,   264,   119,   262,   121,
     137,   137,   147,    17,   248,    21,   148,    29,   198,   199,
     200,   201,    96,    96,    30,   137,   202,   203,   204,   205,
     206,   207,   198,   199,   200,   201,   157,   134,    96,    96,
     202,   203,   204,   205,   206,   207,   208,    96,    86,   126,
      87,    88,   191,    96,    33,    89,   134,   200,   201,    23,
      90,    86,    45,    87,    88,    46,    47,   253,    89,    48,
      51,    55,    56,    90,   127,    92,   128,   265,    64,    91,
     266,    93,    94,    95,   106,    24,    25,    57,    92,    69,
      86,   111,    87,    88,    93,    94,    95,    89,    79,    80,
      84,    86,    90,    87,    88,   105,   109,   110,    89,   112,
     116,   113,   117,    90,   123,   124,   125,    92,   129,    86,
     267,    87,    88,    93,    94,    95,    89,   131,    92,   130,
     274,    90,   135,   146,    93,    94,    95,   132,   154,   138,
     139,   151,   140,   141,   142,   152,    92,   198,   199,   200,
     201,   153,    93,    94,    95,   202,   203,   204,   205,   206,
     207,   198,   199,   200,   201,   160,   172,   156,   178,   202,
     203,   204,   205,   206,   207,   212,   179,   182,   147,   185,
     184,   187,   198,   199,   200,   201,   192,   188,   197,   213,
     202,   203,   204,   205,   206,   207,   198,   199,   200,   201,
     209,   210,   214,   215,   202,   203,   204,   205,   206,   207,
     226,   198,   199,   200,   201,   216,   218,   220,   224,    -1,
      -1,    -1,    -1,    -1,    -1,   227,   238,   239,   240,   241,
     242,   243,   245,   249,   246,   247,   250,   259,   251,    32,
     252,    15,   254,   107,   260,   181,   268,    54,   269,    44,
     270,   271,    50,   149,   276,    83
};

static const yytype_uint16 yycheck[] =
{
      69,    98,    64,    13,   152,   186,     8,    49,    50,   241,
     242,    21,    22,    15,    45,    17,    26,    86,     8,    50,
      17,    52,    24,    22,    10,    35,    69,    17,    13,    98,
      40,    17,   125,   126,   266,   128,   129,   130,    17,     3,
     133,    40,    25,    45,     8,     3,     4,    57,    17,    59,
       8,    15,   114,    17,   123,    98,    66,    15,    43,    17,
      24,     6,    72,    17,    43,    44,    24,    50,    17,    48,
       0,    45,   165,    17,    43,    44,    46,    17,    52,    48,
      50,    45,    52,    14,    45,   147,    17,    45,    42,    43,
      44,    52,   273,    42,    43,    44,   106,   190,    42,    43,
      44,     9,   195,    43,    44,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,    18,    19,    20,    21,    17,
     268,    47,    17,    26,    27,    28,    29,    30,    31,    18,
      19,    20,    21,   143,    49,    45,    51,    26,    27,    28,
      29,    30,    31,     8,    42,    43,    44,   240,    43,    44,
      53,   249,    17,   215,   252,    49,   254,    51,   251,    24,
     257,   258,    45,    17,    53,    41,    49,    46,    18,    19,
      20,    21,   241,   242,    11,   272,    26,    27,    28,    29,
      30,    31,    18,    19,    20,    21,    49,    50,   257,   258,
      26,    27,    28,    29,    30,    31,    46,   266,     5,    25,
       7,     8,    46,   272,    47,    12,    50,    20,    21,    17,
      17,     5,    17,     7,     8,    47,    17,    53,    12,    41,
      17,    17,    49,    17,    50,    32,    52,    34,    45,    23,
      37,    38,    39,    40,    42,    43,    44,    41,    32,    22,
       5,    51,     7,     8,    38,    39,    40,    12,    24,    17,
      17,     5,    17,     7,     8,    48,    17,    46,    12,    17,
      46,    53,    52,    17,    45,    50,    45,    32,    45,     5,
      35,     7,     8,    38,    39,    40,    12,    49,    32,    45,
      34,    17,    23,    17,    38,    39,    40,    49,    17,    49,
      49,    24,    49,    49,    49,    47,    32,    18,    19,    20,
      21,    24,    38,    39,    40,    26,    27,    28,    29,    30,
      31,    18,    19,    20,    21,    17,    17,    49,    17,    26,
      27,    28,    29,    30,    31,    46,    23,    17,    45,    53,
      46,    53,    18,    19,    20,    21,    50,    52,    50,    46,
      26,    27,    28,    29,    30,    31,    18,    19,    20,    21,
      45,    45,    45,    45,    26,    27,    28,    29,    30,    31,
      46,    18,    19,    20,    21,    46,    24,    17,    17,    26,
      27,    28,    29,    30,    31,    17,    46,    46,    25,    33,
      36,    46,    49,    45,    48,    53,    46,    46,    51,    18,
      45,     7,    45,    72,    46,   143,    47,    40,    46,    26,
      46,    46,    35,   111,    48,    66
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,    43,    55,    56,    71,    17,    72,    73,     6,
       0,     9,    59,    47,    14,    73,    45,    17,    60,    61,
      62,    41,    69,    17,    43,    44,    74,    75,    90,    46,
      11,    10,    61,    47,    42,    70,    78,    90,    43,    56,
      57,    58,    90,    48,    75,    17,    47,    17,    41,    42,
      78,    17,    79,    56,    58,    17,    49,    41,    87,    63,
      45,    52,    49,    51,    45,    42,    88,    89,    90,    22,
      80,    64,    65,    66,    90,    81,    82,    83,    90,    24,
      17,    81,    42,    89,    17,    91,     5,     7,     8,    12,
      17,    23,    32,    38,    39,    40,    76,    84,    85,    86,
      92,    93,    94,    95,    96,    48,    42,    66,    90,    17,
      46,    51,    17,    53,    45,    52,    46,    52,    49,    51,
      17,    24,    76,    45,    50,    45,    25,    50,    52,    45,
      45,    49,    49,    25,    50,    23,    84,    86,    49,    49,
      49,    49,    49,    67,    68,    90,    17,    45,    49,    83,
      81,    24,    47,    24,    17,    49,    49,    49,    17,    76,
      17,     8,    15,    17,    24,    45,    76,    77,    97,     3,
       4,    97,    17,    97,    97,    97,     3,    97,    17,    23,
      48,    68,    17,    81,    46,    53,    87,    53,    52,    46,
      52,    46,    50,    45,    50,    52,    97,    50,    18,    19,
      20,    21,    26,    27,    28,    29,    30,    31,    46,    45,
      45,    53,    46,    46,    45,    45,    46,    80,    24,    97,
      17,    97,    98,    99,    17,    97,    46,    17,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    46,    46,
      25,    33,    36,    46,    81,    49,    48,    53,    53,    45,
      46,    51,    45,    53,    45,    97,    84,    85,    85,    46,
      46,    98,    97,    98,    98,    34,    37,    35,    47,    46,
      46,    46,    85,    87,    34,    80,    48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    55,    55,    56,    57,    57,    58,    59,
      59,    60,    60,    61,    62,    62,    63,    63,    64,    65,
      65,    66,    67,    67,    68,    69,    69,    70,    70,    71,
      71,    72,    72,    73,    74,    74,    75,    76,    76,    76,
      77,    77,    77,    78,    79,    79,    79,    79,    79,    79,
      80,    80,    80,    81,    81,    82,    82,    83,    84,    84,
      84,    85,    85,    86,    86,    86,    86,    86,    86,    86,
      86,    87,    87,    87,    88,    88,    89,    90,    90,    90,
      91,    91,    91,    91,    92,    92,    92,    93,    94,    94,
      94,    94,    94,    94,    95,    95,    96,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    98,    98,    99,    99
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
       1,     3,     2,     0,     2,     1,     3,     1,     1,     1,
       3,     6,     1,     4,     4,     7,     4,     4,     3,     6,
       3,     5,     5,     5,     9,     7,     7,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     4,
       1,     1,     1,     1,     1,     1,     0,     3,     1
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
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 32 "stage7.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 33 "stage7.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 35 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,"MAIN",FUNCDEF,NULL,(yyvsp[-2].no),(yyvsp[-1].no),NULL);}
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 37 "stage7.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 38 "stage7.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 41 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,strdup((yyvsp[-8].name)),(yyvsp[-7].name),FUNCDEF,NULL,(yyvsp[-5].no),CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-2].no),(yyvsp[-1].no),NULL),NULL);}
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 43 "stage7.y" /* yacc.c:1646  */
    {Current_class=NULL;}
#line 1567 "y.tab.c" /* yacc.c:1646  */
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
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 65 "stage7.y" /* yacc.c:1646  */
    {Cptr = CInstall((yyvsp[-2].name),(yyvsp[0].name));Current_class=Cptr;    }
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 70 "stage7.y" /* yacc.c:1646  */
    {Class_Finstall(Cptr,(yyvsp[-2].name),(yyvsp[-1].name));}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 75 "stage7.y" /* yacc.c:1646  */
    {Class_Minstall(Cptr,(yyvsp[-4].name),(yyvsp[-5].name),V_Parameter); V_Parameter=NULL;}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 77 "stage7.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 78 "stage7.y" /* yacc.c:1646  */
    {codeGen((yyvsp[0].no), target_file, 0);}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 80 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,strdup((yyvsp[-8].name)),(yyvsp[-7].name),FUNCDEF,NULL,(yyvsp[-5].no),CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-2].no),(yyvsp[-1].no),NULL),NULL);}
#line 1622 "y.tab.c" /* yacc.c:1646  */
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
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 93 "stage7.y" /* yacc.c:1646  */
    { (yyval.no)=CreateTree(0,0,NULL,GDECLARATION,NULL,NULL,NULL,NULL);}
#line 1644 "y.tab.c" /* yacc.c:1646  */
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
#line 1665 "y.tab.c" /* yacc.c:1646  */
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
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 130 "stage7.y" /* yacc.c:1646  */
    {}
#line 1692 "y.tab.c" /* yacc.c:1646  */
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
#line 1706 "y.tab.c" /* yacc.c:1646  */
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
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 155 "stage7.y" /* yacc.c:1646  */
    {name=strdup((yyvsp[-3].name));Index=0;}
#line 1727 "y.tab.c" /* yacc.c:1646  */
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
#line 1748 "y.tab.c" /* yacc.c:1646  */
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
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 191 "stage7.y" /* yacc.c:1646  */
    {name=strdup((yyvsp[-1].name));type_flag=strdup((yyvsp[-2].name));}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 193 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(3,0,(yyvsp[0].name),FIELD,NULL,(yyvsp[-2].no),NULL,NULL);}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 194 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(2,0,(yyvsp[0].name),FIELD,NULL,CreateTree(1,0,(yyvsp[-2].name),FIELD,NULL,NULL,NULL,NULL),NULL,NULL);}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 195 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(2,0,(yyvsp[0].name),FIELD,NULL,CreateTree(1,0,(yyvsp[-2].name),FIELD,NULL,NULL,NULL,NULL),NULL,NULL);}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 197 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(2,0,(yyvsp[-3].name),CFUNCALL,NULL,CreateTree(1,0,(yyvsp[-5].name),FIELD,NULL,NULL,NULL,NULL),(yyvsp[-1].no),NULL);}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 198 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(2,0,(yyvsp[-3].name),CFUNCALL,NULL,CreateTree(1,0,(yyvsp[-5].name),FIELD,NULL,NULL,NULL,NULL),(yyvsp[-1].no),NULL);}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 199 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,(yyvsp[-3].name),CFUNCALL,NULL,(yyvsp[-5].no),(yyvsp[-1].no),NULL);}
#line 1810 "y.tab.c" /* yacc.c:1646  */
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
#line 1826 "y.tab.c" /* yacc.c:1646  */
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
#line 1838 "y.tab.c" /* yacc.c:1646  */
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
#line 1850 "y.tab.c" /* yacc.c:1646  */
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
#line 1865 "y.tab.c" /* yacc.c:1646  */
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
#line 1877 "y.tab.c" /* yacc.c:1646  */
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
#line 1889 "y.tab.c" /* yacc.c:1646  */
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
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 270 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=NULL;}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 271 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-2].no),(yyvsp[-1].no),NULL);}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 272 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 275 "stage7.y" /* yacc.c:1646  */
    {
								decltypeflag=0;
								(yyval.no)=CreateTree(0,0,NULL,PDECLARATION,NULL,NULL,NULL,G_PARATABLE);
								G_PARATABLE=NULL;
							}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 280 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,PDECLARATION,NULL,NULL,NULL,NULL);}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 283 "stage7.y" /* yacc.c:1646  */
    {
				 				Temp_Parameter->prev=V_Parameter;
								V_Parameter=Temp_Parameter;
							}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 287 "stage7.y" /* yacc.c:1646  */
    {
				 				Temp_Parameter->prev=V_Parameter;
								V_Parameter=Temp_Parameter;

			 				}
#line 1957 "y.tab.c" /* yacc.c:1646  */
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
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 307 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,RETURNST,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 1980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 308 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,RETURNST,NULL,CreateTree(0,INTE,(yyvsp[-1].name),VARIABLE,NULL,NULL,NULL,NULL),NULL,NULL);}
#line 1986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 309 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,RETURNST,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 312 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-1].no),(yyvsp[0].no),NULL);}
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 313 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 316 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 317 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 318 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 319 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 320 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no); }
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 321 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,BREAKST,NULL,NULL,NULL,NULL);}
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 322 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,CONTINUEST,NULL,NULL,NULL,NULL);}
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 323 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,RETURNST,NULL,(yyvsp[0].no),NULL,NULL);}
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 327 "stage7.y" /* yacc.c:1646  */
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
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 337 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=NULL;}
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 338 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=NULL;}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 341 "stage7.y" /* yacc.c:1646  */
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
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 357 "stage7.y" /* yacc.c:1646  */
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
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 375 "stage7.y" /* yacc.c:1646  */
    {
						
							while(temp_table)
							{	
							
								temp_table->type=strdup((yyvsp[-2].name));
								temp_table=temp_table->prev;
							}	
						
										
						}
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 389 "stage7.y" /* yacc.c:1646  */
    {(yyval.name)=strdup(INTE);}
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 390 "stage7.y" /* yacc.c:1646  */
    {(yyval.name)=strdup(STRE);}
#line 2150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 391 "stage7.y" /* yacc.c:1646  */
    {(yyval.name)=strdup((yyvsp[0].name));}
#line 2156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 394 "stage7.y" /* yacc.c:1646  */
    {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[0].name));
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 2168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 402 "stage7.y" /* yacc.c:1646  */
    {
							temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[-3].name));
							temp_table->size=(yyvsp[-1].no)->val;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 409 "stage7.y" /* yacc.c:1646  */
    {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[0].name));
							temp_table->size=1;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 416 "stage7.y" /* yacc.c:1646  */
    {
			 				temp_table=(struct symboltable *)malloc(sizeof(struct symboltable ));
		 					temp_table->name=strdup((yyvsp[-3].name));
							temp_table->size=(yyvsp[-1].no)->val;
							temp_table->prev=G_TABLE_temp;
							G_TABLE_temp=temp_table;
						}
#line 2204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 425 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,READ0,NULL,CreateTree(0,INTE,(yyvsp[-1].name),VARIABLE,NULL,NULL,NULL,NULL),NULL,NULL);}
#line 2210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 426 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,READ0,NULL,CreateTree(0,0,(yyvsp[-4].name),VARIABLE,NULL,(yyvsp[-2].no),NULL,NULL),NULL,NULL);}
#line 2216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 427 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,READ0,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 2222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 430 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,0,NULL,WRITE0,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 2228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 433 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"=",CreateTree(0,INTE,(yyvsp[-2].name),VARIABLE,NULL,NULL,NULL,NULL),(yyvsp[0].no),NULL);}
#line 2234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 434 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"=",CreateTree(0,INTE,(yyvsp[-5].name),VARIABLE,NULL,(yyvsp[-3].no),NULL,NULL),(yyvsp[0].no),NULL);}
#line 2240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 435 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 436 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"=",CreateTree(0,INTE,(yyvsp[-4].name),VARIABLE,NULL,NULL,NULL,NULL),CreateTree(0,NULL1,strdup("alloc"),ALOC,NULL,NULL,NULL,NULL),NULL);}
#line 2252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 437 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,NULL1,strdup("intialize"),INIT,NULL,NULL,NULL,NULL);}
#line 2258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 438 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"=",(yyvsp[-4].no),CreateTree(0,NULL1,strdup("alloc"),ALOC,NULL,NULL,NULL,NULL),NULL);}
#line 2264 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 441 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) =  CreateTree(0,BOLE,NULL,IFST,NULL,(yyvsp[-6].no),CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-3].no),(yyvsp[-1].no),NULL),NULL);}
#line 2270 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 442 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) =  CreateTree(0,BOLE,NULL,IFST,NULL,(yyvsp[-4].no),CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-1].no),NULL,NULL),NULL);}
#line 2276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 445 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) =  CreateTree(0,BOLE,NULL,WHILEST,NULL,(yyvsp[-4].no),(yyvsp[-1].no),NULL);}
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 448 "stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"+",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 449 "stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"-",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 450 "stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"*",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 451 "stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,INTE,NULL,OPERATOR,"/",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 452 "stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,"<",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 453 "stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,">",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 454 "stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,">=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 455 "stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,"<=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 456 "stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,"==",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 457 "stage7.y" /* yacc.c:1646  */
    { (yyval.no) = CreateTree(0,BOLE,NULL,OPERATOR,"!=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 458 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no);}
#line 2348 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 459 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,(yyvsp[-3].name),FUNCALL,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 2354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 460 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,(yyvsp[-3].name),VARIABLE,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 2360 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 461 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 462 "stage7.y" /* yacc.c:1646  */
    {(yyval.no) = CreateTree(0,INTE,(yyvsp[0].name),VARIABLE,NULL,NULL,NULL,NULL);}
#line 2372 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 463 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[0].no);}
#line 2378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 464 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[0].no);}
#line 2384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 465 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,NULL1,strdup(NULL1),VARIABLE,NULL,NULL,NULL,NULL);}
#line 2390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 467 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[0].no);}
#line 2396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 468 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=NULL;}
#line 2402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 470 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,0,NULL,CONNECTOR,NULL,(yyvsp[-2].no),CreateTree(0,(yyvsp[0].no)->type,(yyvsp[0].no)->varname,ARGUMENT,NULL,(yyvsp[0].no),NULL,NULL),NULL);}
#line 2408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 471 "stage7.y" /* yacc.c:1646  */
    {(yyval.no)=CreateTree(0,(yyvsp[0].no)->type,(yyvsp[0].no)->varname,ARGUMENT,NULL,(yyvsp[0].no),NULL,NULL);}
#line 2414 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2418 "y.tab.c" /* yacc.c:1646  */
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
#line 473 "stage7.y" /* yacc.c:1906  */


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
