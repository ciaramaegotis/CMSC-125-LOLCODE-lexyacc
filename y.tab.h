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
    IDENTIFIER = 265,
    OF = 266,
    AN = 267,
    HAI = 268,
    KTHXBYE = 269,
    HAS = 270,
    A = 271,
    ITZ = 272,
    SUM = 273,
    DIFF = 274,
    QUOSHUNT = 275,
    PRODUKT = 276,
    MOD = 277,
    SMALLR = 278,
    BIGGR = 279,
    R = 280,
    SMOOSH = 281,
    VISIBLE = 282,
    BOTH = 283,
    EITHER = 284,
    NOT = 285,
    WON = 286,
    ANY = 287,
    ALL = 288,
    SAEM = 289,
    DIFFRINT = 290,
    MAEK = 291,
    IS = 292,
    NOW = 293,
    GIMMEH = 294,
    O = 295,
    RLY = 296,
    YA = 297,
    OMG = 298,
    OMGWTF = 299,
    MEBBE = 300,
    NO = 301,
    WAI = 302,
    OIC = 303,
    WILE = 304,
    TIL = 305,
    UPPIN = 306,
    NERFIN = 307,
    WTF = 308,
    IM = 309,
    IN = 310,
    YR = 311,
    RLY_Q = 312,
    WTF_Q = 313,
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
#define IDENTIFIER 265
#define OF 266
#define AN 267
#define HAI 268
#define KTHXBYE 269
#define HAS 270
#define A 271
#define ITZ 272
#define SUM 273
#define DIFF 274
#define QUOSHUNT 275
#define PRODUKT 276
#define MOD 277
#define SMALLR 278
#define BIGGR 279
#define R 280
#define SMOOSH 281
#define VISIBLE 282
#define BOTH 283
#define EITHER 284
#define NOT 285
#define WON 286
#define ANY 287
#define ALL 288
#define SAEM 289
#define DIFFRINT 290
#define MAEK 291
#define IS 292
#define NOW 293
#define GIMMEH 294
#define O 295
#define RLY 296
#define YA 297
#define OMG 298
#define OMGWTF 299
#define MEBBE 300
#define NO 301
#define WAI 302
#define OIC 303
#define WILE 304
#define TIL 305
#define UPPIN 306
#define NERFIN 307
#define WTF 308
#define IM 309
#define IN 310
#define YR 311
#define RLY_Q 312
#define WTF_Q 313
#define UMINUS 314

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
