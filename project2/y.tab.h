/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     MOVE_FUNC = 258,
     GRAB_FUNC = 259,
     RELEASE_FUNC = 260,
     TURN_FUNC = 261,
     READ_FUNC = 262,
     SEND_FUNC = 263,
     RECEIVE_FUNC = 264,
     INT_TYPE = 265,
     FLOAT_TYPE = 266,
     STRING_TYPE = 267,
     BOOLEAN_TYPE = 268,
     VOID_TYPE = 269,
     CONST_TYPE = 270,
     PLUS = 271,
     MINUS = 272,
     ASTERISK = 273,
     SLASH = 274,
     MOD = 275,
     IF = 276,
     ELSE = 277,
     WHILE = 278,
     FOR = 279,
     END = 280,
     START = 281,
     COMMA = 282,
     LEFT_P = 283,
     RIGHT_P = 284,
     LEFT_SQUARE_P = 285,
     RIGHT_SQUARE_P = 286,
     SCOPE_BEGIN = 287,
     SCOPE_END = 288,
     OR = 289,
     EQUAL = 290,
     IS_EQUAL = 291,
     IS_NOT_EQUAL = 292,
     LESS_OR_EQ = 293,
     GREATER_OR_EQ = 294,
     LESS_THAN = 295,
     GREATER_THAN = 296,
     AND = 297,
     NOT = 298,
     RETURN = 299,
     BOOLEAN = 300,
     INTEGER = 301,
     FLOAT = 302,
     COMMENT = 303,
     VARIABLE = 304,
     FUNCTION_NAME = 305,
     CONST = 306,
     ASK = 307,
     PRINT = 308,
     SEMICOLON = 309
   };
#endif
/* Tokens.  */
#define MOVE_FUNC 258
#define GRAB_FUNC 259
#define RELEASE_FUNC 260
#define TURN_FUNC 261
#define READ_FUNC 262
#define SEND_FUNC 263
#define RECEIVE_FUNC 264
#define INT_TYPE 265
#define FLOAT_TYPE 266
#define STRING_TYPE 267
#define BOOLEAN_TYPE 268
#define VOID_TYPE 269
#define CONST_TYPE 270
#define PLUS 271
#define MINUS 272
#define ASTERISK 273
#define SLASH 274
#define MOD 275
#define IF 276
#define ELSE 277
#define WHILE 278
#define FOR 279
#define END 280
#define START 281
#define COMMA 282
#define LEFT_P 283
#define RIGHT_P 284
#define LEFT_SQUARE_P 285
#define RIGHT_SQUARE_P 286
#define SCOPE_BEGIN 287
#define SCOPE_END 288
#define OR 289
#define EQUAL 290
#define IS_EQUAL 291
#define IS_NOT_EQUAL 292
#define LESS_OR_EQ 293
#define GREATER_OR_EQ 294
#define LESS_THAN 295
#define GREATER_THAN 296
#define AND 297
#define NOT 298
#define RETURN 299
#define BOOLEAN 300
#define INTEGER 301
#define FLOAT 302
#define COMMENT 303
#define VARIABLE 304
#define FUNCTION_NAME 305
#define CONST 306
#define ASK 307
#define PRINT 308
#define SEMICOLON 309



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
