/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
    TROOF_LITERAL = 259,
    OUTTA = 260,
    TYPE_LITERAL = 261,
    OF = 262,
    AN = 263,
    HAI = 264,
    KTHXBYE = 265,
    HAS = 266,
    A = 267,
    ITZ = 268,
    SUM = 269,
    DIFF = 270,
    QUOSHUNT = 271,
    PRODUKT = 272,
    MOD = 273,
    SMALLR = 274,
    BIGGR = 275,
    R = 276,
    SMOOSH = 277,
    VISIBLE = 278,
    BOTH = 279,
    EITHER = 280,
    NOT = 281,
    WON = 282,
    ANY = 283,
    ALL = 284,
    SAEM = 285,
    DIFFRINT = 286,
    MAEK = 287,
    IS = 288,
    NOW = 289,
    GIMMEH = 290,
    O = 291,
    RLY = 292,
    YA = 293,
    OMG = 294,
    OMGWTF = 295,
    MEBBE = 296,
    NO = 297,
    WAI = 298,
    OIC = 299,
    WILE = 300,
    TIL = 301,
    UPPIN = 302,
    NERFIN = 303,
    WTF = 304,
    IM = 305,
    IN = 306,
    YR = 307,
    RLY_Q = 308,
    WTF_Q = 309,
    IDENTIFIER = 310,
    NUMBR = 311,
    NUMBAR = 312,
    YARN_LITERAL = 313,
    UMINUS = 314
  };
#endif
/* Tokens.  */
#define I 258
#define TROOF_LITERAL 259
#define OUTTA 260
#define TYPE_LITERAL 261
#define OF 262
#define AN 263
#define HAI 264
#define KTHXBYE 265
#define HAS 266
#define A 267
#define ITZ 268
#define SUM 269
#define DIFF 270
#define QUOSHUNT 271
#define PRODUKT 272
#define MOD 273
#define SMALLR 274
#define BIGGR 275
#define R 276
#define SMOOSH 277
#define VISIBLE 278
#define BOTH 279
#define EITHER 280
#define NOT 281
#define WON 282
#define ANY 283
#define ALL 284
#define SAEM 285
#define DIFFRINT 286
#define MAEK 287
#define IS 288
#define NOW 289
#define GIMMEH 290
#define O 291
#define RLY 292
#define YA 293
#define OMG 294
#define OMGWTF 295
#define MEBBE 296
#define NO 297
#define WAI 298
#define OIC 299
#define WILE 300
#define TIL 301
#define UPPIN 302
#define NERFIN 303
#define WTF 304
#define IM 305
#define IN 306
#define YR 307
#define RLY_Q 308
#define WTF_Q 309
#define IDENTIFIER 310
#define NUMBR 311
#define NUMBAR 312
#define YARN_LITERAL 313
#define UMINUS 314

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "parser.y" /* yacc.c:1909  */

  int number;
  char * string;
  float floatnum;

#line 178 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
