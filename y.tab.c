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
#line 1 "parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symboltable.h"
extern FILE *yyin;
int regs[26];
float ITValue[100];
int troof_IT[100];
char **yarn_IT;
int currentIndexofTroof = 0;
int currentIndexofIT = 0;
int currentIndexofYarn = 0;
int isFirstVariable = 1;
int lengthOfToBeSmooshed = 0;

#line 83 "y.tab.c" /* yacc.c:339  */

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
    I = 258,
    OUTTA = 259,
    OF = 260,
    AN = 261,
    HAI = 262,
    KTHXBYE = 263,
    HAS = 264,
    A = 265,
    ITZ = 266,
    SUM = 267,
    DIFF = 268,
    QUOSHUNT = 269,
    PRODUKT = 270,
    MOD = 271,
    SMALLR = 272,
    BIGGR = 273,
    R = 274,
    SMOOSH = 275,
    VISIBLE = 276,
    BOTH = 277,
    EITHER = 278,
    NOT = 279,
    WON = 280,
    ANY = 281,
    ALL = 282,
    SAEM = 283,
    DIFFRINT = 284,
    MAEK = 285,
    IS = 286,
    NOW = 287,
    GIMMEH = 288,
    O = 289,
    RLY = 290,
    YA = 291,
    OMG = 292,
    OMGWTF = 293,
    MEBBE = 294,
    NO = 295,
    WAI = 296,
    OIC = 297,
    WILE = 298,
    TIL = 299,
    UPPIN = 300,
    NERFIN = 301,
    WTF = 302,
    IM = 303,
    IN = 304,
    YR = 305,
    RLY_Q = 306,
    WTF_Q = 307,
    MKAY = 308,
    IDENTIFIER = 309,
    NUMBR = 310,
    NUMBAR = 311,
    YARN_LITERAL = 312,
    TROOF_LITERAL = 313,
    TYPE_LITERAL = 314
  };
#endif
/* Tokens.  */
#define I 258
#define OUTTA 259
#define OF 260
#define AN 261
#define HAI 262
#define KTHXBYE 263
#define HAS 264
#define A 265
#define ITZ 266
#define SUM 267
#define DIFF 268
#define QUOSHUNT 269
#define PRODUKT 270
#define MOD 271
#define SMALLR 272
#define BIGGR 273
#define R 274
#define SMOOSH 275
#define VISIBLE 276
#define BOTH 277
#define EITHER 278
#define NOT 279
#define WON 280
#define ANY 281
#define ALL 282
#define SAEM 283
#define DIFFRINT 284
#define MAEK 285
#define IS 286
#define NOW 287
#define GIMMEH 288
#define O 289
#define RLY 290
#define YA 291
#define OMG 292
#define OMGWTF 293
#define MEBBE 294
#define NO 295
#define WAI 296
#define OIC 297
#define WILE 298
#define TIL 299
#define UPPIN 300
#define NERFIN 301
#define WTF 302
#define IM 303
#define IN 304
#define YR 305
#define RLY_Q 306
#define WTF_Q 307
#define MKAY 308
#define IDENTIFIER 309
#define NUMBR 310
#define NUMBAR 311
#define YARN_LITERAL 312
#define TROOF_LITERAL 313
#define TYPE_LITERAL 314

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 20 "parser.y" /* yacc.c:355  */

  int number;
  char *string;
  float floatnum;

#line 247 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 264 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  34
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   329

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  125

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    34,    34,    39,    54,    70,    72,    87,   102,   156,
     161,   166,   171,   176,   181,   188,   195,   202,   209,   216,
     223,   230,   236,   242,   253,   260,   270,   272,   282,   284,
     293,   303,   313,   324,   334,   338,   343,   348,   353,   364,
     375,   386,   388,   394,   396,   398,   400,   402,   404,   406,
     408,   410,   412,   414,   416,   432,   434,   436,   443
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "I", "OUTTA", "OF", "AN", "HAI",
  "KTHXBYE", "HAS", "A", "ITZ", "SUM", "DIFF", "QUOSHUNT", "PRODUKT",
  "MOD", "SMALLR", "BIGGR", "R", "SMOOSH", "VISIBLE", "BOTH", "EITHER",
  "NOT", "WON", "ANY", "ALL", "SAEM", "DIFFRINT", "MAEK", "IS", "NOW",
  "GIMMEH", "O", "RLY", "YA", "OMG", "OMGWTF", "MEBBE", "NO", "WAI", "OIC",
  "WILE", "TIL", "UPPIN", "NERFIN", "WTF", "IM", "IN", "YR", "RLY_Q",
  "WTF_Q", "MKAY", "IDENTIFIER", "NUMBR", "NUMBAR", "YARN_LITERAL",
  "TROOF_LITERAL", "TYPE_LITERAL", "$accept", "program",
  "variable_declaration", "output", "number_expression",
  "troof_expression", "conditional", "typecasting", "variable_assignment",
  "input", "end_case", "program_body", "concatenation",
  "concatenation_loop", "end_concatenation", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

#define YYPACT_NINF -40

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-40)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -5,   137,     9,     1,     6,    15,    16,    17,    18,    30,
      33,   -39,   206,     3,    35,   -10,   271,   -18,    -8,   -14,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,    90,   -40,   -40,    32,   253,   253,   253,   253,
     253,   253,   253,   -40,   -40,    -6,    45,   -40,   -40,   -40,
     -40,   -40,   -10,   271,   -10,   -40,   -40,    50,    51,    48,
     -40,   224,    27,   -40,   -40,     7,    56,    57,    58,    59,
      64,    66,    67,   -40,   -39,    10,    68,    69,    31,   253,
     -10,    24,   -40,   -40,   -40,   -40,    74,    77,   253,   253,
     253,   253,   253,   253,   253,   -40,   -10,   -40,   253,   -10,
     -10,   -40,   -40,   -40,   -40,    26,   159,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,    37,
     -40,   -40,   -40,   -40,   -40
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    23,
      21,    22,    24,    45,    48,    43,    44,    47,    51,    46,
      50,    52,     0,    49,     1,     0,     0,     0,     0,     0,
       0,     0,     0,    58,    57,     0,    56,    11,    12,    10,
       9,    13,     0,     0,     0,    29,    23,     0,     0,     0,
      42,     0,     0,     2,    53,     0,     0,     0,     0,     0,
       0,     0,     0,    54,     0,     0,     0,     0,     0,     0,
       0,     0,    40,    38,    39,    41,     0,     3,     0,     0,
       0,     0,     0,     0,     0,    55,     0,    26,     0,     0,
       0,    28,    33,    31,    36,     0,     0,    14,    15,    17,
      16,    18,    20,    19,    25,    32,    30,    27,    35,     0,
       4,     6,     7,     5,     8
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -40,   -40,   -40,   -40,   -12,    -9,   -40,   -40,   -40,   -40,
      60,   -40,   -11,    25,   -40
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    45,    46
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      49,    51,     1,    50,    57,    61,    55,    58,    52,    34,
      35,    36,    13,    14,    15,    43,    96,    62,    44,    16,
      37,    38,    39,    40,    66,    67,    68,    69,    70,    71,
      72,    53,    13,    14,    15,    41,    59,   100,    42,    16,
      54,    76,    65,    75,    77,    78,    60,    73,    22,    83,
      85,    74,    84,    13,    14,    15,    79,    80,    81,    86,
      16,    87,    88,    89,    90,    91,    97,   102,    22,   101,
      92,   103,    93,    94,    98,    99,   107,   108,   109,   110,
     111,   112,   113,   104,   105,   118,   115,   114,   106,    22,
     116,   117,    64,     3,   121,   123,   124,   122,    63,    95,
       0,     0,     4,     5,     6,     7,     8,     9,    10,     0,
      11,    12,    13,    14,    15,     0,     0,     0,     0,    16,
      17,     0,     0,    18,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     0,     0,     0,    19,    20,    21,     0,    22,     4,
       5,     6,     7,     8,     9,    10,     0,    11,    12,    13,
      14,    15,     0,     0,     0,     0,    16,    17,     0,   119,
      18,     4,     5,     6,     7,     8,     9,    10,     0,    11,
       0,    13,    14,    15,     0,     0,     0,     0,    16,     0,
       0,    19,    20,    21,     0,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    56,    20,    21,   120,    22,     4,     5,
       6,     7,     8,     9,    10,     0,    11,     0,    13,    14,
      15,     0,     0,     0,     0,    16,     4,     5,     6,     7,
       8,     9,    10,     0,    11,     0,    13,    14,    15,     0,
       0,     0,     0,    16,     0,     0,     0,     0,     0,     0,
      47,    20,    21,    48,    22,     4,     5,     6,     7,     8,
       9,    10,     0,     0,     0,     0,     0,     0,    56,    20,
      21,    82,    22,     4,     5,     6,     7,     8,     9,    10,
       0,     0,     0,    13,    14,    15,     0,     0,     0,     0,
      16,     0,     0,     0,     0,     0,     0,    56,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    56,    20,    21,     0,    22
};

static const yytype_int8 yycheck[] =
{
      12,    12,     7,    12,    16,    19,    15,    16,     5,     0,
       9,     5,    22,    23,    24,    54,     6,    31,    57,    29,
       5,     5,     5,     5,    36,    37,    38,    39,    40,    41,
      42,    28,    22,    23,    24,     5,    54,     6,     5,    29,
       5,    53,    10,    52,    53,    54,    54,    53,    58,    61,
      61,     6,    61,    22,    23,    24,     6,     6,    10,    32,
      29,    54,     6,     6,     6,     6,    75,    79,    58,    78,
       6,    80,     6,     6,     6,     6,    88,    89,    90,    91,
      92,    93,    94,    59,    10,    59,    98,    96,    11,    58,
      99,   100,    32,     3,   106,   106,    59,   106,     8,    74,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    29,
      30,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    54,    55,    56,    -1,    58,    12,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    29,    30,    -1,    10,
      33,    12,    13,    14,    15,    16,    17,    18,    -1,    20,
      -1,    22,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    54,    55,    56,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    55,    56,    57,    58,    12,    13,
      14,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      24,    -1,    -1,    -1,    -1,    29,    12,    13,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    57,    58,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      56,    57,    58,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    55,    56,    -1,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    61,     3,    12,    13,    14,    15,    16,    17,
      18,    20,    21,    22,    23,    24,    29,    30,    33,    54,
      55,    56,    58,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,     0,     9,     5,     5,     5,     5,
       5,     5,     5,    54,    57,    73,    74,    54,    57,    64,
      65,    72,     5,    28,     5,    65,    54,    64,    65,    54,
      54,    19,    31,     8,    70,    10,    64,    64,    64,    64,
      64,    64,    64,    53,     6,    65,    64,    65,    65,     6,
       6,    10,    57,    64,    65,    72,    32,    54,     6,     6,
       6,     6,     6,     6,     6,    73,     6,    65,     6,     6,
       6,    65,    64,    65,    59,    10,    11,    64,    64,    64,
      64,    64,    64,    64,    65,    64,    65,    65,    59,    10,
      57,    64,    65,    72,    59
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    62,    62,    62,    62,    62,    62,    63,
      63,    63,    63,    63,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    66,    67,    67,    67,    68,    68,
      68,    68,    69,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    71,    71,    72,    73,    73,    74,    74
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     4,     6,     6,     6,     6,     7,     2,
       2,     2,     2,     2,     5,     5,     5,     5,     5,     5,
       5,     1,     1,     1,     1,     5,     4,     5,     4,     2,
       5,     4,     5,     4,     0,     5,     4,     4,     3,     3,
       3,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     3,     1,     1,     1
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
#line 35 "parser.y" /* yacc.c:1646  */
    {
          printf("Note: valid program");
         }
#line 1469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 40 "parser.y" /* yacc.c:1646  */
    {
                        SYM *new_var = (SYM *) malloc(sizeof(SYM));
                        new_var->type = 0;
                        new_var->variable_name = (yyvsp[0].string);
                        new_var->next = NULL;

                        if (isFirstVariable == 1){
                          var_linkedlist = new_var;
                          isFirstVariable = 0;
                        }else{
                          insertAtHead(new_var);
                        }
                      }
#line 1487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 55 "parser.y" /* yacc.c:1646  */
    {
                        SYM *new_var = (SYM *) malloc(sizeof(SYM));
                        new_var->type = 2;
                        new_var->yarnValue = (yyvsp[0].string);
                        new_var->variable_name = (yyvsp[-2].string);
                        new_var->next = NULL;

                        if (isFirstVariable == 1){
                          var_linkedlist = new_var;
                          isFirstVariable = 0;
                        }else{
                          insertAtHead(new_var);
                        }
                      }
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 72 "parser.y" /* yacc.c:1646  */
    {
                          SYM *new_var = (SYM *) malloc(sizeof(SYM));
                          new_var->type = 1;
                          new_var->floatValue = ITValue[currentIndexofIT-1];
                          new_var->variable_name = (yyvsp[-2].string);
                          new_var->next = NULL;

                          if (isFirstVariable == 1){
                            var_linkedlist = new_var;
                            isFirstVariable = 0;
                          }else{
                            insertAtHead(new_var);
                          }
                      }
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 87 "parser.y" /* yacc.c:1646  */
    {
                          SYM *new_var = (SYM *) malloc(sizeof(SYM));
                          new_var->type = 3;
                          new_var->floatValue = troof_IT[currentIndexofTroof-1];
                          new_var->variable_name = (yyvsp[-2].string);
                          new_var->next = NULL;

                          if (isFirstVariable == 1){
                            var_linkedlist = new_var;
                            isFirstVariable = 0;
                          }else{
                            insertAtHead(new_var);
                          }
                      }
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 103 "parser.y" /* yacc.c:1646  */
    {
                        if (strcmp((yyvsp[0].string), "YARN") == 0){
                          SYM *new_var = (SYM *) malloc(sizeof(SYM));
                          new_var->type = 2;
                          new_var->variable_name = (yyvsp[-3].string);
                          new_var->next = NULL;

                          if (isFirstVariable == 1){
                            var_linkedlist = new_var;
                            isFirstVariable = 0;
                          }else{
                            insertAtHead(new_var);
                          }
                          
                        }else if(strcmp((yyvsp[0].string), "NUMBR") == 0 || strcmp((yyvsp[0].string), "NUMBAR") == 0){
                          SYM *new_var = (SYM *) malloc(sizeof(SYM));
                          new_var->type = 1;
                          new_var->variable_name = (yyvsp[-3].string);
                          new_var->next = NULL;

                          if (isFirstVariable == 1){
                            var_linkedlist = new_var;
                            isFirstVariable = 0;
                          }else{
                            insertAtHead(new_var);
                          }
                        }else if(strcmp((yyvsp[0].string), "TROOF") == 0){
                          SYM *new_var = (SYM *) malloc(sizeof(SYM));
                          new_var->type = 3;
                          new_var->variable_name = (yyvsp[-3].string);
                          new_var->next = NULL;

                          if (isFirstVariable == 1){
                            var_linkedlist = new_var;
                            isFirstVariable = 0;
                          }else{
                            insertAtHead(new_var);
                          }
                        }else if(strcmp((yyvsp[0].string), "NOOB") == 0){
                          SYM *new_var = (SYM *) malloc(sizeof(SYM));
                          new_var->type = 0;
                          new_var->variable_name = (yyvsp[-3].string);
                          new_var->next = NULL;

                          if (isFirstVariable == 1){
                            var_linkedlist = new_var;
                            isFirstVariable = 0;
                          }else{
                            insertAtHead(new_var);
                          }
                        }
                      }
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 157 "parser.y" /* yacc.c:1646  */
    {
          printf("\nPRINTING: %s\n", (troof_IT[currentIndexofTroof-1] == 1)? "WIN": "FAIL");
        }
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 162 "parser.y" /* yacc.c:1646  */
    {
          printf("\nPRINTING: %f\n", ITValue[currentIndexofIT-1]);
        }
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 167 "parser.y" /* yacc.c:1646  */
    {
          printVariable((yyvsp[0].string));
        }
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 172 "parser.y" /* yacc.c:1646  */
    {
          printf("%s", (yyvsp[0].string));
        }
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 177 "parser.y" /* yacc.c:1646  */
    {
          printf("\nPRINTING: %s\n", yarn_IT[currentIndexofYarn-1]);
        }
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 182 "parser.y" /* yacc.c:1646  */
    {
                      printf("\nAnswer: %f\n", ITValue[currentIndexofIT-2] + ITValue[currentIndexofIT-1]);
                      ITValue[currentIndexofIT-2] = ITValue[currentIndexofIT-2] + ITValue[currentIndexofIT-1];
                      currentIndexofIT--;
                    }
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 189 "parser.y" /* yacc.c:1646  */
    {
                      printf("\nAnswer: %f\n", ITValue[currentIndexofIT-2] - ITValue[currentIndexofIT-1]);
                      ITValue[currentIndexofIT-2] = ITValue[currentIndexofIT-2] - ITValue[currentIndexofIT-1];
                      currentIndexofIT--;
                   }
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 196 "parser.y" /* yacc.c:1646  */
    {
                      printf("\nAnswer: %f\n", ITValue[currentIndexofIT-2] * ITValue[currentIndexofIT-1]);
                      ITValue[currentIndexofIT-2] = ITValue[currentIndexofIT-2] * ITValue[currentIndexofIT-1];
                      currentIndexofIT--;
                   }
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 203 "parser.y" /* yacc.c:1646  */
    {
                      printf("\nAnswer: %f\n", ITValue[currentIndexofIT-2] / ITValue[currentIndexofIT-1]);
                      ITValue[currentIndexofIT-2] = ITValue[currentIndexofIT-2] / ITValue[currentIndexofIT-1];
                      currentIndexofIT--;
                   }
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 210 "parser.y" /* yacc.c:1646  */
    {
                      printf("\nAnswer: %f\n", (int)ITValue[currentIndexofIT-2] % (int)ITValue[currentIndexofIT-1]);
                      ITValue[currentIndexofIT-2] = (int) ITValue[currentIndexofIT-2] % (int) ITValue[currentIndexofIT-1];
                      currentIndexofIT--;               
                   }
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 217 "parser.y" /* yacc.c:1646  */
    {
                      printf("\nAnswer: %f\n", ITValue[currentIndexofIT-2] > ITValue[currentIndexofIT-1] ? ITValue[currentIndexofIT-2]: ITValue[currentIndexofIT-1]);
                      ITValue[currentIndexofIT-2] = ITValue[currentIndexofIT-2] > ITValue[currentIndexofIT-1] ? ITValue[currentIndexofIT-2]: ITValue[currentIndexofIT-1];
                      currentIndexofIT--;     
                   }
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 224 "parser.y" /* yacc.c:1646  */
    {
                      printf("\nAnswer: %f\n", ITValue[currentIndexofIT-2] < ITValue[currentIndexofIT-1] ? ITValue[currentIndexofIT-2]: ITValue[currentIndexofIT-1]);
                      ITValue[currentIndexofIT-2] = ITValue[currentIndexofIT-2] < ITValue[currentIndexofIT-1] ? ITValue[currentIndexofIT-2]: ITValue[currentIndexofIT-1];
                      currentIndexofIT--; 
                   }
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 231 "parser.y" /* yacc.c:1646  */
    {
                    ITValue[currentIndexofIT] = (yyvsp[0].number);
                    ++currentIndexofIT;
                   }
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 237 "parser.y" /* yacc.c:1646  */
    {
                    ITValue[currentIndexofIT] = (yyvsp[0].floatnum);
                    ++currentIndexofIT;
                   }
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 243 "parser.y" /* yacc.c:1646  */
    {
                    int type = checkIfValidVariableWithoutType((yyvsp[0].string));
                    if (type == 1){
                      ITValue[currentIndexofIT] = getValueOfVariableNumber((yyvsp[0].string));
                      ++currentIndexofIT;
                    }else{
                      printf("Syntax error. Invalid value.");
                    }
                   }
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 254 "parser.y" /* yacc.c:1646  */
    {

                    troof_IT[currentIndexofTroof] = (yyvsp[0].string);
                    ++currentIndexofTroof;
                  }
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 261 "parser.y" /* yacc.c:1646  */
    {
                    if (troof_IT[currentIndexofTroof-2] == troof_IT[currentIndexofTroof-1]){
                      troof_IT[currentIndexofTroof-2] = 1;
                    }else{
                      troof_IT[currentIndexofTroof-2] = 0;
                    }
                    currentIndexofTroof--;
                  }
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 273 "parser.y" /* yacc.c:1646  */
    {
                    if (troof_IT[currentIndexofTroof-2] == 1 || troof_IT[currentIndexofTroof-1] == 1){
                      troof_IT[currentIndexofTroof-2] = 1;
                    }else{
                      troof_IT[currentIndexofTroof-2] =  0;
                    }
                    currentIndexofTroof--;
                  }
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 285 "parser.y" /* yacc.c:1646  */
    {
                    if (troof_IT[currentIndexofTroof-1] == 1){
                     troof_IT[currentIndexofTroof-1] = 0;
                    }else{
                      troof_IT[currentIndexofTroof-1] = 1;
                    }
                  }
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 294 "parser.y" /* yacc.c:1646  */
    {
                    if (troof_IT[currentIndexofTroof-2] == troof_IT[currentIndexofTroof-1]){
                      troof_IT[currentIndexofTroof-2] = 1;
                    }else{
                      troof_IT[currentIndexofTroof-2] = 0;
                    }
                    currentIndexofTroof--;
                  }
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 304 "parser.y" /* yacc.c:1646  */
    {
                    if (troof_IT[currentIndexofTroof-2] != troof_IT[currentIndexofTroof-1]){
                      troof_IT[currentIndexofTroof-2] = 1;
                    }else{
                      troof_IT[currentIndexofTroof-2] =  0;
                    }
                    currentIndexofTroof--;
                  }
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 314 "parser.y" /* yacc.c:1646  */
    {
                    if (ITValue[currentIndexofIT-2] == ITValue[currentIndexofIT-1]){
                      printf("%i vs %i", ITValue[currentIndexofIT-2], ITValue[currentIndexofIT-1]);
                      ITValue[currentIndexofIT-2] = 1;
                    }else{
                      ITValue[currentIndexofIT-2] = 0;
                    }
                    currentIndexofIT--;
                  }
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 325 "parser.y" /* yacc.c:1646  */
    {
                    if (ITValue[currentIndexofIT-2] != ITValue[currentIndexofIT-1]){
                      ITValue[currentIndexofIT-2] = 1;
                    }else{
                      ITValue[currentIndexofIT-2] = 0;
                    }
                    currentIndexofIT--;
                  }
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 339 "parser.y" /* yacc.c:1646  */
    {

              }
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 344 "parser.y" /* yacc.c:1646  */
    {

              }
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 349 "parser.y" /* yacc.c:1646  */
    {

              }
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 354 "parser.y" /* yacc.c:1646  */
    {
                        int isValid = checkIfValidVariable((yyvsp[-2].string), 1);
                        if (isValid == 1){
                          setNumbrVar((yyvsp[-2].string), 1, ITValue[currentIndexofIT-1]);
                        }else{
                          printf("Syntax error. Error in initialization");
                          exit(0);
                        }
                      }
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 365 "parser.y" /* yacc.c:1646  */
    {
                        int isValid = checkIfValidVariable((yyvsp[-2].string), 3);
                        if (isValid == 1){
                          setTroofVar((yyvsp[-2].string), 3, troof_IT[currentIndexofTroof-1]);
                        }else{
                          printf("Syntax error. Error in initialization");
                          exit(0);
                        }
                      }
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 376 "parser.y" /* yacc.c:1646  */
    {
                        int isValid = checkIfValidVariable((yyvsp[-2].string), 2);
                        if (isValid == 1){
                          setYarnVar((yyvsp[-2].string), 2, (yyvsp[0].string));
                        }else{
                          printf("Syntax error. Error in initialization");
                          exit(0);
                        }
                      }
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 389 "parser.y" /* yacc.c:1646  */
    {
          inputVariable((yyvsp[0].string));
        }
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 417 "parser.y" /* yacc.c:1646  */
    {
                  int smooshCounter = 1;
                  char *finalString;
                  finalString = (char *)malloc(sizeof(200));
                  while (smooshCounter <= lengthOfToBeSmooshed){
                      strcat(finalString, yarn_IT[currentIndexofYarn - (smooshCounter)]);
                    ++smooshCounter;
                  
                  }
                  yarn_IT[currentIndexofYarn - lengthOfToBeSmooshed] = finalString;
                  currentIndexofYarn = (currentIndexofYarn - lengthOfToBeSmooshed) + 1;
                  
                }
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 437 "parser.y" /* yacc.c:1646  */
    {
                      yarn_IT[currentIndexofYarn] = (yyvsp[0].string);
                      ++currentIndexofYarn;
                      ++lengthOfToBeSmooshed;
                    }
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1950 "y.tab.c" /* yacc.c:1646  */
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
#line 445 "parser.y" /* yacc.c:1906  */

main(int argc, char *argv[]){
 var_linkedlist = (SYM *)malloc(sizeof(SYM));
 yarn_IT = (char **)malloc(sizeof(char *) * 100);
 yyin = fopen(argv[1], "r");
 return(yyparse());
}
yyerror(s)
char *s;
{
  fprintf(stderr, "%s\n",s);
}
yywrap()
{
  return(1);
}
