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
    OUTTA = 259,
    TYPE_LITERAL = 260,
    OF = 261,
    AN = 262,
    HAI = 263,
    KTHXBYE = 264,
    HAS = 265,
    A = 266,
    ITZ = 267,
    SUM = 268,
    DIFF = 269,
    QUOSHUNT = 270,
    PRODUKT = 271,
    MOD = 272,
    SMALLR = 273,
    BIGGR = 274,
    R = 275,
    SMOOSH = 276,
    VISIBLE = 277,
    BOTH = 278,
    EITHER = 279,
    NOT = 280,
    WON = 281,
    ANY = 282,
    ALL = 283,
    SAEM = 284,
    DIFFRINT = 285,
    MAEK = 286,
    IS = 287,
    NOW = 288,
    GIMMEH = 289,
    O = 290,
    RLY = 291,
    YA = 292,
    OMG = 293,
    OMGWTF = 294,
    MEBBE = 295,
    NO = 296,
    WAI = 297,
    OIC = 298,
    WILE = 299,
    TIL = 300,
    UPPIN = 301,
    NERFIN = 302,
    WTF = 303,
    IM = 304,
    IN = 305,
    YR = 306,
    RLY_Q = 307,
    WTF_Q = 308,
    IDENTIFIER = 309,
    NUMBR = 310,
    NUMBAR = 311,
    YARN_LITERAL = 312,
    TROOF_LITERAL = 313,
    UMINUS = 314
  };
#endif
/* Tokens.  */
#define I 258
#define OUTTA 259
#define TYPE_LITERAL 260
#define OF 261
#define AN 262
#define HAI 263
#define KTHXBYE 264
#define HAS 265
#define A 266
#define ITZ 267
#define SUM 268
#define DIFF 269
#define QUOSHUNT 270
#define PRODUKT 271
#define MOD 272
#define SMALLR 273
#define BIGGR 274
#define R 275
#define SMOOSH 276
#define VISIBLE 277
#define BOTH 278
#define EITHER 279
#define NOT 280
#define WON 281
#define ANY 282
#define ALL 283
#define SAEM 284
#define DIFFRINT 285
#define MAEK 286
#define IS 287
#define NOW 288
#define GIMMEH 289
#define O 290
#define RLY 291
#define YA 292
#define OMG 293
#define OMGWTF 294
#define MEBBE 295
#define NO 296
#define WAI 297
#define OIC 298
#define WILE 299
#define TIL 300
#define UPPIN 301
#define NERFIN 302
#define WTF 303
#define IM 304
#define IN 305
#define YR 306
#define RLY_Q 307
#define WTF_Q 308
#define IDENTIFIER 309
#define NUMBR 310
#define NUMBAR 311
#define YARN_LITERAL 312
#define TROOF_LITERAL 313
#define UMINUS 314

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 13 "parser.y" /* yacc.c:1909  */

  int number;
  char *string;
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
