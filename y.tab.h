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
    IDENTIFIER = 308,
    NUMBR = 309,
    NUMBAR = 310,
    YARN_LITERAL = 311,
    TROOF_LITERAL = 312,
    TYPE_LITERAL = 313,
    UMINUS = 314
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
#define IDENTIFIER 308
#define NUMBR 309
#define NUMBAR 310
#define YARN_LITERAL 311
#define TROOF_LITERAL 312
#define TYPE_LITERAL 313
#define UMINUS 314

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "parser.y" /* yacc.c:1909  */

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
