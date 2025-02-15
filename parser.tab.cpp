/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1





# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LINE_END = 3,                   /* LINE_END  */
  YYSYMBOL_TWO_DOTS = 4,                   /* TWO_DOTS  */
  YYSYMBOL_ROUND_BRACKET_START = 5,        /* ROUND_BRACKET_START  */
  YYSYMBOL_ROUND_BRACKET_END = 6,          /* ROUND_BRACKET_END  */
  YYSYMBOL_SQWAR_BRACKET_START = 7,        /* SQWAR_BRACKET_START  */
  YYSYMBOL_SQWAR_BRACKET_END = 8,          /* SQWAR_BRACKET_END  */
  YYSYMBOL_COMA = 9,                       /* COMA  */
  YYSYMBOL_AMPERSAND = 10,                 /* AMPERSAND  */
  YYSYMBOL_THICK_ARROW = 11,               /* THICK_ARROW  */
  YYSYMBOL_FUNCTION = 12,                  /* FUNCTION  */
  YYSYMBOL_RETURN = 13,                    /* RETURN  */
  YYSYMBOL_IF = 14,                        /* IF  */
  YYSYMBOL_WHILE = 15,                     /* WHILE  */
  YYSYMBOL_VAR = 16,                       /* VAR  */
  YYSYMBOL_ELSE = 17,                      /* ELSE  */
  YYSYMBOL_IMPORT = 18,                    /* IMPORT  */
  YYSYMBOL_FROM = 19,                      /* FROM  */
  YYSYMBOL_AS = 20,                        /* AS  */
  YYSYMBOL_INT = 21,                       /* INT  */
  YYSYMBOL_CHAR = 22,                      /* CHAR  */
  YYSYMBOL_NUM = 23,                       /* NUM  */
  YYSYMBOL_IDENTIFIER = 24,                /* IDENTIFIER  */
  YYSYMBOL_STRING = 25,                    /* STRING  */
  YYSYMBOL_PLUS = 26,                      /* PLUS  */
  YYSYMBOL_SUB = 27,                       /* SUB  */
  YYSYMBOL_DIV = 28,                       /* DIV  */
  YYSYMBOL_STAR = 29,                      /* STAR  */
  YYSYMBOL_MODULO = 30,                    /* MODULO  */
  YYSYMBOL_IS_EQUAL = 31,                  /* IS_EQUAL  */
  YYSYMBOL_ISNT_EQUAL = 32,                /* ISNT_EQUAL  */
  YYSYMBOL_IS_GREATER = 33,                /* IS_GREATER  */
  YYSYMBOL_IS_SMALLER = 34,                /* IS_SMALLER  */
  YYSYMBOL_LOGIC_AND = 35,                 /* LOGIC_AND  */
  YYSYMBOL_LOGIC_OR = 36,                  /* LOGIC_OR  */
  YYSYMBOL_LOGIC_NOT = 37,                 /* LOGIC_NOT  */
  YYSYMBOL_EQUAL = 38,                     /* EQUAL  */
  YYSYMBOL_BIT_OR = 39,                    /* BIT_OR  */
  YYSYMBOL_BIT_XOR = 40,                   /* BIT_XOR  */
  YYSYMBOL_BIT_NOT = 41,                   /* BIT_NOT  */
  YYSYMBOL_POINTER_STUFF = 42,             /* POINTER_STUFF  */
  YYSYMBOL_PL = 43,                        /* PL  */
  YYSYMBOL_DOT = 44,                       /* DOT  */
  YYSYMBOL_ARROW = 45,                     /* ARROW  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_File = 47,                      /* File  */
  YYSYMBOL_FunctionsOpional = 48,          /* FunctionsOpional  */
  YYSYMBOL_Function = 49,                  /* Function  */
  YYSYMBOL_50_1 = 50,                      /* $@1  */
  YYSYMBOL_ParametersOptional = 51,        /* ParametersOptional  */
  YYSYMBOL_Parameters = 52,                /* Parameters  */
  YYSYMBOL_Parameter = 53,                 /* Parameter  */
  YYSYMBOL_ReturnTypeOptional = 54,        /* ReturnTypeOptional  */
  YYSYMBOL_Type = 55,                      /* Type  */
  YYSYMBOL_StatementsOpional = 56,         /* StatementsOpional  */
  YYSYMBOL_Statement = 57,                 /* Statement  */
  YYSYMBOL_DeclearationsOpional = 58,      /* DeclearationsOpional  */
  YYSYMBOL_Declearations = 59,             /* Declearations  */
  YYSYMBOL_Expression = 60,                /* Expression  */
  YYSYMBOL_Expressions = 61,               /* Expressions  */
  YYSYMBOL_ExpressionsOption = 62          /* ExpressionsOption  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   720

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  126

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   300


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      45
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    96,    96,   101,   102,   107,   110,   110,   122,   123,
     126,   127,   130,   133,   134,   137,   138,   139,   140,   141,
     142,   143,   147,   148,   153,   154,   155,   156,   157,   158,
     163,   164,   167,   168,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   213,   214,   217,   218
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "LINE_END", "TWO_DOTS",
  "ROUND_BRACKET_START", "ROUND_BRACKET_END", "SQWAR_BRACKET_START",
  "SQWAR_BRACKET_END", "COMA", "AMPERSAND", "THICK_ARROW", "FUNCTION",
  "RETURN", "IF", "WHILE", "VAR", "ELSE", "IMPORT", "FROM", "AS", "INT",
  "CHAR", "NUM", "IDENTIFIER", "STRING", "PLUS", "SUB", "DIV", "STAR",
  "MODULO", "IS_EQUAL", "ISNT_EQUAL", "IS_GREATER", "IS_SMALLER",
  "LOGIC_AND", "LOGIC_OR", "LOGIC_NOT", "EQUAL", "BIT_OR", "BIT_XOR",
  "BIT_NOT", "POINTER_STUFF", "PL", "DOT", "ARROW", "$accept", "File",
  "FunctionsOpional", "Function", "$@1", "ParametersOptional",
  "Parameters", "Parameter", "ReturnTypeOptional", "Type",
  "StatementsOpional", "Statement", "DeclearationsOpional",
  "Declearations", "Expression", "Expressions", "ExpressionsOption", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-35)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -7,   -17,    -8,     3,   -35,    -7,    17,     6,   -35,   -35,
      -1,     1,   -35,   -35,   -35,    21,    19,   -35,    -5,    31,
      44,    -1,   679,   -35,    49,    -1,    34,    -1,    56,   -35,
     679,   679,   -35,   -35,   -35,   679,   679,   679,   679,   228,
     679,    24,    58,    78,   -35,   264,     5,     5,     5,     5,
       5,   679,   679,   -35,   679,   679,   679,   679,   679,   679,
     679,   679,   679,   679,   679,   679,   679,   679,   679,   679,
     679,   305,   -35,    -7,   658,   -35,   346,   -35,    62,   387,
     582,   116,   116,     5,     5,     5,   595,   595,   625,   625,
     490,   459,   423,   521,   552,   -35,   -35,   -35,   -35,   -35,
     679,   679,   679,    -1,   -35,   658,    60,   679,   -35,   -35,
     103,   145,   187,    47,    59,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,    26,   -35,   679,   423
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     0,     0,     0,     2,     5,     0,     0,     1,     3,
       9,     0,    15,    16,    17,     0,     8,    11,     0,     0,
      14,     0,     0,    12,    20,     0,     0,     0,     0,    10,
       0,     0,    34,    36,    35,     0,     0,     0,     0,     0,
       0,     0,     0,    13,     6,     0,    56,    58,    55,    57,
      54,    65,     0,    18,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     5,    23,    61,    63,    64,     0,     0,
      51,    37,    38,    39,    40,    41,    43,    44,    45,    46,
      49,    50,    42,    52,    53,    47,    48,    21,     4,    24,
       0,     0,     0,    31,     7,    23,     0,     0,    59,    60,
       0,     0,     0,     0,     0,    30,    22,    29,    62,    25,
      26,    27,    32,    28,     0,    33
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -35,   -35,    -4,   -35,   -35,   -35,   -35,    45,   -35,   -21,
     -33,   -35,   -35,   -35,   -22,   -34,   -35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,    74,    15,    16,    17,    28,    18,
     104,   105,   114,   115,    76,    77,    78
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      39,     9,    22,     8,    41,     1,    43,     6,    45,    46,
      51,     2,    52,    47,    48,    49,    50,     7,    71,    23,
      12,    13,    10,    14,    24,    11,    19,    20,    21,    25,
      79,    22,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    69,
      70,    26,   106,    24,    22,    27,    40,    72,    25,    42,
      44,    73,   123,   117,   124,    51,    29,    52,   108,    98,
      54,   122,   116,   118,     0,     0,    24,     0,   110,   111,
     112,    25,   113,   106,     0,    22,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,     0,    66,    67,
      68,     0,   125,     0,    69,    70,   119,    24,    51,     0,
      52,     0,    25,    54,     0,     0,     0,     0,     0,     0,
       0,    51,     0,    52,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       0,    66,    67,    68,    57,    58,    59,    69,    70,   120,
      51,     0,    52,     0,     0,    54,     0,     0,     0,     0,
      69,    70,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,     0,    66,    67,    68,     0,     0,     0,    69,
      70,   121,    51,     0,    52,     0,     0,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,     0,    66,    67,    68,     0,     0,
       0,    69,    70,    51,     0,    52,    53,     0,    54,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,    66,    67,    68,    51,
      75,    52,    69,    70,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,     0,    66,    67,    68,     0,     0,     0,    69,    70,
      51,     0,    52,    97,     0,    54,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,     0,    66,    67,    68,     0,     0,     0,    69,
      70,    51,     0,    52,     0,   107,    54,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,     0,    66,    67,    68,     0,     0,     0,
      69,    70,    51,     0,    52,   109,     0,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,     0,    66,    67,    68,    51,     0,
      52,    69,    70,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       0,    66,    67,    68,    51,     0,    52,    69,    70,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    51,     0,    52,    67,    68,
      54,     0,     0,    69,    70,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    55,    56,    57,    58,
      59,    60,    61,    62,    63,     0,    51,     0,    52,    67,
      68,    54,     0,     0,    69,    70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,    56,    57,
      58,    59,    60,    61,    62,    63,     0,    51,     0,    52,
       0,    68,    54,     0,     0,    69,    70,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    51,     0,    52,
       0,     0,     0,     0,     0,     0,    69,    70,     0,     0,
      51,     0,    52,     0,     0,     0,     0,     0,    55,    56,
      57,    58,    59,    60,    61,    62,    63,     0,     0,     0,
       0,    55,    56,    57,    58,    59,    69,    70,    62,    63,
      51,     0,    52,     0,     0,     0,     0,     0,     0,    69,
      70,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,    56,    57,    58,    59,     0,     0,     0,     0,
       0,    99,     0,    30,     0,     0,     0,     0,    31,    69,
      70,   100,   101,   102,   103,     0,     0,     0,     0,     0,
       0,    32,    33,    34,    30,    35,     0,    36,     0,    31,
       0,     0,     0,     0,     0,    37,     0,     0,     0,    38,
       0,     0,    32,    33,    34,     0,    35,     0,    36,     0,
       0,     0,     0,     0,     0,     0,    37,     0,     0,     0,
      38
};

static const yytype_int8 yycheck[] =
{
      22,     5,     7,     0,    25,    12,    27,    24,    30,    31,
       5,    18,     7,    35,    36,    37,    38,    25,    40,    24,
      21,    22,     5,    24,    29,    19,    25,     6,     9,    34,
      52,     7,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    44,
      45,    20,    74,    29,     7,    11,     7,    33,    34,    25,
       4,     3,     3,     3,    38,     5,    21,     7,     6,    73,
      10,    24,   105,   107,    -1,    -1,    29,    -1,   100,   101,
     102,    34,   103,   105,    -1,     7,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    -1,   124,    -1,    44,    45,     3,    29,     5,    -1,
       7,    -1,    34,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    38,    39,    40,    28,    29,    30,    44,    45,     4,
       5,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    38,    39,    40,    -1,    -1,    -1,    44,
      45,     4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    38,    39,    40,    -1,    -1,
      -1,    44,    45,     5,    -1,     7,     8,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    40,     5,
       6,     7,    44,    45,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    39,    40,    -1,    -1,    -1,    44,    45,
       5,    -1,     7,     8,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    38,    39,    40,    -1,    -1,    -1,    44,
      45,     5,    -1,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    -1,    -1,    -1,
      44,    45,     5,    -1,     7,     8,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    38,    39,    40,     5,    -1,
       7,    44,    45,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    38,    39,    40,     5,    -1,     7,    44,    45,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,     5,    -1,     7,    39,    40,
      10,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,     5,    -1,     7,    39,
      40,    10,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,     5,    -1,     7,
      -1,    40,    10,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     5,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,
       5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    44,    45,    33,    34,
       5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,     3,    -1,     5,    -1,    -1,    -1,    -1,    10,    44,
      45,    13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,     5,    27,    -1,    29,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,
      -1,    -1,    23,    24,    25,    -1,    27,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      41
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    12,    18,    47,    48,    49,    24,    25,     0,    48,
       5,    19,    21,    22,    24,    51,    52,    53,    55,    25,
       6,     9,     7,    24,    29,    34,    20,    11,    54,    53,
       5,    10,    23,    24,    25,    27,    29,    37,    41,    60,
       7,    55,    25,    55,     4,    60,    60,    60,    60,    60,
      60,     5,     7,     8,    10,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    38,    39,    40,    44,
      45,    60,    33,     3,    50,     6,    60,    61,    62,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,     8,    48,     3,
      13,    14,    15,    16,    56,    57,    60,     9,     6,     8,
      60,    60,    60,    55,    58,    59,    56,     3,    61,     3,
       4,     4,    24,     3,    38,    60
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    48,    48,    50,    49,    51,    51,
      52,    52,    53,    54,    54,    55,    55,    55,    55,    55,
      55,    55,    56,    56,    57,    57,    57,    57,    57,    57,
      58,    58,    59,    59,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    61,    61,    62,    62
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     8,     0,     0,     9,     1,     0,
       3,     1,     2,     2,     0,     1,     1,     1,     4,     4,
       2,     5,     2,     0,     1,     3,     3,     3,     3,     2,
       1,     0,     2,     4,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     2,     4,
       4,     3,     3,     1,     1,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* File: FunctionsOpional  */
#line 96 "src/parser.y"
                       {
	lib->Functions = (yyvsp[0].Func_Pointer_list) ;
}
#line 1321 "parser.tab.cpp"
    break;

  case 3: /* FunctionsOpional: Function FunctionsOpional  */
#line 101 "src/parser.y"
                                                                                { (yyvsp[0].Func_Pointer_list)->push_front((yyvsp[-1].Func_Pointer)); (yyval.Func_Pointer_list) = (yyvsp[0].Func_Pointer_list); }
#line 1327 "parser.tab.cpp"
    break;

  case 4: /* FunctionsOpional: IMPORT STRING FROM STRING AS STRING LINE_END FunctionsOpional  */
#line 102 "src/parser.y"
                                                                                                {
	Global_Dependencies->push_back(new Dependency((yyvsp[-4].String),(yyvsp[-6].String)));
	Symbol_Tables->DependencySymbols->push_back(new DependencySymbol(Global_Dependencies->size()-1,(yyvsp[-2].String)));
	(yyval.Func_Pointer_list) = (yyvsp[0].Func_Pointer_list);
}
#line 1337 "parser.tab.cpp"
    break;

  case 5: /* FunctionsOpional: %empty  */
#line 107 "src/parser.y"
                                                                                        { (yyval.Func_Pointer_list) = new std::list<Function*> ; }
#line 1343 "parser.tab.cpp"
    break;

  case 6: /* $@1: %empty  */
#line 110 "src/parser.y"
                                                                                                                   {
	Temperory_Function_Pointer = new Function((yyvsp[-5].String),(yyvsp[-1].Type_Pointer),new CompoundStatement(new std::list<Statement*>),(yyvsp[-3].Smbl_Pointer_List));
	Scopes->Push(Temperory_Function_Pointer->MainStatement,0);
}
#line 1352 "parser.tab.cpp"
    break;

  case 7: /* Function: FUNCTION IDENTIFIER ROUND_BRACKET_START ParametersOptional ROUND_BRACKET_END ReturnTypeOptional TWO_DOTS $@1 StatementsOpional  */
#line 113 "src/parser.y"
                   {
	/*the last statement doesn't get collabs*/
	(yyval.Func_Pointer) = Temperory_Function_Pointer; 
	Scopes->flat(1);
	delete Scopes;
	Scopes = new ScopeStack();
}
#line 1364 "parser.tab.cpp"
    break;

  case 8: /* ParametersOptional: Parameters  */
#line 122 "src/parser.y"
                               { (yyval.Smbl_Pointer_List) = (yyvsp[0].Smbl_Pointer_List); }
#line 1370 "parser.tab.cpp"
    break;

  case 9: /* ParametersOptional: %empty  */
#line 123 "src/parser.y"
                           { (yyval.Smbl_Pointer_List) = new std::list<Symbol*>; }
#line 1376 "parser.tab.cpp"
    break;

  case 10: /* Parameters: Parameters COMA Parameter  */
#line 126 "src/parser.y"
                                      { (yyvsp[-2].Smbl_Pointer_List)->push_back((yyvsp[0].Smbl_Pointer)); (yyval.Smbl_Pointer_List) = (yyvsp[-2].Smbl_Pointer_List); }
#line 1382 "parser.tab.cpp"
    break;

  case 11: /* Parameters: Parameter  */
#line 127 "src/parser.y"
                                  { (yyval.Smbl_Pointer_List) = new std::list<Symbol*>; (yyval.Smbl_Pointer_List)->push_back((yyvsp[0].Smbl_Pointer)); }
#line 1388 "parser.tab.cpp"
    break;

  case 12: /* Parameter: Type IDENTIFIER  */
#line 130 "src/parser.y"
                           { (yyval.Smbl_Pointer) = new Symbol((yyvsp[0].String),(yyvsp[-1].Type_Pointer));}
#line 1394 "parser.tab.cpp"
    break;

  case 13: /* ReturnTypeOptional: THICK_ARROW Type  */
#line 133 "src/parser.y"
                                     { (yyval.Type_Pointer) = (yyvsp[0].Type_Pointer) ; }
#line 1400 "parser.tab.cpp"
    break;

  case 14: /* ReturnTypeOptional: %empty  */
#line 134 "src/parser.y"
                                     { (yyval.Type_Pointer) = new VarType();}
#line 1406 "parser.tab.cpp"
    break;

  case 15: /* Type: INT  */
#line 137 "src/parser.y"
                                                                       { (yyval.Type_Pointer) = new IntType(); }
#line 1412 "parser.tab.cpp"
    break;

  case 16: /* Type: CHAR  */
#line 138 "src/parser.y"
                                                                                                                                   { (yyval.Type_Pointer) = new CharType(); }
#line 1418 "parser.tab.cpp"
    break;

  case 17: /* Type: IDENTIFIER  */
#line 139 "src/parser.y"
                                                                       { (yyval.Type_Pointer) = new VarType(); }
#line 1424 "parser.tab.cpp"
    break;

  case 18: /* Type: Type SQWAR_BRACKET_START Expression SQWAR_BRACKET_END  */
#line 140 "src/parser.y"
                                                                       { (yyval.Type_Pointer) = new VarType(); }
#line 1430 "parser.tab.cpp"
    break;

  case 19: /* Type: Type IS_SMALLER Type IS_GREATER  */
#line 141 "src/parser.y"
                                                                       { (yyval.Type_Pointer) = new VarType(); }
#line 1436 "parser.tab.cpp"
    break;

  case 20: /* Type: Type STAR  */
#line 142 "src/parser.y"
                                                                       { (yyval.Type_Pointer) = new VarType(); }
#line 1442 "parser.tab.cpp"
    break;

  case 21: /* Type: Type STAR SQWAR_BRACKET_START Expression SQWAR_BRACKET_END  */
#line 143 "src/parser.y"
                                                                       { (yyval.Type_Pointer) = new VarType(); }
#line 1448 "parser.tab.cpp"
    break;

  case 24: /* Statement: LINE_END  */
#line 153 "src/parser.y"
                                                   { Scopes->Push(new EmptyStatement(),Tab_Num); }
#line 1454 "parser.tab.cpp"
    break;

  case 25: /* Statement: RETURN Expression LINE_END  */
#line 154 "src/parser.y"
                                                           { Scopes->Push(new ReturnStatement((yyvsp[-1].Expr_Pointer)),Tab_Num); }
#line 1460 "parser.tab.cpp"
    break;

  case 26: /* Statement: IF Expression TWO_DOTS  */
#line 155 "src/parser.y"
                                                           { Scopes->Push(new IfStatement(new std::list<Statement*>,(yyvsp[-1].Expr_Pointer)),Tab_Num); }
#line 1466 "parser.tab.cpp"
    break;

  case 27: /* Statement: WHILE Expression TWO_DOTS  */
#line 156 "src/parser.y"
                                                           { Scopes->Push(new WhileStatement(new std::list<Statement*>,(yyvsp[-1].Expr_Pointer)),Tab_Num); }
#line 1472 "parser.tab.cpp"
    break;

  case 28: /* Statement: VAR DeclearationsOpional LINE_END  */
#line 157 "src/parser.y"
                                                   {  }
#line 1478 "parser.tab.cpp"
    break;

  case 29: /* Statement: Expression LINE_END  */
#line 158 "src/parser.y"
                                                           { Scopes->Push(new ExpressionBasedStatement((yyvsp[-1].Expr_Pointer)),Tab_Num); }
#line 1484 "parser.tab.cpp"
    break;

  case 32: /* Declearations: Type IDENTIFIER  */
#line 167 "src/parser.y"
                                                 { Scopes->Push(new VarDefineStatement((yyvsp[-1].Type_Pointer),(yyvsp[0].String)),Tab_Num); }
#line 1490 "parser.tab.cpp"
    break;

  case 33: /* Declearations: Type IDENTIFIER EQUAL Expression  */
#line 168 "src/parser.y"
                                                                 {
	Scopes->Push(new VarDefineStatement((yyvsp[-3].Type_Pointer),(yyvsp[-2].String)),Tab_Num);
	Scopes->Push(
		new ExpressionBasedStatement(
			new BinaryExpression(
				new IdentifierExpression((yyvsp[-2].String)),
				(yyvsp[0].Expr_Pointer),
				BinaryExpression::Type::Moving)
			),
		Tab_Num
	);
	
}
#line 1508 "parser.tab.cpp"
    break;

  case 34: /* Expression: NUM  */
#line 183 "src/parser.y"
                                             { (yyval.Expr_Pointer) = new NumberExpression( (yyvsp[0].Integer) ); }
#line 1514 "parser.tab.cpp"
    break;

  case 35: /* Expression: STRING  */
#line 184 "src/parser.y"
                                                         { (yyval.Expr_Pointer) = new StringExpression( (yyvsp[0].String) ); }
#line 1520 "parser.tab.cpp"
    break;

  case 36: /* Expression: IDENTIFIER  */
#line 185 "src/parser.y"
                                                         { (yyval.Expr_Pointer) = new IdentifierExpression(  (yyvsp[0].String) );}
#line 1526 "parser.tab.cpp"
    break;

  case 37: /* Expression: Expression PLUS Expression  */
#line 186 "src/parser.y"
                                             { (yyval.Expr_Pointer) = new BinaryExpression( (yyvsp[-2].Expr_Pointer) , (yyvsp[0].Expr_Pointer) ,BinaryExpression::Type::Addition);}
#line 1532 "parser.tab.cpp"
    break;

  case 38: /* Expression: Expression SUB Expression  */
#line 187 "src/parser.y"
                                                         { (yyval.Expr_Pointer) = new BinaryExpression( (yyvsp[-2].Expr_Pointer) , (yyvsp[0].Expr_Pointer) ,BinaryExpression::Type::Subtraction);}
#line 1538 "parser.tab.cpp"
    break;

  case 39: /* Expression: Expression DIV Expression  */
#line 188 "src/parser.y"
                                                         { (yyval.Expr_Pointer) = new BinaryExpression( (yyvsp[-2].Expr_Pointer) , (yyvsp[0].Expr_Pointer) ,BinaryExpression::Type::Divition);}
#line 1544 "parser.tab.cpp"
    break;

  case 40: /* Expression: Expression STAR Expression  */
#line 189 "src/parser.y"
                                                         { (yyval.Expr_Pointer) = new BinaryExpression( (yyvsp[-2].Expr_Pointer) , (yyvsp[0].Expr_Pointer) ,BinaryExpression::Type::Multipication);}
#line 1550 "parser.tab.cpp"
    break;

  case 41: /* Expression: Expression MODULO Expression  */
#line 190 "src/parser.y"
                                                         { (yyval.Expr_Pointer) = new BinaryExpression( (yyvsp[-2].Expr_Pointer) , (yyvsp[0].Expr_Pointer) ,BinaryExpression::Type::Remanider);}
#line 1556 "parser.tab.cpp"
    break;

  case 42: /* Expression: Expression EQUAL Expression  */
#line 191 "src/parser.y"
                                                         { (yyval.Expr_Pointer) = new BinaryExpression( (yyvsp[-2].Expr_Pointer) , (yyvsp[0].Expr_Pointer) ,BinaryExpression::Type::Moving);}
#line 1562 "parser.tab.cpp"
    break;

  case 43: /* Expression: Expression IS_EQUAL Expression  */
#line 192 "src/parser.y"
                                                         { (yyval.Expr_Pointer) = new BinaryExpression( (yyvsp[-2].Expr_Pointer) , (yyvsp[0].Expr_Pointer) ,BinaryExpression::Type::Comparation);}
#line 1568 "parser.tab.cpp"
    break;

  case 44: /* Expression: Expression ISNT_EQUAL Expression  */
#line 193 "src/parser.y"
                                             { (yyval.Expr_Pointer) = new BinaryExpression( new BinaryExpression((yyvsp[-2].Expr_Pointer),(yyvsp[0].Expr_Pointer),BinaryExpression::Type::Comparation),new NumberExpression(0),BinaryExpression::Type::Comparation);}
#line 1574 "parser.tab.cpp"
    break;

  case 45: /* Expression: Expression IS_GREATER Expression  */
#line 194 "src/parser.y"
                                                         { (yyval.Expr_Pointer) = new BinaryExpression( (yyvsp[-2].Expr_Pointer) , (yyvsp[0].Expr_Pointer) ,BinaryExpression::Type::BiggerThanComparation);}
#line 1580 "parser.tab.cpp"
    break;

  case 46: /* Expression: Expression IS_SMALLER Expression  */
#line 195 "src/parser.y"
                                                         { (yyval.Expr_Pointer) = new BinaryExpression( (yyvsp[0].Expr_Pointer) , (yyvsp[-2].Expr_Pointer) ,BinaryExpression::Type::BiggerThanComparation);}
#line 1586 "parser.tab.cpp"
    break;

  case 47: /* Expression: Expression DOT Expression  */
#line 196 "src/parser.y"
                                             { (yyval.Expr_Pointer) = new BinaryExpression( (yyvsp[-2].Expr_Pointer) , (yyvsp[0].Expr_Pointer) ,BinaryExpression::Type::MemberAccess);}
#line 1592 "parser.tab.cpp"
    break;

  case 48: /* Expression: Expression ARROW Expression  */
#line 197 "src/parser.y"
                                             { (yyval.Expr_Pointer) = new BinaryExpression( (yyvsp[-2].Expr_Pointer) , (yyvsp[0].Expr_Pointer) ,BinaryExpression::Type::PointerMemberAccess);}
#line 1598 "parser.tab.cpp"
    break;

  case 49: /* Expression: Expression LOGIC_AND Expression  */
#line 198 "src/parser.y"
                                                         { (yyval.Expr_Pointer) = new BinaryExpression( (yyvsp[-2].Expr_Pointer) , (yyvsp[0].Expr_Pointer) ,BinaryExpression::Type::BitwizeAnd);}
#line 1604 "parser.tab.cpp"
    break;

  case 50: /* Expression: Expression LOGIC_OR Expression  */
#line 199 "src/parser.y"
                                                         { (yyval.Expr_Pointer) = new BinaryExpression( (yyvsp[-2].Expr_Pointer) , (yyvsp[0].Expr_Pointer) ,BinaryExpression::Type::BitwizeOr);}
#line 1610 "parser.tab.cpp"
    break;

  case 51: /* Expression: Expression AMPERSAND Expression  */
#line 200 "src/parser.y"
                                                         { (yyval.Expr_Pointer) = new BinaryExpression( (yyvsp[-2].Expr_Pointer) , (yyvsp[0].Expr_Pointer) ,BinaryExpression::Type::BitwizeAnd);}
#line 1616 "parser.tab.cpp"
    break;

  case 52: /* Expression: Expression BIT_OR Expression  */
#line 201 "src/parser.y"
                                                         { (yyval.Expr_Pointer) = new BinaryExpression( (yyvsp[-2].Expr_Pointer) , (yyvsp[0].Expr_Pointer) ,BinaryExpression::Type::BitwizeOr);}
#line 1622 "parser.tab.cpp"
    break;

  case 53: /* Expression: Expression BIT_XOR Expression  */
#line 202 "src/parser.y"
                                                         { (yyval.Expr_Pointer) = new BinaryExpression( (yyvsp[-2].Expr_Pointer) , (yyvsp[0].Expr_Pointer) ,BinaryExpression::Type::BitwizeXor);}
#line 1628 "parser.tab.cpp"
    break;

  case 54: /* Expression: BIT_NOT Expression  */
#line 203 "src/parser.y"
                                                         { (yyval.Expr_Pointer) = new UnaryExpression ( (yyvsp[0].Expr_Pointer) , UnaryExpression::Type::BitwizeNot);}
#line 1634 "parser.tab.cpp"
    break;

  case 55: /* Expression: STAR Expression  */
#line 204 "src/parser.y"
                                             { (yyval.Expr_Pointer) = new UnaryExpression ( (yyvsp[0].Expr_Pointer) , UnaryExpression::Type::Derefrence);}
#line 1640 "parser.tab.cpp"
    break;

  case 56: /* Expression: AMPERSAND Expression  */
#line 205 "src/parser.y"
                                             { (yyval.Expr_Pointer) = new UnaryExpression ( (yyvsp[0].Expr_Pointer) , UnaryExpression::Type::Refrence);}
#line 1646 "parser.tab.cpp"
    break;

  case 57: /* Expression: LOGIC_NOT Expression  */
#line 206 "src/parser.y"
                                                         { (yyval.Expr_Pointer) = new UnaryExpression ( (yyvsp[0].Expr_Pointer) , UnaryExpression::Type::LogicalNot);}
#line 1652 "parser.tab.cpp"
    break;

  case 58: /* Expression: SUB Expression  */
#line 207 "src/parser.y"
                                                         { (yyval.Expr_Pointer) = new UnaryExpression ( (yyvsp[0].Expr_Pointer) , UnaryExpression::Type::Negativity);}
#line 1658 "parser.tab.cpp"
    break;

  case 59: /* Expression: Expression ROUND_BRACKET_START ExpressionsOption ROUND_BRACKET_END  */
#line 208 "src/parser.y"
                                                                                                     { (yyval.Expr_Pointer) = new FunctionCallExpression((yyvsp[-3].Expr_Pointer),(yyvsp[-1].Expr_Pointer_List));}
#line 1664 "parser.tab.cpp"
    break;

  case 60: /* Expression: Expression SQWAR_BRACKET_START Expression SQWAR_BRACKET_END  */
#line 209 "src/parser.y"
                                                                                                     { (yyval.Expr_Pointer) = new ArrayAccessExpression((yyvsp[-3].Expr_Pointer),(yyvsp[-1].Expr_Pointer));}
#line 1670 "parser.tab.cpp"
    break;

  case 61: /* Expression: ROUND_BRACKET_START Expression ROUND_BRACKET_END  */
#line 210 "src/parser.y"
                                                                                         { (yyval.Expr_Pointer) = (yyvsp[-1].Expr_Pointer) ;}
#line 1676 "parser.tab.cpp"
    break;

  case 62: /* Expressions: Expression COMA Expressions  */
#line 213 "src/parser.y"
                                         { (yyvsp[0].Expr_Pointer_List)->push_front((yyvsp[-2].Expr_Pointer)); (yyval.Expr_Pointer_List) = (yyvsp[0].Expr_Pointer_List);}
#line 1682 "parser.tab.cpp"
    break;

  case 63: /* Expressions: Expression  */
#line 214 "src/parser.y"
                                                     { (yyval.Expr_Pointer_List) = new std::list<Expression*>; (yyval.Expr_Pointer_List)->push_front((yyvsp[0].Expr_Pointer)); }
#line 1688 "parser.tab.cpp"
    break;

  case 64: /* ExpressionsOption: Expressions  */
#line 217 "src/parser.y"
                               { (yyval.Expr_Pointer_List) = (yyvsp[0].Expr_Pointer_List) ;}
#line 1694 "parser.tab.cpp"
    break;

  case 65: /* ExpressionsOption: %empty  */
#line 218 "src/parser.y"
                               { (yyval.Expr_Pointer_List) = new std::list<Expression*>;}
#line 1700 "parser.tab.cpp"
    break;


#line 1704 "parser.tab.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 220 "src/parser.y"

