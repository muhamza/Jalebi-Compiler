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
#line 1 "compiler.y" /* yacc.c:339  */

void yyerror (char *s);
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
int yylineno;
int scopeY = -1;
int tCounter = 0;
char *tempString;
bool FindVariableSymbolTable(char *ident);
bool IsVariableInitialized(char *ident);
bool IsVariableInteger(char *ident);

#line 81 "y.tab.c" /* yacc.c:339  */

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
    markazi = 258,
    se = 259,
    chalo = 260,
    jabtak = 261,
    agar = 262,
    agarwarna = 263,
    warna = 264,
    likho = 265,
    hindsa = 266,
    jumla = 267,
    booliyayi = 268,
    aasharia = 269,
    khaali = 270,
    sahih = 271,
    ghalat = 272,
    stringliteral = 273,
    identifier = 274,
    decimal = 275,
    integer = 276,
    comma = 277,
    semicolon = 278,
    LRP = 279,
    RRP = 280,
    LCP = 281,
    RCP = 282,
    INO = 283,
    DCO = 284,
    MUL = 285,
    DIV = 286,
    MOD = 287,
    PLS = 288,
    MIS = 289,
    LT = 290,
    LTE = 291,
    GT = 292,
    GTE = 293,
    IEQ = 294,
    NEQ = 295,
    NOT = 296,
    AND = 297,
    OR = 298,
    EA = 299,
    AA = 300,
    SA = 301,
    MA = 302,
    DA = 303
  };
#endif
/* Tokens.  */
#define markazi 258
#define se 259
#define chalo 260
#define jabtak 261
#define agar 262
#define agarwarna 263
#define warna 264
#define likho 265
#define hindsa 266
#define jumla 267
#define booliyayi 268
#define aasharia 269
#define khaali 270
#define sahih 271
#define ghalat 272
#define stringliteral 273
#define identifier 274
#define decimal 275
#define integer 276
#define comma 277
#define semicolon 278
#define LRP 279
#define RRP 280
#define LCP 281
#define RCP 282
#define INO 283
#define DCO 284
#define MUL 285
#define DIV 286
#define MOD 287
#define PLS 288
#define MIS 289
#define LT 290
#define LTE 291
#define GT 292
#define GTE 293
#define IEQ 294
#define NEQ 295
#define NOT 296
#define AND 297
#define OR 298
#define EA 299
#define AA 300
#define SA 301
#define MA 302
#define DA 303

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "compiler.y" /* yacc.c:355  */

	int iVal;
	float fVal;
	char* sVal;

#line 220 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 237 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   139

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  155

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

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
      45,    46,    47,    48
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    45,    45,    48,    48,    48,    48,    51,    51,    51,
      51,    51,    51,    53,    53,    55,    58,    58,    60,    62,
      62,    64,    66,    68,    70,    70,    72,    74,    75,    77,
      78,    80,    81,    82,    83,    84,    85,    86,    87,    89,
      90,    91,    92,    94,    95,   103,   112,   114,   124,   133,
     135,   136,   138,   139,   141,   147,   153,   155,   173,   199,
     209,   220,   221,   222,   223,   224,   241,   247,   253,   255,
     261,   267,   269,   274,   279,   299
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "markazi", "se", "chalo", "jabtak",
  "agar", "agarwarna", "warna", "likho", "hindsa", "jumla", "booliyayi",
  "aasharia", "khaali", "sahih", "ghalat", "stringliteral", "identifier",
  "decimal", "integer", "comma", "semicolon", "LRP", "RRP", "LCP", "RCP",
  "INO", "DCO", "MUL", "DIV", "MOD", "PLS", "MIS", "LT", "LTE", "GT",
  "GTE", "IEQ", "NEQ", "NOT", "AND", "OR", "EA", "AA", "SA", "MA", "DA",
  "$accept", "START", "ASSIGNMENTOPERATORS", "RELATIONALOPERATORS",
  "LOGICALOPERATORS", "NOTOPERATOR", "INCDECOPERATORS", "BOOLTYPE",
  "BOOLOPTIONS", "FLOATTYPE", "NUMBERTYPE", "STRINGTYPE", "NUMBERS",
  "COMPOUNDSTATEMENT", "MULTIDECLARATION", "MULTISTATEMENT", "DECLARATION",
  "STATEMENT", "PRINTSTATEMENT", "SELECTIONSTATEMENT", "IFSTATEMENT",
  "ELSEIFSTATEMENT", "ELSESTATEMENT", "ITERATIONSTATEMENT",
  "LOGICALEXPRESSION", "RELATIONALEXPRESSION", "EXPRESSIONSTATEMENT",
  "ADDEXPRESSION", "MULTIPLYEXPRESSION", "TERMINALEXPRESSION", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303
};
# endif

#define YYPACT_NINF -93

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-93)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       2,     5,    31,     9,   -93,    21,    41,   -93,   -93,   -93,
     -93,   -93,    19,    30,    55,    60,     7,    41,   -14,    -7,
      -5,    -2,    48,    65,    68,    69,    12,   -93,   -93,    75,
      70,     7,   -93,   -93,    87,   -93,   -93,   -93,   -93,    45,
     -93,    76,   -93,    77,   -93,    81,    79,   -13,   -13,    63,
      24,   -93,   -93,   -93,   -93,    57,    78,    80,   -93,   -93,
      82,    93,   -93,   -93,    84,    85,    86,    88,   100,    29,
      29,    54,   -93,    89,   -93,    90,   -93,    91,   -15,    92,
     -93,   -93,   -93,    24,    -1,    53,   -93,    95,   -93,   -93,
      96,   -93,   -93,   -13,    21,   -93,   -93,   -93,   -93,   -93,
      99,   -93,   -93,   -93,   -93,   -93,   -93,     6,   101,    98,
     -13,    21,    21,   102,   103,   104,   -10,   -93,    24,    24,
      24,    24,   -93,   -93,   105,   -93,   106,   -93,   -93,   -93,
      43,   107,   -93,   -93,   108,   -93,   -93,   -93,    53,    53,
     -93,   -93,    21,    21,   -93,   -93,   110,   -93,   112,   -93,
     -93,    54,   -93,   111,   -93
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,    28,     2,    22,    23,
      18,    21,     0,     0,     0,     0,    30,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,    17,     0,
       0,    30,    42,    39,    49,    40,    41,    27,    34,     0,
      33,     0,    31,     0,    32,     0,     0,     0,     0,     0,
       0,     5,     6,     3,     4,     0,     0,     0,    26,    29,
       0,    51,    19,    20,     0,     0,     0,     0,     0,     0,
       0,     0,    15,     0,    60,     0,    56,     0,     0,     0,
      74,    73,    72,     0,     0,    68,    71,     0,    25,    24,
       0,    63,    64,     0,     0,    46,    38,    37,    35,    36,
       0,     8,    10,     7,     9,    11,    12,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    65,     0,     0,
       0,     0,    61,    62,     0,    50,     0,    58,    57,    59,
       0,     0,    52,    47,     0,    43,    45,    75,    66,    67,
      69,    70,     0,     0,    13,    14,     0,    55,     0,    48,
      53,     0,    44,     0,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -93,   -93,   -93,    35,   -93,   -93,   113,   -93,    71,   -93,
     -93,   -93,   -93,   -92,    97,    94,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -47,   -71,   -93,    46,   -31,   -30
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    55,   107,   146,    73,    29,    12,    74,    13,
      14,    15,    90,     7,    16,    30,    17,    31,    32,    33,
      34,    61,    95,    35,    75,    76,    36,    84,    85,    86
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     109,    77,   125,    62,    63,     1,    69,   113,    70,    38,
     114,    71,    22,    23,    24,   137,    40,    25,    42,   132,
     133,    44,   117,   118,   119,   127,    26,   128,    72,     3,
      39,     4,   118,   119,     5,    27,    28,    41,    18,    43,
      27,    28,    45,    80,    81,    82,   124,     6,    83,    19,
     149,   150,     8,     9,    10,    11,    50,    51,    52,    53,
      54,    62,    63,   131,   101,   102,   103,   104,   105,   106,
      62,    63,    46,    69,    20,    70,    87,    88,    89,    21,
     153,    78,    79,   120,   121,   144,   145,   138,   139,    47,
     140,   141,    48,    49,    57,    60,    65,    58,    66,    67,
      68,    91,    94,    92,   100,   108,    93,    96,    97,    98,
      64,    99,     0,   110,    37,   111,   112,   115,   122,   123,
     126,   134,   129,   130,     0,    59,   135,   136,     0,   116,
     142,   143,   147,   148,   151,   152,   154,     0,     0,    56
};

static const yytype_int16 yycheck[] =
{
      71,    48,    94,    16,    17,     3,    19,    22,    21,    23,
      25,    24,     5,     6,     7,    25,    23,    10,    23,   111,
     112,    23,    23,    33,    34,    19,    19,    21,    41,    24,
      44,     0,    33,    34,    25,    28,    29,    44,    19,    44,
      28,    29,    44,    19,    20,    21,    93,    26,    24,    19,
     142,   143,    11,    12,    13,    14,    44,    45,    46,    47,
      48,    16,    17,   110,    35,    36,    37,    38,    39,    40,
      16,    17,    24,    19,    19,    21,    19,    20,    21,    19,
     151,    18,    19,    30,    31,    42,    43,   118,   119,    24,
     120,   121,    24,    24,    19,     8,    20,    27,    21,    18,
      21,    23,     9,    23,     4,    70,    24,    23,    23,    23,
      39,    23,    -1,    24,    17,    25,    25,    25,    23,    23,
      21,    19,    21,    25,    -1,    31,    23,    23,    -1,    83,
      25,    25,    25,    25,    24,    23,    25,    -1,    -1,    26
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    50,    24,     0,    25,    26,    62,    11,    12,
      13,    14,    56,    58,    59,    60,    63,    65,    19,    19,
      19,    19,     5,     6,     7,    10,    19,    28,    29,    55,
      64,    66,    67,    68,    69,    72,    75,    63,    23,    44,
      23,    44,    23,    44,    23,    44,    24,    24,    24,    24,
      44,    45,    46,    47,    48,    51,    55,    19,    27,    64,
       8,    70,    16,    17,    57,    20,    21,    18,    21,    19,
      21,    24,    41,    54,    57,    73,    74,    73,    18,    19,
      19,    20,    21,    24,    76,    77,    78,    19,    20,    21,
      61,    23,    23,    24,     9,    71,    23,    23,    23,    23,
       4,    35,    36,    37,    38,    39,    40,    52,    52,    74,
      24,    25,    25,    22,    25,    25,    76,    23,    33,    34,
      30,    31,    23,    23,    73,    62,    21,    19,    21,    21,
      25,    73,    62,    62,    19,    23,    23,    25,    77,    77,
      78,    78,    25,    25,    42,    43,    53,    25,    25,    62,
      62,    24,    23,    74,    25
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    51,    51,    51,    52,    52,    52,
      52,    52,    52,    53,    53,    54,    55,    55,    56,    57,
      57,    58,    59,    60,    61,    61,    62,    63,    63,    64,
      64,    65,    65,    65,    65,    65,    65,    65,    65,    66,
      66,    66,    66,    67,    67,    67,    68,    69,    70,    70,
      71,    71,    72,    72,    73,    73,    73,    74,    74,    74,
      74,    75,    75,    75,    75,    75,    76,    76,    76,    77,
      77,    77,    78,    78,    78,    78
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     2,     0,     2,
       0,     3,     3,     3,     3,     5,     5,     5,     5,     1,
       1,     1,     1,     5,     7,     5,     3,     5,     5,     0,
       2,     0,     5,     7,     7,     4,     1,     3,     3,     3,
       1,     4,     4,     3,     3,     4,     3,     3,     1,     3,
       3,     1,     1,     1,     1,     3
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
        case 26:
#line 72 "compiler.y" /* yacc.c:1646  */
    {/*printf("Increment Scope = %d\n", ++scopeY);*/}
#line 1419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 84 "compiler.y" /* yacc.c:1646  */
    {printf("%s = %d\n", (yyvsp[-3].sVal), (yyvsp[-1].iVal));}
#line 1425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 85 "compiler.y" /* yacc.c:1646  */
    {printf("%s = %s\n", (yyvsp[-3].sVal), (yyvsp[-1].sVal));}
#line 1431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 86 "compiler.y" /* yacc.c:1646  */
    {printf("%s = %f\n", (yyvsp[-3].sVal), (yyvsp[-1].fVal));}
#line 1437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 87 "compiler.y" /* yacc.c:1646  */
    {printf("%s = %s\n", (yyvsp[-3].sVal), (yyvsp[-1].sVal));}
#line 1443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 94 "compiler.y" /* yacc.c:1646  */
    {printf("print %s\n", (yyvsp[-2].sVal));}
#line 1449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 95 "compiler.y" /* yacc.c:1646  */
    {
			bool ret = FindVariableSymbolTable((yyvsp[-2].sVal)); 
			if(!ret){
				yyerror("Variable not declared!");
				exit(1);
			}
			printf("print %s, %s\n", (yyvsp[-4].sVal), (yyvsp[-2].sVal));
		}
#line 1462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 103 "compiler.y" /* yacc.c:1646  */
    {	
			bool ret = FindVariableSymbolTable((yyvsp[-2].sVal)); 
			if(!ret){
				yyerror("Variable not declared!");
				exit(1);
			}	
			printf("print %s\n", (yyvsp[-2].sVal));
		}
#line 1475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 114 "compiler.y" /* yacc.c:1646  */
    {
			char temp[5];
		    	sprintf(temp,"t%d",tCounter++);
			printf("if %s goto st+3\n", (yyvsp[-2].sVal));
			printf("%s = %s\n",temp, "0");
			printf("goto st+2\n");
			printf("%s = %s\n",temp, "1");
		    	(yyval.sVal) = strdup(temp);
		}
#line 1489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 124 "compiler.y" /* yacc.c:1646  */
    {
			char temp[5];
		    	sprintf(temp,"t%d",tCounter++);
			printf("if %s goto st+3\n", (yyvsp[-2].sVal));
			printf("%s = %s\n",temp, "0");
			printf("goto st+2\n");
			printf("%s = %s\n",temp, "1");
		    	(yyval.sVal) = strdup(temp);
		}
#line 1503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 133 "compiler.y" /* yacc.c:1646  */
    {}
#line 1509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 135 "compiler.y" /* yacc.c:1646  */
    {}
#line 1515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 136 "compiler.y" /* yacc.c:1646  */
    {}
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 141 "compiler.y" /* yacc.c:1646  */
    {
			char temp[5];
		    	sprintf(temp,"t%d",tCounter++);
			printf("%s = %s %s %s\n", temp, (yyvsp[-5].sVal), (yyvsp[-3].sVal), (yyvsp[-1].sVal));
		    	(yyval.sVal) = strdup(temp);
		}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 147 "compiler.y" /* yacc.c:1646  */
    {	//RELATIONALEXPRESSION
			char temp[5];
		    	sprintf(temp,"t%d",tCounter++);
			printf("%s = %s %s\n", temp, (yyvsp[-3].sVal), (yyvsp[-1].sVal));
		    	(yyval.sVal) = strdup(temp);
		}
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 153 "compiler.y" /* yacc.c:1646  */
    { (yyval.sVal) = (yyvsp[0].sVal); }
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 155 "compiler.y" /* yacc.c:1646  */
    {
			bool ret1 = FindVariableSymbolTable((yyvsp[-2].sVal)); 
			if (!ret1){
				yyerror("Variable not declared!");
				exit(1);
			}
			bool ret2 = IsVariableInteger((yyvsp[-2].sVal));			
			if (!ret2){
				yyerror("Incompatible datatypes!");
				exit(1);
			}
			char num[5]; 
			sprintf(num, "%d\0", (yyvsp[0].iVal));
			char temp[5];
		    	sprintf(temp,"t%d",tCounter++);
			printf("%s = %s %s %s\n",temp, (yyvsp[-2].sVal), (yyvsp[-1].sVal) ,num);
		    	(yyval.sVal) = strdup(temp);
		}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 173 "compiler.y" /* yacc.c:1646  */
    {
			bool ret1 = FindVariableSymbolTable((yyvsp[-2].sVal)); 
			if (!ret1){
				yyerror("Variable not declared!");
				exit(1);
			}
			bool ret2 = IsVariableInteger((yyvsp[-2].sVal));			
			if (!ret2){
				yyerror("Incompatible datatypes!");
				exit(1);
			}
			bool ret3 = FindVariableSymbolTable((yyvsp[0].sVal)); 
			if (!ret3){
				yyerror("Variable not declared!");
				exit(1);
			}
			bool ret4 = IsVariableInteger((yyvsp[0].sVal));			
			if (!ret4){
				yyerror("Incompatible datatypes!");
				exit(1);
			}
			char temp[5];
		    	sprintf(temp,"t%d",tCounter++);
			printf("%s = %s %s %s\n",temp, (yyvsp[-2].sVal), (yyvsp[-1].sVal), (yyvsp[0].sVal));
		    	(yyval.sVal) = strdup(temp);
		}
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 199 "compiler.y" /* yacc.c:1646  */
    {
			char* num[5]; 
			sprintf(num, "%d\0", (yyvsp[-2].iVal));
			char* num2[5]; 
			sprintf(num, "%d\0", (yyvsp[0].iVal));
			char temp[5];
		    	sprintf(temp,"t%d",tCounter++);
			printf("%s = %s %s %s\n",temp, num, (yyvsp[-1].sVal), num2);
		    	(yyval.sVal) = strdup(temp);
		}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 209 "compiler.y" /* yacc.c:1646  */
    {
			char temp[5];
			sprintf(temp,"t%d",tCounter++);
			printf("%s = %s\n",temp, (yyvsp[0].sVal));
			(yyval.sVal) = strdup(temp);
		}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 224 "compiler.y" /* yacc.c:1646  */
    {
			bool ret1 = FindVariableSymbolTable((yyvsp[-3].sVal)); 
			if (!ret1){
				yyerror("Variable not declared!");
				exit(1);
			}
			bool ret2 = IsVariableInteger((yyvsp[-3].sVal));			
			if (!ret2){
				yyerror("Incompatible datatypes!");
				exit(1);
			}
			InitializeVariable((yyvsp[-3].sVal));
			//UpdateVariableValue($1, atoi($3)); 
			//printf("Total = %d\n", $3);
			printf("%s = %s\n", (yyvsp[-3].sVal), (yyvsp[-1].sVal));
		}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 241 "compiler.y" /* yacc.c:1646  */
    {
		    	char temp[5];
		    	sprintf(temp,"t%d",tCounter++);
			printf("%s = %s + %s\n",temp, (yyvsp[-2].sVal), (yyvsp[0].sVal));
		    	(yyval.sVal) = strdup(temp);
		}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 247 "compiler.y" /* yacc.c:1646  */
    {
		    	char temp[5];
		    	sprintf(temp,"t%d",tCounter++);
			printf("%s = %s - %s\n",temp, (yyvsp[-2].sVal), (yyvsp[0].sVal));
		    	(yyval.sVal) = strdup(temp);
		}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 253 "compiler.y" /* yacc.c:1646  */
    {(yyval.sVal) = (yyvsp[0].sVal);}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 255 "compiler.y" /* yacc.c:1646  */
    {
		    	char temp[5];
		    	sprintf(temp,"t%d",tCounter++);
			printf("%s = %s * %s\n",temp, (yyvsp[-2].sVal), (yyvsp[0].sVal));
		    	(yyval.sVal) = strdup(temp);
		}
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 261 "compiler.y" /* yacc.c:1646  */
    {
		    	char temp[5];
		    	sprintf(temp,"t%d",tCounter++);
			printf("%s = %s / %s\n",temp, (yyvsp[-2].sVal), (yyvsp[0].sVal));
		    	(yyval.sVal) = strdup(temp);
		}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 267 "compiler.y" /* yacc.c:1646  */
    {(yyval.sVal) = (yyvsp[0].sVal);}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 269 "compiler.y" /* yacc.c:1646  */
    {
			char* temp[5]; 
			sprintf(temp, "%d\0", (yyvsp[0].iVal));
			(yyval.sVal) = strdup(temp);
		}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 274 "compiler.y" /* yacc.c:1646  */
    {
			char* temp[5]; 
			sprintf(temp, "%f\0", (yyvsp[0].fVal));
			(yyval.sVal) = strdup(temp);
		}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 279 "compiler.y" /* yacc.c:1646  */
    {
			bool ret1 = FindVariableSymbolTable((yyvsp[0].sVal)); 
			bool ret2 = IsVariableInitialized((yyvsp[0].sVal));
			bool ret3 = IsVariableInteger((yyvsp[0].sVal));	
			if(ret1 == true && ret2 == true && ret3 == true){
				(yyval.sVal) = (yyvsp[0].sVal);
			}
			else{
				if(!ret1){
					yyerror("Variable not declared!");
				}
				else if(!ret2){
					yyerror("Variable not initialized!");
				}
				else if(!ret3){
					yyerror("Variable type Mismatch!");
				}
				exit(1);
			}
		}
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 299 "compiler.y" /* yacc.c:1646  */
    {(yyval.sVal) = ((yyvsp[-1].sVal));}
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1761 "y.tab.c" /* yacc.c:1646  */
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
#line 301 "compiler.y" /* yacc.c:1906  */

#include "lex.yy.c"
#include <string.h>
int main(int argc, char *argv[])
{
	yyin = fopen(argv[1], "r");
	if(!yyparse())
		printf("\nParsed Correctly!\n");
	else
		printf("\nParsing Failed\n");
	fclose(yyin);
	PrintSymbolTable();
	return 0;
}

void yyerror (char *s) {
	printf("\nLine = %d : Masla = %s\n", (yylineno), s);
}
