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
    markazi = 258,
    se = 259,
    chalo = 260,
    jabtak = 261,
    agar = 262,
    agarwarna = 263,
    warna = 264,
    likho = 265,
    hindsa = 266,
    chindsa = 267,
    bhindsa = 268,
    jumla = 269,
    booliyayi = 270,
    aasharia = 271,
    khaali = 272,
    sahih = 273,
    ghalat = 274,
    stringliteral = 275,
    identifier = 276,
    decimal = 277,
    integer = 278,
    comma = 279,
    semicolon = 280,
    LRP = 281,
    RRP = 282,
    LCP = 283,
    RCP = 284,
    INO = 285,
    DCO = 286,
    MUL = 287,
    DIV = 288,
    MOD = 289,
    PLS = 290,
    MIS = 291,
    LT = 292,
    LTE = 293,
    GT = 294,
    GTE = 295,
    IEQ = 296,
    NEQ = 297,
    NOT = 298,
    AND = 299,
    OR = 300,
    EA = 301,
    AA = 302,
    SA = 303,
    MA = 304,
    DA = 305
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
#define chindsa 267
#define bhindsa 268
#define jumla 269
#define booliyayi 270
#define aasharia 271
#define khaali 272
#define sahih 273
#define ghalat 274
#define stringliteral 275
#define identifier 276
#define decimal 277
#define integer 278
#define comma 279
#define semicolon 280
#define LRP 281
#define RRP 282
#define LCP 283
#define RCP 284
#define INO 285
#define DCO 286
#define MUL 287
#define DIV 288
#define MOD 289
#define PLS 290
#define MIS 291
#define LT 292
#define LTE 293
#define GT 294
#define GTE 295
#define IEQ 296
#define NEQ 297
#define NOT 298
#define AND 299
#define OR 300
#define EA 301
#define AA 302
#define SA 303
#define MA 304
#define DA 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
