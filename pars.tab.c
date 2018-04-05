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
#line 1 "pars.y" /* yacc.c:339  */

    /* imported libraries */
    #include<stdio.h>
    #include<stdlib.h>
    #include<assert.h>
    #include<string.h>

    #define SIZE 50
    #define CHLDRN 3

    int yywrap();

    void yyerror(const char* s);

    int first = 0;

    double result = 0;

    short isStr = 0; //is 1 if string, else 0

    typedef union{
        double numval;
        char strval[7146];
    }data;

    /* node structure */
    typedef struct node{
        int type;
        double data;
//        data* value;
        char id[SIZE];
        int children_num;
        struct node* children[CHLDRN];
    }node;

    /* symbol structure */
    typedef struct{
        char name[SIZE];
        double data;
    }Symbol;

    struct node* tree;
    struct node* part1;
    struct node* part2;
    struct node* if_stmt;
    Symbol table[100];

    /* predeclared functions */
    void attach(struct node*, struct node*);

    struct node* make(int, double,char*);

    void use(struct node*);

    void add(char*, double);

    double get(char*);

#line 125 "pars.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "pars.tab.h".  */
#ifndef YY_YY_PARS_TAB_H_INCLUDED
# define YY_YY_PARS_TAB_H_INCLUDED
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
    OPEN_PARENS = 117,
    CLOSE_PARENS = 118,
    OR = 113,
    AND = 112,
    LT = 106,
    LTE = 108,
    GT = 107,
    GTE = 109,
    EQUALS = 110,
    NE = 111,
    PLUS = 102,
    MINUS = 103,
    TIMES = 105,
    DIVIDE = 104,
    NOT = 114,
    VAR = 100,
    VAL = 101,
    SEMI = 115,
    IS = 116,
    BEGIN_BEGIN = 119,
    END = 120,
    IF = 121,
    THEN = 122,
    ELSE = 123,
    WHILE = 124,
    DO = 125,
    PRINT = 126,
    INPUT = 127,
    STRING = 128,
    INVALID = 999,
    STATEMENT = 1001,
    ASSIGN = 1002,
    IDENTIFIER = 1003
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 60 "pars.y" /* yacc.c:355  */

    char vname[50];
    double dval;
    struct node* node;
    char strvar [7146];

#line 208 "pars.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARS_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 225 "pars.tab.c" /* yacc.c:358  */

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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   364

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  167

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   1003

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
      18,    19,    13,    14,    16,    15,     7,     9,     8,    10,
      11,    12,     6,     5,    17,    20,    21,     3,     4,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    32,
       2,    33,    34,    35
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   120,   120,   123,   133,   136,   143,   152,   167,   174,
     180,   185,   186,   189,   194,   199,   204,   209,   210,   215,
     220,   225,   230,   233,   238,   243,   248,   253,   258,   263,
     268,   273,   278,   283,   288,   293,   298,   303,   308,   313,
     318,   323,   328,   333,   338,   343,   348,   353,   356,   361,
     366,   371,   376,   381,   386,   391,   396,   399,   404,   409,
     414,   419,   424,   429,   434,   439,   442,   446,   450,   453,
     456,   459
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OPEN_PARENS", "CLOSE_PARENS", "OR",
  "AND", "LT", "LTE", "GT", "GTE", "EQUALS", "NE", "PLUS", "MINUS",
  "TIMES", "DIVIDE", "NOT", "VAR", "VAL", "SEMI", "IS", "BEGIN_BEGIN",
  "END", "IF", "THEN", "ELSE", "WHILE", "DO", "PRINT", "INPUT", "STRING",
  "INVALID", "STATEMENT", "ASSIGN", "IDENTIFIER", "$accept", "tree",
  "stmt", "stmts", "expr", "pers", "term1", "term2", "term3", "term4",
  "term5", "term6", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,  1000,   117,   118,   113,   112,   106,   108,   107,
     109,   110,   111,   102,   103,   105,   104,   114,   100,   101,
     115,   116,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   999,  1001,  1002,  1003
};
# endif

#define YYPACT_NINF -46

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-46)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     110,     8,    77,   -46,   -46,   110,   127,   127,   127,   -46,
      12,   -46,   110,   -16,    16,    22,    90,     5,    29,   -46,
     -46,     8,    19,     8,   -46,    -9,    10,    11,    21,   -46,
     -46,   127,   130,   133,   150,   153,   156,   159,   176,   179,
     182,   185,   202,   205,    44,   309,    81,   -46,   110,   110,
     -46,    30,     8,    22,     8,    90,     8,     5,     8,     5,
       8,     5,     8,     5,     8,     5,     8,     5,     8,    29,
       8,    29,     8,   -46,     8,   -46,   309,   208,   211,   228,
     231,   234,   237,   254,   257,   260,   263,   280,   283,   -46,
      26,   -46,   -46,    85,    87,   137,   160,   186,   212,   238,
     264,   284,   287,   290,   299,     8,    22,     8,   -46,     8,
       5,     8,     5,     8,     5,     8,     5,     8,     5,     8,
       5,     8,    29,     8,    29,     8,   -46,     8,   -46,   110,
     320,   330,    -6,    -6,    -6,    -6,    -6,    -6,   139,   139,
     -46,   -46,   301,   303,   307,   343,   345,   347,   349,   351,
     353,   355,   357,   359,   -46,   320,   320,    -6,    -6,    -6,
      -6,    -6,    -6,   139,   139,   -46,   -46
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,    70,    69,     4,     0,     0,     0,    71,
       0,     2,     4,     0,    12,    17,    22,    47,    56,    65,
      68,     0,     0,     0,    66,     0,     0,     0,     0,     1,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,     0,    10,     0,     0,
       9,     0,     0,    13,     0,    18,     0,    23,     0,    27,
       0,    31,     0,    35,     0,    39,     0,    43,     0,    48,
       0,    52,     0,    57,     0,    61,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
       6,     8,     5,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,     0,    20,     0,
      25,     0,    29,     0,    33,     0,    37,     0,    41,     0,
      45,     0,    50,     0,    54,     0,    59,     0,    63,     0,
      14,    19,    24,    28,    32,    36,    40,    44,    49,    53,
      58,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,    16,    21,    26,    30,    34,
      38,    42,    46,    51,    55,    60,    64
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -46,   -46,     1,   -45,     9,    -1,   -31,    23,    -5,    -4,
       0,   -46
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      22,    53,    24,    90,    91,    31,    25,    85,    86,    87,
      88,    21,    29,    30,    47,    26,    27,    28,    40,    41,
      44,    32,    46,    45,    32,     2,     3,     4,    33,    57,
      59,    61,    63,    65,    67,    48,    69,    71,     9,    49,
      51,    50,    73,    75,    42,    43,   106,   108,    76,    32,
      92,    93,   129,    94,     0,    95,    55,    96,     0,    97,
       0,    98,     0,    99,     0,   100,     0,   101,     0,   102,
       0,   103,     0,   104,   110,   112,   114,   116,   118,   120,
      23,   122,   124,     0,   154,    89,    32,   126,   128,   130,
      32,   131,    32,     0,     2,     3,     4,    34,    35,    36,
      37,    38,    39,     0,   142,     0,   143,     9,   144,     0,
     145,     0,   146,     1,   147,     0,   148,     0,   149,     0,
     150,     0,   151,     0,   152,     0,   153,     2,     3,     4,
       1,     0,     5,    52,     6,     0,    54,     7,     0,     8,
       9,   132,    32,     0,     2,     3,     4,     2,     3,     4,
       2,     3,     4,    56,    87,    88,    58,     9,     0,    60,
       9,     0,    62,     9,   133,    32,     0,     2,     3,     4,
       2,     3,     4,     2,     3,     4,     2,     3,     4,    64,
       9,     0,    66,     9,     0,    68,     9,     0,    70,     9,
     134,    32,     0,     2,     3,     4,     2,     3,     4,     2,
       3,     4,     2,     3,     4,    72,     9,     0,    74,     9,
       0,   105,     9,     0,   107,     9,   135,    32,     0,     2,
       3,     4,     2,     3,     4,     2,     3,     4,     2,     3,
       4,   109,     9,     0,   111,     9,     0,   113,     9,     0,
     115,     9,   136,    32,     0,     2,     3,     4,     2,     3,
       4,     2,     3,     4,     2,     3,     4,   117,     9,     0,
     119,     9,     0,   121,     9,     0,   123,     9,   137,    32,
       0,     2,     3,     4,     2,     3,     4,     2,     3,     4,
       2,     3,     4,   125,     9,     0,   127,     9,   138,    32,
       9,   139,    32,     9,   140,    32,     0,     2,     3,     4,
       2,     3,     4,   141,    32,   155,    32,   156,    32,     0,
       9,   157,    32,     9,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,   158,    32,   159,
      32,   160,    32,   161,    32,   162,    32,   163,    32,   164,
      32,   165,    32,   166,    32
};

static const yytype_int16 yycheck[] =
{
       1,    32,     2,    48,    49,    21,     5,    13,    14,    15,
      16,     3,     0,    12,    23,     6,     7,     8,    13,    14,
      21,     5,    23,     4,     5,    17,    18,    19,     6,    34,
      35,    36,    37,    38,    39,    25,    40,    41,    30,    28,
      31,    20,    42,    43,    15,    16,    77,    78,     4,     5,
      20,    52,    26,    54,    -1,    56,    33,    58,    -1,    60,
      -1,    62,    -1,    64,    -1,    66,    -1,    68,    -1,    70,
      -1,    72,    -1,    74,    79,    80,    81,    82,    83,    84,
       3,    85,    86,    -1,   129,     4,     5,    87,    88,     4,
       5,     4,     5,    -1,    17,    18,    19,     7,     8,     9,
      10,    11,    12,    -1,   105,    -1,   107,    30,   109,    -1,
     111,    -1,   113,     3,   115,    -1,   117,    -1,   119,    -1,
     121,    -1,   123,    -1,   125,    -1,   127,    17,    18,    19,
       3,    -1,    22,     3,    24,    -1,     3,    27,    -1,    29,
      30,     4,     5,    -1,    17,    18,    19,    17,    18,    19,
      17,    18,    19,     3,    15,    16,     3,    30,    -1,     3,
      30,    -1,     3,    30,     4,     5,    -1,    17,    18,    19,
      17,    18,    19,    17,    18,    19,    17,    18,    19,     3,
      30,    -1,     3,    30,    -1,     3,    30,    -1,     3,    30,
       4,     5,    -1,    17,    18,    19,    17,    18,    19,    17,
      18,    19,    17,    18,    19,     3,    30,    -1,     3,    30,
      -1,     3,    30,    -1,     3,    30,     4,     5,    -1,    17,
      18,    19,    17,    18,    19,    17,    18,    19,    17,    18,
      19,     3,    30,    -1,     3,    30,    -1,     3,    30,    -1,
       3,    30,     4,     5,    -1,    17,    18,    19,    17,    18,
      19,    17,    18,    19,    17,    18,    19,     3,    30,    -1,
       3,    30,    -1,     3,    30,    -1,     3,    30,     4,     5,
      -1,    17,    18,    19,    17,    18,    19,    17,    18,    19,
      17,    18,    19,     3,    30,    -1,     3,    30,     4,     5,
      30,     4,     5,    30,     4,     5,    -1,    17,    18,    19,
      17,    18,    19,     4,     5,     4,     5,     4,     5,    -1,
      30,     4,     5,    30,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,     4,     5,     4,
       5,     4,     5,     4,     5,     4,     5,     4,     5,     4,
       5,     4,     5,     4,     5
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    17,    18,    19,    22,    24,    27,    29,    30,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,     3,    41,     3,    46,    38,    40,    40,    40,     0,
      38,    21,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    41,     4,    41,    23,    25,    28,
      20,    40,     3,    42,     3,    43,     3,    44,     3,    44,
       3,    44,     3,    44,     3,    44,     3,    44,     3,    45,
       3,    45,     3,    46,     3,    46,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,     4,
      39,    39,    20,    41,    41,    41,    41,    41,    41,    41,
      41,    41,    41,    41,    41,     3,    42,     3,    42,     3,
      44,     3,    44,     3,    44,     3,    44,     3,    44,     3,
      44,     3,    45,     3,    45,     3,    46,     3,    46,    26,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,    41,    41,    41,    41,    41,    41,    41,    41,
      41,    41,    41,    41,    39,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    39,    39,    39,
      39,    40,    40,    41,    41,    41,    41,    41,    42,    42,
      42,    42,    42,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    46,    46,    46,    47,
      47,    47
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     4,     4,     6,     4,     3,
       3,     3,     1,     3,     5,     5,     7,     1,     3,     5,
       5,     7,     1,     3,     5,     5,     7,     3,     5,     5,
       7,     3,     5,     5,     7,     3,     5,     5,     7,     3,
       5,     5,     7,     3,     5,     5,     7,     1,     3,     5,
       5,     7,     3,     5,     5,     7,     1,     3,     5,     5,
       7,     3,     5,     5,     7,     1,     2,     4,     1,     1,
       1,     1
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
#line 120 "pars.y" /* yacc.c:1646  */
    {tree = (yyval.node);}
#line 1516 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 123 "pars.y" /* yacc.c:1646  */
    {
        if(first == 0){
            (yyval.node) = make(STATEMENT, 0, "");
            attach((yyval.node), (yyvsp[-1].node));
            attach((yyval.node), (yyvsp[0].node));
        }
        else{
            first = 0;
        }
    }
#line 1531 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 133 "pars.y" /* yacc.c:1646  */
    {(yyval.node) = NULL;}
#line 1537 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 136 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(ASSIGN, 0, "");
        attach((yyval.node), (yyvsp[-3].node));
        attach((yyval.node), (yyvsp[-1].node));
    }
#line 1547 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 143 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(IF, 0, "");
        part1 = make(STATEMENT, 0, "");
        attach((yyval.node), (yyvsp[-2].node));
        attach((yyval.node), (yyvsp[0].node));
        attach((yyval.node), part1);
    }
#line 1559 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 152 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(STATEMENT, 0, "");
        if_stmt = make(IF, 0, "");
        part1 = make(STATEMENT, 0, "");
        part2 = make(STATEMENT, 0, "");
        attach(if_stmt, (yyvsp[-4].node));
        attach(part1, (yyvsp[-2].node));
        attach(part2, (yyvsp[0].node));
        attach(if_stmt, part1);
        attach(if_stmt, part2);
        attach((yyval.node), if_stmt);
        first = 1;
    }
#line 1577 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 167 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(WHILE, 0, "");
        attach((yyval.node), (yyvsp[-2].node));
        attach((yyval.node), (yyvsp[0].node));
    }
#line 1587 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 174 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(PRINT, 0, "");
        attach((yyval.node), (yyvsp[-1].node));
    }
#line 1596 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 180 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 1604 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 185 "pars.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1610 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 186 "pars.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1616 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 189 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(OR, 0, "");
        attach((yyval.node), (yyvsp[-2].node));
        attach((yyval.node), (yyvsp[0].node));
    }
#line 1626 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 194 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(OR, 0, "");
        attach((yyval.node), (yyvsp[-4].node));
        attach((yyval.node), (yyvsp[-1].node));
    }
#line 1636 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 199 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(OR, 0, "");
        attach((yyval.node), (yyvsp[-3].node));
        attach((yyval.node), (yyvsp[0].node));
    }
#line 1646 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 204 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(OR, 0, "");
        attach((yyval.node), (yyvsp[-5].node));
        attach((yyval.node), (yyvsp[-1].node));
    }
#line 1656 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 209 "pars.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1662 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 210 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(AND, 0, "");
        attach((yyval.node), (yyvsp[-2].node));
        attach((yyval.node), (yyvsp[0].node));
    }
#line 1672 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 215 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(AND, 0, "");
        attach((yyval.node), (yyvsp[-4].node));
        attach((yyval.node), (yyvsp[-1].node));
    }
#line 1682 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 220 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(AND, 0, "");
        attach((yyval.node), (yyvsp[-3].node));
        attach((yyval.node), (yyvsp[0].node));
    }
#line 1692 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 225 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(AND, 0, "");
        attach((yyval.node), (yyvsp[-5].node));
        attach((yyval.node), (yyvsp[-1].node));
    }
#line 1702 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 230 "pars.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1708 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 233 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(LT, 0, "");
        attach((yyval.node), (yyvsp[-2].node));
        attach((yyval.node), (yyvsp[0].node));
    }
#line 1718 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 238 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(LT, 0, "");
        attach((yyval.node), (yyvsp[-4].node));
        attach((yyval.node), (yyvsp[-1].node));
    }
#line 1728 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 243 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(LT, 0, "");
        attach((yyval.node), (yyvsp[-3].node));
        attach((yyval.node), (yyvsp[0].node));
    }
#line 1738 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 248 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(LT, 0, "");
        attach((yyval.node), (yyvsp[-5].node));
        attach((yyval.node), (yyvsp[-1].node));
    }
#line 1748 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 253 "pars.y" /* yacc.c:1646  */
    {  
        (yyval.node) = make(LTE, 0, "");
        attach((yyval.node), (yyvsp[-2].node));
        attach((yyval.node), (yyvsp[0].node));
    }
#line 1758 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 258 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(LTE, 0, "");
        attach((yyval.node), (yyvsp[-4].node));
        attach((yyval.node), (yyvsp[-1].node));   
    }
#line 1768 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 263 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(LTE, 0, "");
        attach((yyval.node), (yyvsp[-3].node));
        attach((yyval.node), (yyvsp[0].node));
    }
#line 1778 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 268 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(LTE, 0, "");
        attach((yyval.node), (yyvsp[-5].node));
        attach((yyval.node), (yyvsp[-1].node));
    }
#line 1788 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 273 "pars.y" /* yacc.c:1646  */
    { 
        (yyval.node) = make(GT, 0, "");
        attach((yyval.node), (yyvsp[-2].node));
        attach((yyval.node), (yyvsp[0].node));   
    }
#line 1798 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 278 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(GT, 0, "");
        attach((yyval.node), (yyvsp[-4].node));
        attach((yyval.node), (yyvsp[-1].node));
    }
#line 1808 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 283 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(GT, 0, "");
        attach((yyval.node), (yyvsp[-3].node));
        attach((yyval.node), (yyvsp[0].node));
    }
#line 1818 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 288 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(GT, 0, "");
        attach((yyval.node), (yyvsp[-5].node));
        attach((yyval.node), (yyvsp[-1].node));
    }
#line 1828 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 293 "pars.y" /* yacc.c:1646  */
    {       
        (yyval.node) = make(GTE, 0, "");
        attach((yyval.node), (yyvsp[-2].node));
        attach((yyval.node), (yyvsp[0].node));
    }
#line 1838 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 298 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(GTE, 0, "");
        attach((yyval.node), (yyvsp[-4].node));
        attach((yyval.node), (yyvsp[-1].node));
    }
#line 1848 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 303 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(GTE, 0, "");
        attach((yyval.node), (yyvsp[-3].node));
        attach((yyval.node), (yyvsp[0].node));
    }
#line 1858 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 308 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(GTE, 0, "");
        attach((yyval.node), (yyvsp[-5].node));
        attach((yyval.node), (yyvsp[-1].node));
    }
#line 1868 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 313 "pars.y" /* yacc.c:1646  */
    {  
        (yyval.node) = make(EQUALS, 0, "");
        attach((yyval.node), (yyvsp[-2].node));
        attach((yyval.node), (yyvsp[0].node));
    }
#line 1878 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 318 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(EQUALS, 0, "");
        attach((yyval.node), (yyvsp[-4].node));
        attach((yyval.node), (yyvsp[-1].node));
    }
#line 1888 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 323 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(EQUALS, 0, "");
        attach((yyval.node), (yyvsp[-3].node));
        attach((yyval.node), (yyvsp[0].node));
    }
#line 1898 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 328 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(EQUALS, 0, "");
        attach((yyval.node), (yyvsp[-5].node));
        attach((yyval.node), (yyvsp[-1].node));
    }
#line 1908 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 333 "pars.y" /* yacc.c:1646  */
    { 
        (yyval.node) = make(NE, 0, "");
        attach((yyval.node), (yyvsp[-2].node));
        attach((yyval.node), (yyvsp[0].node));
    }
#line 1918 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 338 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(NE, 0, "");
        attach((yyval.node), (yyvsp[-4].node));
        attach((yyval.node), (yyvsp[-1].node));
    }
#line 1928 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 343 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(NE, 0, "");
        attach((yyval.node), (yyvsp[-3].node));
        attach((yyval.node), (yyvsp[0].node));
    }
#line 1938 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 348 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(NE, 0, "");
        attach((yyval.node), (yyvsp[-5].node));
        attach((yyval.node), (yyvsp[-1].node));
    }
#line 1948 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 353 "pars.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1954 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 356 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(PLUS, 0, "");
        attach((yyval.node), (yyvsp[-2].node));
        attach((yyval.node), (yyvsp[0].node));
    }
#line 1964 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 361 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(PLUS, 0, "");
        attach((yyval.node), (yyvsp[-4].node));
        attach((yyval.node), (yyvsp[-1].node));
    }
#line 1974 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 366 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(PLUS, 0, "");
        attach((yyval.node), (yyvsp[-3].node));
        attach((yyval.node), (yyvsp[0].node));
    }
#line 1984 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 371 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(PLUS, 0, "");
        attach((yyval.node), (yyvsp[-5].node));
        attach((yyval.node), (yyvsp[-1].node));
    }
#line 1994 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 376 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(MINUS, 0, "");
        attach((yyval.node), (yyvsp[-2].node));
        attach((yyval.node), (yyvsp[0].node));
    }
#line 2004 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 381 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(MINUS, 0, "");
        attach((yyval.node), (yyvsp[-4].node));
        attach((yyval.node), (yyvsp[-1].node));
    }
#line 2014 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 386 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(MINUS, 0, "");
        attach((yyval.node), (yyvsp[-3].node));
        attach((yyval.node), (yyvsp[0].node));
    }
#line 2024 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 391 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(MINUS, 0, "");
        attach((yyval.node), (yyvsp[-5].node));
        attach((yyval.node), (yyvsp[-1].node));
    }
#line 2034 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 396 "pars.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2040 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 399 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(TIMES, 0, "");
        attach((yyval.node), (yyvsp[-2].node));
        attach((yyval.node), (yyvsp[0].node));
    }
#line 2050 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 404 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(TIMES, 0, "");
        attach((yyval.node), (yyvsp[-4].node));
        attach((yyval.node), (yyvsp[-1].node));
    }
#line 2060 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 409 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(TIMES, 0,"");
        attach((yyval.node), (yyvsp[-3].node));
        attach((yyval.node), (yyvsp[0].node));
    }
#line 2070 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 414 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(TIMES, 0, "");
        attach((yyval.node),(yyvsp[-5].node));
        attach((yyval.node), (yyvsp[-1].node));
    }
#line 2080 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 419 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(DIVIDE, 0, "");
        attach((yyval.node), (yyvsp[-2].node));
        attach((yyval.node), (yyvsp[0].node));
    }
#line 2090 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 424 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(DIVIDE, 0, "");
        attach((yyval.node), (yyvsp[-4].node));
        attach((yyval.node), (yyvsp[-1].node));
    }
#line 2100 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 429 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(DIVIDE, 0, "");
        attach((yyval.node), (yyvsp[-3].node));
        attach((yyval.node), (yyvsp[0].node));
    }
#line 2110 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 434 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(DIVIDE, 0, "");
        attach((yyval.node), (yyvsp[-5].node));
        attach((yyval.node), (yyvsp[-1].node));
    }
#line 2120 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 439 "pars.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2126 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 442 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(NOT, 0, "");
        attach((yyval.node), (yyvsp[0].node));
    }
#line 2135 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 446 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(NOT, 0, "");
        attach((yyval.node), (yyvsp[-1].node));
    }
#line 2144 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 450 "pars.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2150 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 453 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(VAL, (yyvsp[0].dval), "");
    }
#line 2158 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 456 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(IDENTIFIER, 0, (yyvsp[0].vname));
    }
#line 2166 "pars.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 459 "pars.y" /* yacc.c:1646  */
    {
        (yyval.node) = make(INPUT, INPUT, "");
    }
#line 2174 "pars.tab.c" /* yacc.c:1646  */
    break;


#line 2178 "pars.tab.c" /* yacc.c:1646  */
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
#line 463 "pars.y" /* yacc.c:1906  */

int numSymbols = 0;


int yywrap(){
    return 1;
}

/*
 * Prints syntactical errors that occur during parsing
 */
void yyerror(const char* str){
    fprintf(stderr, "Error: '%s'.\n", str);
}

/*
 * Makes a new tree node for new tree element
 */
struct node* make(int type, double data, char* id) {
    int i;

    struct node* node = malloc(sizeof(struct node));

    node->type = type;
    node->data = data;
    strcpy(node->id, id);
    node->children_num = 0;
    for(i = 0; i < CHLDRN; i++) {
        node->children[i] = NULL;
    }

    return node;
}

/*
 * Attaches child to parent
 */
void attach(struct node* parent, struct node* child) {
  /* connect it */
    parent->children[parent->children_num] = child;
    parent->children_num++;
    assert(parent->children_num <= CHLDRN);
}

/*
 * Returns table element data value
 */
double get(char* name){
    int i;
    for(i = 0; i<numSymbols; i++){
        if((!strcmp(table[i].name, name))){
            return table[i].data;                        
		}
	}
}

/*
 * Adds data to table elements
 */
void add(char* name, double data){
    strcpy(table[numSymbols].name, name);
    table[numSymbols].data = data;
    numSymbols++;
}

int inTable(char* name){
    int x;
    for(x=0; x<numSymbols; x++){
	    if((!strcmp(table[x].name, name))){
		    return x;
		}
    }
	return -1;
}

/*
 * Processes statements that need to return things
 */
double evalExpression(struct node* node){
    int b;
    double z[2];
    double d;
    switch(node->type) {
        case IDENTIFIER: 
                return get(node->id);
                break;
        case VAL: 
                return node->data;
                break;
        case PLUS: 
                for(b=0; b<node->children_num; b++){
                    z[b] = evalExpression(node->children[b]);
                }
                return z[0] + z[1];
                break;
        case MINUS: 
                for(b=0; b<node->children_num; b++){
                    z[b] = evalExpression(node->children[b]);
                }
                return z[0] - z[1];
                break;
        case DIVIDE: 
                for(b=0; b<node->children_num; b++){
                    z[b] = evalExpression(node->children[b]);
                }
                return z[0] / z[1];
                break;
        case TIMES: 
                for(b=0; b<node->children_num; b++){
                    z[b] = evalExpression(node->children[b]);
                }
                return z[0] * z[1];
                break;
        case LT: 
                for(b=0; b<node->children_num; b++){
                    z[b] = evalExpression(node->children[b]);
                }
                return (z[0] < z[1]);
                break;
        case GT: 
                for(b=0; b<node->children_num; b++){
                    z[b] = evalExpression(node->children[b]);
                }
                return (z[0] > z[1]);
                break;
        case LTE: 
                for(b=0; b<node->children_num; b++){
                    z[b] = evalExpression(node->children[b]);
                }
                return (z[0] <= z[1]);
                break;
        case GTE: 
                for(b=0; b<node->children_num; b++){
                    z[b] = evalExpression(node->children[b]);
                }
                return (z[0] >= z[1]);
                break;
        case EQUALS:
                for(b=0; b<node->children_num; b++){
                    z[b] = evalExpression(node->children[b]);
                }
                return (z[0] == z[1]);
                break;
        case NE: 
                for(b=0; b<node->children_num; b++){
                    z[b] = evalExpression(node->children[b]);
                }
                return (z[0] != z[1]);
                break;
        case AND:
                for(b=0; b<node->children_num; b++){
                    z[b] = evalExpression(node->children[b]);
                }
                return (z[0] && z[1]);
                break;
        case OR:
                for(b=0; b<node->children_num; b++){
                    z[b] = evalExpression(node->children[b]);
                }
                return (z[0] || z[1]);
                break;
        case NOT:
                for(b=0; b<node->children_num; b++){
                    z[b] = evalExpression(node->children[b]);
                }
                return !z[0];
                break;
        case INPUT: 		
			    printf("Input Value: ");
				scanf("%lg", &d);
				return d;
				break;
        default:
                printf("Error, %d not a valid node type for an expression.\n", node->type);
                exit(1);
    }
}
        
/*
 * Evaluates statements that do not need to return anything
 */
void evalStatement(struct node* node){
	int x;
    switch(node->type){
        case PRINT:  
            printf("%9.6f\n",evalExpression(node->children[0]));
            break;
        case IF: 
            if(evalExpression(node->children[0])){
                evalStatement(node->children[1]);
            }
            else if(node->children[2] != NULL){
                evalStatement(node->children[2]);
            }
            break;
        case STATEMENT:
            for(x=0; x < node->children_num; x++){
                if(node->children[x] != NULL){
                    evalStatement(node->children[x]);
                }
            }
            break;
        case WHILE: 
            while(evalExpression(node->children[0])){
                evalStatement(node->children[1]);
            }
            break;
        case ASSIGN:
            if((x = inTable(node->children[0]->id)) >= 0){
                table[x].data = evalExpression(node->children[1]);
            }
            else{
                add(node->children[0]->id, evalExpression(node->children[1]));
            }
            break;

        default:
            printf("Error, %d not a valid node type for a statement.\n", node->type);
            exit(1);
    }
}

        
/*
 * Calls appropriate statement evaluator
 */
void use(struct node* node){
    if(!node) return;
  
    if(node->type == STATEMENT){
		if(node->children[0] != NULL){
			evalStatement(node->children[0]);
		}
		if(node->children[1]!=NULL){
        	evalStatement(node->children[1]);
		}
    }
    else{
        printf("first node in tree is not a statement");
    }
}

/*
 * Main function
 */
int main(int argc, char *argv[]){
    extern FILE *stdin;
    FILE* oldstdin;
    
    oldstdin = stdin;

    stdin = fopen(argv[1], "r");
    yyparse();
    fclose(stdin);
    stdin = oldstdin;
    use(tree);
    return 0;
}
