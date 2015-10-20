/* ex: set ro ft=c: -*- buffer-read-only:t -*-
 * !!!!!!!   DO NOT EDIT THIS FILE   !!!!!!!
 *
 * This file is generated automatically from 'compilers/imcc/imcc.y'
 * by tools/build/fixup_gen_file.pl.
 *
 * Any changes made here will be lost!
 *
 */
/* HEADERIZER HFILE: none */
/* HEADERIZER STOP */
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

#ifndef YY_YY_COMPILERS_IMCC_IMCPARSER_H_INCLUDED
# define YY_YY_COMPILERS_IMCC_IMCPARSER_H_INCLUDED
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
    LOW_PREC = 258,
    PARAM = 259,
    SOL = 260,
    HLL = 261,
    GOTO = 262,
    ARG = 263,
    IF = 264,
    UNLESS = 265,
    PNULL = 266,
    SET_RETURN = 267,
    SET_YIELD = 268,
    ADV_FLAT = 269,
    ADV_SLURPY = 270,
    ADV_OPTIONAL = 271,
    ADV_OPT_FLAG = 272,
    ADV_NAMED = 273,
    ADV_ARROW = 274,
    ADV_INVOCANT = 275,
    ADV_CALL_SIG = 276,
    NAMESPACE = 277,
    DOT_METHOD = 278,
    SUB = 279,
    SYM = 280,
    LOCAL = 281,
    LEXICAL = 282,
    CONST = 283,
    ANNOTATE = 284,
    GLOBAL_CONST = 285,
    PLUS_ASSIGN = 286,
    MINUS_ASSIGN = 287,
    MUL_ASSIGN = 288,
    DIV_ASSIGN = 289,
    CONCAT_ASSIGN = 290,
    BAND_ASSIGN = 291,
    BOR_ASSIGN = 292,
    BXOR_ASSIGN = 293,
    FDIV = 294,
    FDIV_ASSIGN = 295,
    MOD_ASSIGN = 296,
    SHR_ASSIGN = 297,
    SHL_ASSIGN = 298,
    SHR_U_ASSIGN = 299,
    SHIFT_LEFT = 300,
    SHIFT_RIGHT = 301,
    INTV = 302,
    FLOATV = 303,
    STRINGV = 304,
    PMCV = 305,
    LOG_XOR = 306,
    RELOP_EQ = 307,
    RELOP_NE = 308,
    RELOP_GT = 309,
    RELOP_GTE = 310,
    RELOP_LT = 311,
    RELOP_LTE = 312,
    RESULT = 313,
    RETURN = 314,
    TAILCALL = 315,
    YIELDT = 316,
    GET_RESULTS = 317,
    POW = 318,
    SHIFT_RIGHT_U = 319,
    LOG_AND = 320,
    LOG_OR = 321,
    COMMA = 322,
    ESUB = 323,
    DOTDOT = 324,
    PCC_BEGIN = 325,
    PCC_END = 326,
    PCC_CALL = 327,
    PCC_SUB = 328,
    PCC_BEGIN_RETURN = 329,
    PCC_END_RETURN = 330,
    PCC_BEGIN_YIELD = 331,
    PCC_END_YIELD = 332,
    INVOCANT = 333,
    MAIN = 334,
    LOAD = 335,
    INIT = 336,
    IMMEDIATE = 337,
    POSTCOMP = 338,
    METHOD = 339,
    ANON = 340,
    OUTER = 341,
    NEED_LEX = 342,
    MULTI = 343,
    SUBTAG = 344,
    VTABLE_METHOD = 345,
    LOADLIB = 346,
    SUB_INSTANCE_OF = 347,
    SUBID = 348,
    NS_ENTRY = 349,
    LABEL = 350,
    EMIT = 351,
    EOM = 352,
    IREG = 353,
    NREG = 354,
    SREG = 355,
    PREG = 356,
    IDENTIFIER = 357,
    REG = 358,
    MACRO = 359,
    ENDM = 360,
    STRINGC = 361,
    INTC = 362,
    FLOATC = 363,
    USTRINGC = 364,
    PARROT_OP = 365,
    VAR = 366,
    LINECOMMENT = 367,
    FILECOMMENT = 368,
    CONCAT = 369,
    DOT = 370
  };
#endif
/* Tokens.  */
#define LOW_PREC 258
#define PARAM 259
#define SOL 260
#define HLL 261
#define GOTO 262
#define ARG 263
#define IF 264
#define UNLESS 265
#define PNULL 266
#define SET_RETURN 267
#define SET_YIELD 268
#define ADV_FLAT 269
#define ADV_SLURPY 270
#define ADV_OPTIONAL 271
#define ADV_OPT_FLAG 272
#define ADV_NAMED 273
#define ADV_ARROW 274
#define ADV_INVOCANT 275
#define ADV_CALL_SIG 276
#define NAMESPACE 277
#define DOT_METHOD 278
#define SUB 279
#define SYM 280
#define LOCAL 281
#define LEXICAL 282
#define CONST 283
#define ANNOTATE 284
#define GLOBAL_CONST 285
#define PLUS_ASSIGN 286
#define MINUS_ASSIGN 287
#define MUL_ASSIGN 288
#define DIV_ASSIGN 289
#define CONCAT_ASSIGN 290
#define BAND_ASSIGN 291
#define BOR_ASSIGN 292
#define BXOR_ASSIGN 293
#define FDIV 294
#define FDIV_ASSIGN 295
#define MOD_ASSIGN 296
#define SHR_ASSIGN 297
#define SHL_ASSIGN 298
#define SHR_U_ASSIGN 299
#define SHIFT_LEFT 300
#define SHIFT_RIGHT 301
#define INTV 302
#define FLOATV 303
#define STRINGV 304
#define PMCV 305
#define LOG_XOR 306
#define RELOP_EQ 307
#define RELOP_NE 308
#define RELOP_GT 309
#define RELOP_GTE 310
#define RELOP_LT 311
#define RELOP_LTE 312
#define RESULT 313
#define RETURN 314
#define TAILCALL 315
#define YIELDT 316
#define GET_RESULTS 317
#define POW 318
#define SHIFT_RIGHT_U 319
#define LOG_AND 320
#define LOG_OR 321
#define COMMA 322
#define ESUB 323
#define DOTDOT 324
#define PCC_BEGIN 325
#define PCC_END 326
#define PCC_CALL 327
#define PCC_SUB 328
#define PCC_BEGIN_RETURN 329
#define PCC_END_RETURN 330
#define PCC_BEGIN_YIELD 331
#define PCC_END_YIELD 332
#define INVOCANT 333
#define MAIN 334
#define LOAD 335
#define INIT 336
#define IMMEDIATE 337
#define POSTCOMP 338
#define METHOD 339
#define ANON 340
#define OUTER 341
#define NEED_LEX 342
#define MULTI 343
#define SUBTAG 344
#define VTABLE_METHOD 345
#define LOADLIB 346
#define SUB_INSTANCE_OF 347
#define SUBID 348
#define NS_ENTRY 349
#define LABEL 350
#define EMIT 351
#define EOM 352
#define IREG 353
#define NREG 354
#define SREG 355
#define PREG 356
#define IDENTIFIER 357
#define REG 358
#define MACRO 359
#define ENDM 360
#define STRINGC 361
#define INTC 362
#define FLOATC 363
#define USTRINGC 364
#define PARROT_OP 365
#define VAR 366
#define LINECOMMENT 367
#define FILECOMMENT 368
#define CONCAT 369
#define DOT 370

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 1049 "compilers/imcc/imcc.y" /* yacc.c:1909  */

    IdList * idlist;
    int t;
    char * s;
    SymReg * sr;
    Instruction *i;

#line 292 "compilers/imcc/imcparser.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yyparse (void *yyscanner, imc_info_t *imcc);

#endif /* !YY_YY_COMPILERS_IMCC_IMCPARSER_H_INCLUDED  */
