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
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
