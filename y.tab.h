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
    NUMBR = 262,
    NUMBAR = 263,
    YARN_LITERAL = 264,
    OF = 265,
    AN = 266,
    HAI = 267,
    KTHXBYE = 268,
    HAS = 269,
    A = 270,
    ITZ = 271,
    SUM = 272,
    DIFF = 273,
    QUOSHUNT = 274,
    PRODUKT = 275,
    MOD = 276,
    SMALLR = 277,
    BIGGR = 278,
    R = 279,
    SMOOSH = 280,
    VISIBLE = 281,
    BOTH = 282,
    EITHER = 283,
    NOT = 284,
    WON = 285,
    ANY = 286,
    ALL = 287,
    SAEM = 288,
    DIFFRINT = 289,
    MAEK = 290,
    IS = 291,
    NOW = 292,
    GIMMEH = 293,
    O = 294,
    RLY = 295,
    YA = 296,
    OMG = 297,
    OMGWTF = 298,
    MEBBE = 299,
    NO = 300,
    WAI = 301,
    OIC = 302,
    WILE = 303,
    TIL = 304,
    UPPIN = 305,
    NERFIN = 306,
    WTF = 307,
    IM = 308,
    IN = 309,
    YR = 310,
    RLY_Q = 311,
    WTF_Q = 312,
    IDENTIFIER = 313,
    UMINUS = 314
  };
#endif
/* Tokens.  */
#define I 258
#define TROOF_LITERAL 259
#define OUTTA 260
#define TYPE_LITERAL 261
#define NUMBR 262
#define NUMBAR 263
#define YARN_LITERAL 264
#define OF 265
#define AN 266
#define HAI 267
#define KTHXBYE 268
#define HAS 269
#define A 270
#define ITZ 271
#define SUM 272
#define DIFF 273
#define QUOSHUNT 274
#define PRODUKT 275
#define MOD 276
#define SMALLR 277
#define BIGGR 278
#define R 279
#define SMOOSH 280
#define VISIBLE 281
#define BOTH 282
#define EITHER 283
#define NOT 284
#define WON 285
#define ANY 286
#define ALL 287
#define SAEM 288
#define DIFFRINT 289
#define MAEK 290
#define IS 291
#define NOW 292
#define GIMMEH 293
#define O 294
#define RLY 295
#define YA 296
#define OMG 297
#define OMGWTF 298
#define MEBBE 299
#define NO 300
#define WAI 301
#define OIC 302
#define WILE 303
#define TIL 304
#define UPPIN 305
#define NERFIN 306
#define WTF 307
#define IM 308
#define IN 309
#define YR 310
#define RLY_Q 311
#define WTF_Q 312
#define IDENTIFIER 313
#define UMINUS 314

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 9 "parser.y" /* yacc.c:1909  */

  int integer;
  char * string;

#line 177 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
