#include "pgAdmin3.h"
#if _MSC_VER > 1000
#pragma warning(disable: 4800)
#endif

// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// Take the name prefix into account.
#define yylex   pgscriptlex

// First part of user declarations.
#line 11 "pgscript/pgsParser.yy" // lalr1.cc:404
 /*** C/C++ Declarations ***/

//////////////////////////////////////////////////////////////////////////
//
// pgScript - PostgreSQL Tools
//
// Copyright (C) 2002 - 2016, The pgAdmin Development Team
// This software is released under the PostgreSQL Licence
//
//////////////////////////////////////////////////////////////////////////


#line 51 "pgscript/parser.tab.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "pgscript/parser.tab.hh"

// User implementation prologue.
#line 255 "pgscript/pgsParser.yy" // lalr1.cc:412


#include "pgscript/utilities/pgsDriver.h"
#include "pgscript/utilities/pgsScanner.h"

/* This "connects" the bison parser in the driver to the flex scanner class
 * object. It defines the yylex() function call to pull the next token from the
 * current lexer object of the driver context. */
#undef  yylex
#define yylex driver.lexer->lex


#line 77 "pgscript/parser.tab.cc" // lalr1.cc:412


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace pgscript {
#line 163 "pgscript/parser.tab.cc" // lalr1.cc:479

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  pgsParser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  pgsParser::pgsParser (class pgsDriver & driver_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      driver (driver_yyarg)
  {}

  pgsParser::~pgsParser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/

  inline
  pgsParser::syntax_error::syntax_error (const location_type& l, const std::string& m)
    : std::runtime_error (m)
    , location (l)
  {}

  // basic_symbol.
  template <typename Base>
  inline
  pgsParser::basic_symbol<Base>::basic_symbol ()
    : value ()
  {}

  template <typename Base>
  inline
  pgsParser::basic_symbol<Base>::basic_symbol (const basic_symbol& other)
    : Base (other)
    , value ()
    , location (other.location)
  {
    value = other.value;
  }


  template <typename Base>
  inline
  pgsParser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const semantic_type& v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}


  /// Constructor for valueless symbols.
  template <typename Base>
  inline
  pgsParser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const location_type& l)
    : Base (t)
    , value ()
    , location (l)
  {}

  template <typename Base>
  inline
  pgsParser::basic_symbol<Base>::~basic_symbol ()
  {
    clear ();
  }

  template <typename Base>
  inline
  void
  pgsParser::basic_symbol<Base>::clear ()
  {
    Base::clear ();
  }

  template <typename Base>
  inline
  bool
  pgsParser::basic_symbol<Base>::empty () const
  {
    return Base::type_get () == empty_symbol;
  }

  template <typename Base>
  inline
  void
  pgsParser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move(s);
    value = s.value;
    location = s.location;
  }

  // by_type.
  inline
  pgsParser::by_type::by_type ()
    : type (empty_symbol)
  {}

  inline
  pgsParser::by_type::by_type (const by_type& other)
    : type (other.type)
  {}

  inline
  pgsParser::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  inline
  void
  pgsParser::by_type::clear ()
  {
    type = empty_symbol;
  }

  inline
  void
  pgsParser::by_type::move (by_type& that)
  {
    type = that.type;
    that.clear ();
  }

  inline
  int
  pgsParser::by_type::type_get () const
  {
    return type;
  }


  // by_state.
  inline
  pgsParser::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  pgsParser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  pgsParser::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  pgsParser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  pgsParser::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  pgsParser::symbol_number_type
  pgsParser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  pgsParser::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  pgsParser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
    value = that.value;
    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  pgsParser::stack_symbol_type&
  pgsParser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
  pgsParser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);

    // User destructor.
    switch (yysym.type_get ())
    {
            case 42: // "ABORT"

#line 171 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 416 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 43: // "ALTER"

#line 172 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 423 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 44: // "ANALYZE"

#line 173 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 430 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 45: // "BEGIN"

#line 174 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 437 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 46: // "CHECKPOINT"

#line 175 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 444 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 47: // "CLOSE"

#line 176 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 451 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 48: // "CLUSTER"

#line 177 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 458 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 49: // "COMMENT"

#line 178 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 465 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 50: // "COMMIT"

#line 179 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 472 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 51: // "COPY"

#line 180 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 479 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 52: // "CREATE"

#line 181 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 486 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 53: // "DEALLOCATE"

#line 182 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 493 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 54: // "DECLARE"

#line 183 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 500 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 55: // "DELETE"

#line 184 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 507 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 56: // "DISCARD"

#line 185 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 514 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 57: // "DROP"

#line 186 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 521 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 58: // "END"

#line 187 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 528 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 59: // "EXECUTE"

#line 188 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 535 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 60: // "EXPLAIN"

#line 189 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 542 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 61: // "FETCH"

#line 190 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 549 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 62: // "GRANT"

#line 191 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 556 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 63: // "INSERT"

#line 192 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 563 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 64: // "LISTEN"

#line 193 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 570 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 65: // "LOAD"

#line 194 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 577 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 66: // "LOCK"

#line 195 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 584 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 67: // "MOVE"

#line 196 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 591 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 68: // "NOTIFY"

#line 197 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 598 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 69: // "PREPARE"

#line 198 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 605 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 70: // "REASSIGN"

#line 199 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 612 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 71: // "REINDEX"

#line 200 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 619 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 72: // "RELEASE"

#line 201 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 626 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 73: // "RESET"

#line 202 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 633 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 74: // "REVOKE"

#line 203 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 640 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 75: // "ROLLBACK"

#line 204 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 647 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 76: // "SAVEPOINT"

#line 205 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 654 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 77: // "SELECT"

#line 206 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 661 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 78: // "SET"

#line 207 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 668 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 79: // "SHOW"

#line 208 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 675 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 80: // "START"

#line 209 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 682 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 81: // "TRUNCATE"

#line 210 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 689 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 82: // "UNLISTEN"

#line 211 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 696 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 83: // "UPDATE"

#line 212 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 703 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 84: // "VACUUM"

#line 213 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 710 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 85: // "VALUES"

#line 214 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 717 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 86: // "IDENTIFIER"

#line 216 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 724 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 87: // "INTEGER VALUE"

#line 217 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 731 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 88: // "REAL VALUE"

#line 218 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 738 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;

      case 89: // "STRING VALUE"

#line 219 "pgscript/pgsParser.yy" // lalr1.cc:614
        { pdelete((yysym.value.str)); }
#line 745 "pgscript/parser.tab.cc" // lalr1.cc:614
        break;


      default:
        break;
    }
  }

#if YYDEBUG
  template <typename Base>
  void
  pgsParser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
  pgsParser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  pgsParser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  pgsParser::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  pgsParser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  pgsParser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  pgsParser::debug_level_type
  pgsParser::debug_level () const
  {
    return yydebug_;
  }

  void
  pgsParser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline pgsParser::state_type
  pgsParser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  pgsParser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  pgsParser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  pgsParser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    // User initialization code.
    #line 47 "pgscript/pgsParser.yy" // lalr1.cc:741
{
	// Initialize the initial location object
	yyla.location.begin.filename = yyla.location.end.filename;
}

#line 883 "pgscript/parser.tab.cc" // lalr1.cc:741

    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            yyla.type = yytranslate_ (yylex (&yyla.value, &yyla.location));
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* If YYLEN is nonzero, implement the default value of the
         action: '$$ = $1'.  Otherwise, use the top of the stack.

         Otherwise, the following line sets YYLHS.VALUE to garbage.
         This behavior is undocumented and Bison users should not rely
         upon it.  */
      if (yylen)
        yylhs.value = yystack_[yylen - 1].value;
      else
        yylhs.value = yystack_[0].value;

      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 2:
#line 272 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsIdentRecord(*((yystack_[6].value.str)), (yystack_[4].value.expr), (yystack_[1].value.expr));
									pdelete((yystack_[6].value.str));
									driver.context.pop_var(); driver.context.pop_var(); // $3 & $6
									driver.context.push_var((yylhs.value.expr));
								}
#line 998 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 3:
#line 279 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsIdentRecord(*((yystack_[3].value.str)), (yystack_[1].value.expr));
									pdelete((yystack_[3].value.str));
									driver.context.pop_var(); // $3
									driver.context.push_var((yylhs.value.expr));
								}
#line 1009 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 4:
#line 286 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsLines(*((yystack_[1].value.str)));
									pdelete((yystack_[1].value.str));
									driver.context.push_var((yylhs.value.expr));
								}
#line 1019 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 5:
#line 292 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsColumns(*((yystack_[1].value.str)));
									pdelete((yystack_[1].value.str));
									driver.context.push_var((yylhs.value.expr));
								}
#line 1029 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 6:
#line 298 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsTrim((yystack_[1].value.expr));
									driver.context.pop_var(); // $3
									driver.context.push_var((yylhs.value.expr)); // assert
								}
#line 1039 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 7:
#line 304 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsIdent(*((yystack_[0].value.str)));
									pdelete((yystack_[0].value.str));
									driver.context.push_var((yylhs.value.expr));
								}
#line 1049 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 8:
#line 310 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsNumber(*((yystack_[0].value.str)), pgsInt);
									pdelete((yystack_[0].value.str));
									driver.context.push_var((yylhs.value.expr));
								}
#line 1059 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 9:
#line 316 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsNumber(*((yystack_[0].value.str)), pgsReal);
									pdelete((yystack_[0].value.str));
									driver.context.push_var((yylhs.value.expr));
								}
#line 1069 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 10:
#line 322 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsString(*((yystack_[0].value.str)));
									pdelete((yystack_[0].value.str));
									driver.context.push_var((yylhs.value.expr));
								}
#line 1079 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 11:
#line 327 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsExecute(*((yystack_[1].value.str)), &driver.context.m_cout,
											&(driver.thread));
									pdelete((yystack_[1].value.str));
									driver.context.push_var((yylhs.value.expr)); // SQL Expression statement
								}
#line 1090 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 12:
#line 333 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.expr) = (yystack_[0].value.expr); }
#line 1096 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 13:
#line 334 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsParenthesis((yystack_[1].value.expr));
									driver.context.pop_var(); // $2
									driver.context.push_var((yylhs.value.expr));
								}
#line 1106 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 14:
#line 342 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.expr) = (yystack_[0].value.expr); }
#line 1112 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 15:
#line 343 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.expr) = (yystack_[0].value.expr); }
#line 1118 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 16:
#line 344 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsNegate((yystack_[0].value.expr));
									driver.context.pop_var(); // $2
									driver.context.push_var((yylhs.value.expr));
								}
#line 1128 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 17:
#line 350 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsNot((yystack_[0].value.expr));
									driver.context.pop_var(); // $2
									driver.context.push_var((yylhs.value.expr));
								}
#line 1138 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 18:
#line 358 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.expr) = (yystack_[0].value.expr); }
#line 1144 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 19:
#line 360 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsCast((yystack_[1].value.integer), (yystack_[3].value.expr));
									driver.context.pop_var(); // $3
									driver.context.push_var((yylhs.value.expr));
								}
#line 1154 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 20:
#line 368 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.integer) = pgscript::pgsParser::token::PGS_INTEGER; }
#line 1160 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 21:
#line 369 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.integer) = pgscript::pgsParser::token::PGS_REAL; }
#line 1166 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 22:
#line 370 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.integer) = pgscript::pgsParser::token::PGS_STRING; }
#line 1172 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 23:
#line 371 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.integer) = pgscript::pgsParser::token::PGS_RECORD; }
#line 1178 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 24:
#line 375 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.expr) = (yystack_[0].value.expr); }
#line 1184 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 25:
#line 377 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsTimes((yystack_[2].value.expr), (yystack_[0].value.expr));
									driver.context.pop_var();
									driver.context.pop_var(); // $1 & $3
									driver.context.push_var((yylhs.value.expr));
								}
#line 1195 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 26:
#line 384 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsOver((yystack_[2].value.expr), (yystack_[0].value.expr));
									driver.context.pop_var();
									driver.context.pop_var(); // $1 & $3
									driver.context.push_var((yylhs.value.expr));
								}
#line 1206 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 27:
#line 391 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsModulo((yystack_[2].value.expr), (yystack_[0].value.expr));
									driver.context.pop_var();
									driver.context.pop_var(); // $1 & $3
									driver.context.push_var((yylhs.value.expr));
								}
#line 1217 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 28:
#line 400 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.expr) = (yystack_[0].value.expr); }
#line 1223 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 29:
#line 402 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsPlus((yystack_[2].value.expr), (yystack_[0].value.expr));
									driver.context.pop_var();
									driver.context.pop_var(); // $1 & $3
									driver.context.push_var((yylhs.value.expr));
								}
#line 1234 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 30:
#line 409 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsMinus((yystack_[2].value.expr), (yystack_[0].value.expr));
									driver.context.pop_var();
									driver.context.pop_var(); // $1 & $3
									driver.context.push_var((yylhs.value.expr));
								}
#line 1245 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 31:
#line 418 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.expr) = (yystack_[0].value.expr); }
#line 1251 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 32:
#line 420 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsLower((yystack_[2].value.expr), (yystack_[0].value.expr));
									driver.context.pop_var();
									driver.context.pop_var(); // $1 & $3
									driver.context.push_var((yylhs.value.expr));
								}
#line 1262 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 33:
#line 427 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGreater((yystack_[2].value.expr), (yystack_[0].value.expr));
									driver.context.pop_var();
									driver.context.pop_var(); // $1 & $3
									driver.context.push_var((yylhs.value.expr));
								}
#line 1273 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 34:
#line 434 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsLowerEqual((yystack_[2].value.expr), (yystack_[0].value.expr));
									driver.context.pop_var();
									driver.context.pop_var(); // $1 & $3
									driver.context.push_var((yylhs.value.expr));
								}
#line 1284 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 35:
#line 441 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGreaterEqual((yystack_[2].value.expr), (yystack_[0].value.expr));
									driver.context.pop_var();
									driver.context.pop_var(); // $1 & $3
									driver.context.push_var((yylhs.value.expr));
								}
#line 1295 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 36:
#line 450 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.expr) = (yystack_[0].value.expr); }
#line 1301 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 37:
#line 452 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsEqual((yystack_[2].value.expr), (yystack_[0].value.expr));
									driver.context.pop_var();
									driver.context.pop_var(); // $1 & $3
									driver.context.push_var((yylhs.value.expr));
								}
#line 1312 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 38:
#line 459 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsEqual((yystack_[2].value.expr), (yystack_[0].value.expr), false);
									driver.context.pop_var();
									driver.context.pop_var(); // $1 & $3
									driver.context.push_var((yylhs.value.expr));
								}
#line 1323 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 39:
#line 466 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsDifferent((yystack_[2].value.expr), (yystack_[0].value.expr));
									driver.context.pop_var();
									driver.context.pop_var(); // $1 & $3
									driver.context.push_var((yylhs.value.expr));
								}
#line 1334 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 40:
#line 475 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.expr) = (yystack_[0].value.expr); }
#line 1340 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 41:
#line 477 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsAnd((yystack_[2].value.expr), (yystack_[0].value.expr));
									driver.context.pop_var();
									driver.context.pop_var(); // $1 & $3
									driver.context.push_var((yylhs.value.expr));
								}
#line 1351 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 42:
#line 486 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.expr) = (yystack_[0].value.expr); }
#line 1357 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 43:
#line 488 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsOr((yystack_[2].value.expr), (yystack_[0].value.expr));
									driver.context.pop_var();
									driver.context.pop_var(); // $1 & $3
									driver.context.push_var((yylhs.value.expr));
								}
#line 1368 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 44:
#line 497 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									wxLogScriptVerbose(wxT("%s"), (yystack_[0].value.expr)->value());
									(yylhs.value.expr) = (yystack_[0].value.expr);
								}
#line 1377 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 45:
#line 505 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGenInt((yystack_[3].value.expr), (yystack_[1].value.expr), driver.context.zero(),
											driver.context.seed());
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.push_var((yylhs.value.expr));
								}
#line 1389 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 46:
#line 513 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGenInt((yystack_[5].value.expr), (yystack_[3].value.expr), (yystack_[1].value.expr), driver.context.seed());
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.push_var((yylhs.value.expr));
								}
#line 1400 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 47:
#line 520 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGenInt((yystack_[7].value.expr), (yystack_[5].value.expr), (yystack_[3].value.expr), (yystack_[1].value.expr));
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.push_var((yylhs.value.expr));
								}
#line 1411 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 48:
#line 527 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGenReal((yystack_[5].value.expr), (yystack_[3].value.expr), (yystack_[1].value.expr), driver.context.zero(),
											driver.context.seed());
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var();
									driver.context.push_var((yylhs.value.expr));
								}
#line 1424 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 49:
#line 536 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGenReal((yystack_[7].value.expr), (yystack_[5].value.expr), (yystack_[3].value.expr), (yystack_[1].value.expr), driver.context.seed());
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var();
									driver.context.push_var((yylhs.value.expr));
								}
#line 1436 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 50:
#line 544 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGenReal((yystack_[9].value.expr), (yystack_[7].value.expr), (yystack_[5].value.expr), (yystack_[3].value.expr), (yystack_[1].value.expr));
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var();
									driver.context.push_var((yylhs.value.expr));
								}
#line 1448 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 51:
#line 552 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGenString((yystack_[3].value.expr), (yystack_[1].value.expr), driver.context.one(),
											driver.context.seed());
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.push_var((yylhs.value.expr));
								}
#line 1460 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 52:
#line 560 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGenString((yystack_[5].value.expr), (yystack_[3].value.expr), (yystack_[1].value.expr), driver.context.seed());
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.push_var((yylhs.value.expr));
								}
#line 1471 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 53:
#line 567 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGenString((yystack_[7].value.expr), (yystack_[5].value.expr), (yystack_[3].value.expr), (yystack_[1].value.expr));
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.push_var((yylhs.value.expr));
								}
#line 1482 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 54:
#line 574 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGenRegex((yystack_[1].value.expr), driver.context.seed());
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.push_var((yylhs.value.expr));
								}
#line 1492 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 55:
#line 580 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGenRegex((yystack_[3].value.expr), (yystack_[1].value.expr));
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.push_var((yylhs.value.expr));
								}
#line 1502 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 56:
#line 586 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGenDictionary((yystack_[1].value.expr), driver.context.zero(),
											driver.context.seed(), driver.context.encoding());
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.push_var((yylhs.value.expr));
								}
#line 1514 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 57:
#line 594 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGenDictionary((yystack_[3].value.expr), (yystack_[1].value.expr), driver.context.seed(),
											driver.context.encoding());
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.push_var((yylhs.value.expr));
								}
#line 1526 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 58:
#line 602 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGenDictionary((yystack_[5].value.expr), (yystack_[3].value.expr), (yystack_[1].value.expr), driver.context.encoding());
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.push_var((yylhs.value.expr));
								}
#line 1537 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 59:
#line 609 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGenDictionary((yystack_[7].value.expr), (yystack_[5].value.expr), (yystack_[3].value.expr), (yystack_[1].value.expr));
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.push_var((yylhs.value.expr));
								}
#line 1548 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 60:
#line 616 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGenDate((yystack_[3].value.expr), (yystack_[1].value.expr), driver.context.zero(),
											driver.context.seed());
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.push_var((yylhs.value.expr));
								}
#line 1560 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 61:
#line 624 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGenDate((yystack_[5].value.expr), (yystack_[3].value.expr), (yystack_[1].value.expr), driver.context.seed());
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.push_var((yylhs.value.expr));
								}
#line 1571 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 62:
#line 631 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGenDate((yystack_[7].value.expr), (yystack_[5].value.expr), (yystack_[3].value.expr), (yystack_[1].value.expr));
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.push_var((yylhs.value.expr));
								}
#line 1582 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 63:
#line 638 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGenTime((yystack_[3].value.expr), (yystack_[1].value.expr), driver.context.zero(),
											driver.context.seed());
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.push_var((yylhs.value.expr));
								}
#line 1594 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 64:
#line 646 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGenTime((yystack_[5].value.expr), (yystack_[3].value.expr), (yystack_[1].value.expr), driver.context.seed());
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.push_var((yylhs.value.expr));
								}
#line 1605 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 65:
#line 653 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGenTime((yystack_[7].value.expr), (yystack_[5].value.expr), (yystack_[3].value.expr), (yystack_[1].value.expr));
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.push_var((yylhs.value.expr));
								}
#line 1616 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 66:
#line 660 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGenDateTime((yystack_[3].value.expr), (yystack_[1].value.expr), driver.context.zero(),
											driver.context.seed());
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.push_var((yylhs.value.expr));
								}
#line 1628 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 67:
#line 668 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGenDateTime((yystack_[5].value.expr), (yystack_[3].value.expr), (yystack_[1].value.expr), driver.context.seed());
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.push_var((yylhs.value.expr));
								}
#line 1639 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 68:
#line 675 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGenDateTime((yystack_[7].value.expr), (yystack_[5].value.expr), (yystack_[3].value.expr), (yystack_[1].value.expr));
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.push_var((yylhs.value.expr));
								}
#line 1650 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 69:
#line 682 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGenReference((yystack_[3].value.expr), (yystack_[1].value.expr), driver.context.zero(),
											driver.context.seed(), &(driver.thread));
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.push_var((yylhs.value.expr));
								}
#line 1662 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 70:
#line 690 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGenReference((yystack_[5].value.expr), (yystack_[3].value.expr), (yystack_[1].value.expr), driver.context.seed(),
											&(driver.thread));
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.push_var((yylhs.value.expr));
								}
#line 1674 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 71:
#line 698 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsGenReference((yystack_[7].value.expr), (yystack_[5].value.expr), (yystack_[3].value.expr), (yystack_[1].value.expr), &(driver.thread));
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.push_var((yylhs.value.expr));
								}
#line 1685 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 72:
#line 707 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.stmt) = (yystack_[0].value.stmt); }
#line 1691 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 73:
#line 708 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.stmt) = (yystack_[0].value.stmt); }
#line 1697 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 74:
#line 709 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.stmt) = (yystack_[0].value.stmt); }
#line 1703 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 75:
#line 710 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.stmt) = (yystack_[1].value.stmt); }
#line 1709 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 76:
#line 711 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.stmt) = (yystack_[1].value.stmt); }
#line 1715 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 77:
#line 712 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.stmt) = (yystack_[1].value.stmt); }
#line 1721 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 78:
#line 713 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.stmt) = (yystack_[1].value.stmt); }
#line 1727 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 79:
#line 714 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.stmt) = (yystack_[1].value.stmt); }
#line 1733 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 80:
#line 718 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									driver.context.pop_stmt(); // $1
									(yylhs.value.stmt_list) = driver.context.stmt_list(&(driver.thread));
									(yylhs.value.stmt_list)->insert_back((yystack_[0].value.stmt));
								}
#line 1743 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 81:
#line 723 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									driver.context.pop_stmt(); // $2
									(yylhs.value.stmt_list) = (yystack_[1].value.stmt_list);
									(yylhs.value.stmt_list)->insert_back((yystack_[0].value.stmt));
								}
#line 1753 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 82:
#line 731 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									wxLogScriptVerbose(wxT("BEGIN END"));
									(yylhs.value.stmt) = driver.context.stmt_list(&(driver.thread));
								}
#line 1762 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 83:
#line 736 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									wxLogScriptVerbose(wxT("BEGIN ... END"));
									(yylhs.value.stmt) = (yystack_[1].value.stmt_list);
								}
#line 1771 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 84:
#line 743 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									wxLogScriptVerbose(wxT("%s"), (yystack_[0].value.expr)->value());
									(yylhs.value.stmt) = pnew pgsExpressionStmt((yystack_[0].value.expr), &(driver.thread));
									driver.context.pop_var(); // $1
									driver.context.push_stmt((yylhs.value.stmt)); // pgsExpressionStmt
									(yylhs.value.stmt)->set_position(yyla.location.begin.line);
								}
#line 1783 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 85:
#line 753 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.expr) = pnew pgsExecute(*((yystack_[0].value.str)), &driver.context.m_cout,
											&(driver.thread));
									pdelete((yystack_[0].value.str));
									driver.context.push_var((yylhs.value.expr)); // pgsExecute
								}
#line 1794 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 86:
#line 762 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1800 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 87:
#line 763 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1806 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 88:
#line 764 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1812 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 89:
#line 765 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1818 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 90:
#line 766 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1824 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 91:
#line 767 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1830 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 92:
#line 768 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1836 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 93:
#line 769 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1842 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 94:
#line 770 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1848 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 95:
#line 771 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1854 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 96:
#line 772 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1860 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 97:
#line 773 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1866 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 98:
#line 774 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1872 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 99:
#line 775 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1878 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 100:
#line 776 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1884 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 101:
#line 777 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1890 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 102:
#line 778 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1896 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 103:
#line 779 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1902 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 104:
#line 780 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1908 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 105:
#line 781 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1914 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 106:
#line 782 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1920 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 107:
#line 783 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1926 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 108:
#line 784 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1932 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 109:
#line 785 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1938 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 110:
#line 786 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1944 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 111:
#line 787 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1950 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 112:
#line 788 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1956 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 113:
#line 789 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1962 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 114:
#line 790 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1968 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 115:
#line 791 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1974 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 116:
#line 792 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1980 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 117:
#line 793 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1986 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 118:
#line 794 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1992 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 119:
#line 795 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 1998 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 120:
#line 796 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 2004 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 121:
#line 797 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 2010 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 122:
#line 798 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 2016 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 123:
#line 799 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 2022 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 124:
#line 800 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 2028 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 125:
#line 801 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 2034 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 126:
#line 802 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 2040 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 127:
#line 803 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 2046 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 128:
#line 804 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 2052 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 129:
#line 805 "pgscript/pgsParser.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 2058 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 130:
#line 810 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.stmt) = (yystack_[0].value.stmt_list);
								}
#line 2066 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 131:
#line 816 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									driver.context.pop_stmt(); // $1
									(yylhs.value.stmt_list) = driver.context.stmt_list(&(driver.thread));
									(yylhs.value.stmt_list)->insert_back((yystack_[0].value.stmt));

								}
#line 2077 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 132:
#line 823 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									driver.context.pop_stmt(); // $3
									(yylhs.value.stmt_list) = (yystack_[2].value.stmt_list);
									(yylhs.value.stmt_list)->insert_back((yystack_[0].value.stmt));
								}
#line 2087 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 133:
#line 831 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									wxLogScriptVerbose(wxT("DECLARE %s"), (yystack_[0].value.str)->c_str());

									(yylhs.value.stmt) = pnew pgsExpressionStmt(pnew pgsAssign(*((yystack_[0].value.str)),
											pnew pgsString(wxT(""))), &(driver.thread));
									driver.context.push_stmt((yylhs.value.stmt)); // pgsExpressionStmt
									(yylhs.value.stmt)->set_position(yyla.location.begin.line);

									pdelete((yystack_[0].value.str));
								}
#line 2102 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 134:
#line 842 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									wxLogScriptVerbose(wxT("DECLARE %s"), (yystack_[3].value.str)->c_str());

									(yylhs.value.stmt) = pnew pgsDeclareRecordStmt(*((yystack_[3].value.str)), driver.context.columns(),
											&(driver.thread));
									driver.context.push_stmt((yylhs.value.stmt)); // pgsDeclareRecordStmt
									(yylhs.value.stmt)->set_position(yyla.location.begin.line);

									driver.context.clear_columns();
									pdelete((yystack_[3].value.str));
								}
#line 2118 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 135:
#line 857 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									(yylhs.value.stmt) = (yystack_[0].value.stmt_list);
								}
#line 2126 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 136:
#line 863 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									driver.context.pop_stmt(); // $1
									(yylhs.value.stmt_list) = driver.context.stmt_list(&(driver.thread));
									(yylhs.value.stmt_list)->insert_back((yystack_[0].value.stmt));
								}
#line 2136 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 137:
#line 869 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									driver.context.pop_stmt(); // $3
									(yylhs.value.stmt_list) = (yystack_[2].value.stmt_list);
									(yylhs.value.stmt_list)->insert_back((yystack_[0].value.stmt));
								}
#line 2146 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 138:
#line 878 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									wxLogScriptVerbose(wxT("SET %s = %s"), (yystack_[2].value.str)->c_str(),
											(yystack_[0].value.expr)->value());

									(yylhs.value.stmt) = pnew pgsExpressionStmt(pnew pgsAssign(*((yystack_[2].value.str)), (yystack_[0].value.expr)),
											&(driver.thread));
									driver.context.pop_var(); // $3
									driver.context.push_stmt((yylhs.value.stmt)); // pgsExpressionStmt
									(yylhs.value.stmt)->set_position(yyla.location.begin.line);

									pdelete((yystack_[2].value.str));
								}
#line 2163 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 139:
#line 891 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									wxLogScriptVerbose(wxT("SET %s[%s][%s] = %s"),
											(yystack_[8].value.str)->c_str(), (yystack_[6].value.expr)->value(),
											(yystack_[3].value.expr)->value(), (yystack_[0].value.expr)->value());

									(yylhs.value.stmt) = pnew pgsExpressionStmt(pnew pgsAssignToRecord(*((yystack_[8].value.str)),
											(yystack_[6].value.expr), (yystack_[3].value.expr), (yystack_[0].value.expr)), &(driver.thread));
									driver.context.pop_var(); driver.context.pop_var();
									driver.context.pop_var(); // $3 & $6 & $9
									driver.context.push_stmt((yylhs.value.stmt)); // pgsExpressionStmt
									(yylhs.value.stmt)->set_position(yyla.location.begin.line);

									pdelete((yystack_[8].value.str));
								}
#line 2182 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 140:
#line 906 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									wxLogScriptVerbose(wxT("SET %s = %s"), (yystack_[2].value.str)->c_str(),
											(yystack_[0].value.expr)->value());

									(yylhs.value.stmt) = pnew pgsExpressionStmt(pnew pgsAssign(*((yystack_[2].value.str)), (yystack_[0].value.expr)),
											&(driver.thread));
									driver.context.pop_var(); // $3
									driver.context.push_stmt((yylhs.value.stmt)); // pgsExpressionStmt
									(yylhs.value.stmt)->set_position(yyla.location.begin.line);

									pdelete((yystack_[2].value.str));
								}
#line 2199 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 141:
#line 922 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									wxLogScriptVerbose(wxT("IF %s"), (yystack_[1].value.expr)->value());

									(yylhs.value.stmt) = pnew pgsIfStmt((yystack_[1].value.expr), (yystack_[0].value.stmt), driver.context
											.stmt_list(&(driver.thread)), &(driver.thread));
									driver.context.pop_var(); // $2
									driver.context.pop_stmt(); // $3
									driver.context.pop_stmt(); // stmt_list
									driver.context.push_stmt((yylhs.value.stmt)); // pgsIfStmt
									(yylhs.value.stmt)->set_position(yyla.location.begin.line);
								}
#line 2215 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 142:
#line 934 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									wxLogScriptVerbose(wxT("IF %s"), (yystack_[3].value.expr)->value());

									(yylhs.value.stmt) = pnew pgsIfStmt((yystack_[3].value.expr), (yystack_[2].value.stmt), (yystack_[0].value.stmt), &(driver.thread));
									driver.context.pop_var(); // $2
									driver.context.pop_stmt(); // $3
									driver.context.pop_stmt(); // $5
									driver.context.push_stmt((yylhs.value.stmt)); // pgsIfStmt
									(yylhs.value.stmt)->set_position(yyla.location.begin.line);
								}
#line 2230 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 143:
#line 948 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									wxLogScriptVerbose(wxT("WHILE %s"), (yystack_[1].value.expr)->value());

									(yylhs.value.stmt) = pnew pgsWhileStmt((yystack_[1].value.expr), (yystack_[0].value.stmt), &(driver.thread));
									driver.context.pop_var(); // $2
									driver.context.pop_stmt(); // $3
									driver.context.push_stmt((yylhs.value.stmt)); // pgsWhileStmt
									(yylhs.value.stmt)->set_position(yyla.location.begin.line);
								}
#line 2244 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 144:
#line 960 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									wxLogScriptVerbose(wxT("BREAK"));

									(yylhs.value.stmt) = pnew pgsBreakStmt(&(driver.thread));
									driver.context.push_stmt((yylhs.value.stmt)); // pgsBreakStmt
									(yylhs.value.stmt)->set_position(yyla.location.begin.line);
								}
#line 2256 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 145:
#line 967 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									wxLogScriptVerbose(wxT("RETURN"));

									(yylhs.value.stmt) = pnew pgsBreakStmt(&(driver.thread));
									driver.context.push_stmt((yylhs.value.stmt)); // pgsBreakStmt
									(yylhs.value.stmt)->set_position(yyla.location.begin.line);
								}
#line 2268 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 146:
#line 974 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									wxLogScriptVerbose(wxT("CONTINUE"));

									(yylhs.value.stmt) = pnew pgsContinueStmt(&(driver.thread));
									driver.context.push_stmt((yylhs.value.stmt)); // pgsContinueStmt
									(yylhs.value.stmt)->set_position(yyla.location.begin.line);
								}
#line 2280 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 147:
#line 985 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									wxLogScriptVerbose(wxT("PRINT %s"), (yystack_[0].value.expr)->value());

									(yylhs.value.stmt) = pnew pgsPrintStmt((yystack_[0].value.expr), driver.context.m_cout,
											&(driver.thread));
									driver.context.pop_var(); // $2
									driver.context.push_stmt((yylhs.value.stmt)); // pgsPrintStmt
									(yylhs.value.stmt)->set_position(yyla.location.begin.line);
								}
#line 2294 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 148:
#line 995 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									wxLogScriptVerbose(wxT("ASSERT %s"), (yystack_[0].value.expr)->value());

									(yylhs.value.stmt) = pnew pgsAssertStmt((yystack_[0].value.expr), &(driver.thread));
									driver.context.pop_var(); // $2
									driver.context.push_stmt((yylhs.value.stmt)); // pgsAssertStmt
									(yylhs.value.stmt)->set_position(yyla.location.begin.line);
								}
#line 2307 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 149:
#line 1004 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									wxLogScriptVerbose(wxT("RMLINE %s[%s]"), (yystack_[4].value.str)->c_str(),
											(yystack_[2].value.expr)->value());

									(yylhs.value.stmt) = pnew pgsExpressionStmt(pnew pgsRemoveLine(*((yystack_[4].value.str)), (yystack_[2].value.expr)),
											&(driver.thread));
									driver.context.pop_var(); // $5
									driver.context.push_stmt((yylhs.value.stmt)); // pgsExpressionStmt
									(yylhs.value.stmt)->set_position(yyla.location.begin.line);

									pdelete((yystack_[4].value.str));
								}
#line 2324 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 150:
#line 1019 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									driver.context.add_column(*(yystack_[0].value.str));
									pdelete((yystack_[0].value.str));
								}
#line 2333 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 151:
#line 1024 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									driver.context.add_column(*(yystack_[0].value.str));
									pdelete((yystack_[0].value.str));
								}
#line 2342 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;

  case 153:
#line 1032 "pgscript/pgsParser.yy" // lalr1.cc:859
    {
									driver.program.eval((yystack_[1].value.stmt_list));

									driver.context.pop_stmt();
									pdelete((yystack_[1].value.stmt_list)); // delete root statement $1
								}
#line 2353 "pgscript/parser.tab.cc" // lalr1.cc:859
    break;


#line 2357 "pgscript/parser.tab.cc" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  pgsParser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  pgsParser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char pgsParser::yypact_ninf_ = -93;

  const signed char pgsParser::yytable_ninf_ = -1;

  const short int
  pgsParser::yypact_[] =
  {
     284,   -93,     6,   -93,   -93,   -93,     6,   453,     6,     6,
     -88,   -76,   -61,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   370,   -93,
     -65,   -93,   -93,   -56,   -45,   -93,   -93,   -44,   -28,    73,
      12,    13,    23,    27,    37,    42,    44,    50,    63,    65,
      66,    67,    68,     6,     0,   -93,   -93,   -93,   -11,     6,
       6,   -93,   -93,   -93,    51,   -74,     7,   117,   120,   124,
     619,   -93,   619,   -93,   536,   -93,   -93,    76,   -25,    62,
     -93,    61,    69,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,    79,    80,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,   -93,     6,    74,    75,   -93,
     -93,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,   -93,   161,   -93,    81,   689,
       6,   -76,    86,   -61,    82,    83,    84,   163,    77,    78,
      85,   -53,   -52,    87,    89,    90,    91,    92,   -93,   -93,
     -93,   -93,   -93,    51,    51,   -74,   -74,   -74,   -74,     7,
       7,     7,   117,   120,   619,     6,   -93,   -93,    93,   -93,
     -93,    34,   -93,   -93,   -93,   -93,    64,     6,     6,     6,
     -93,     6,   -93,     6,     6,     6,     6,     6,    95,   -93,
      96,   103,    88,   -93,   -93,   -93,   -93,   -93,   101,   -51,
      94,   -42,   104,   -38,   -37,   -31,   -22,   -21,     6,   105,
       6,   -93,   -93,   -93,     6,     6,   -93,     6,   -93,   -93,
       6,   -93,     6,   -93,     6,   -93,     6,   -93,     6,   108,
     -93,   109,    -4,    -2,     9,    10,    15,    16,    38,    39,
     -93,   147,   -93,     6,   -93,     6,   -93,     6,   -93,     6,
     -93,     6,   -93,     6,   -93,     6,   -93,     6,     6,   111,
      40,   113,   119,   121,   122,   123,   125,   -93,   -93,   -93,
       6,   -93,   -93,   -93,   -93,   -93,   -93,   126,   -93
  };

  const unsigned char
  pgsParser::yydefact_[] =
  {
       0,   152,     0,   144,   145,   146,     0,     0,     0,     0,
       0,     0,     0,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,    80,     0,    72,
       0,    84,    85,     0,     0,    73,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     9,    10,     0,     0,
       0,    14,    18,    24,    28,    31,    36,    40,    42,    44,
       0,    12,     0,    82,     0,   148,   147,     0,     0,   135,
     136,   133,   130,   131,   153,    81,    75,    78,    79,    77,
      76,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    17,     0,     0,     0,    15,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   143,   141,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    13,
      25,    26,    27,    29,    30,    34,    35,    32,    33,    37,
      38,    39,    41,    43,     0,     0,   138,   140,     0,   137,
     150,     0,   132,     5,     4,     6,     0,     0,     0,     0,
      54,     0,    56,     0,     0,     0,     0,     0,     3,   142,
       0,     0,     0,   134,    23,    20,    21,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   151,    19,    45,     0,     0,    51,     0,    55,    57,
       0,    60,     0,    63,     0,    66,     0,    69,     0,     0,
     149,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     0,    46,     0,    48,     0,    52,     0,    58,     0,
      61,     0,    64,     0,    67,     0,    70,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   139,    47,    49,
       0,    53,    59,    62,    65,    68,    71,     0,    50
  };

  const short int
  pgsParser::yypgoto_[] =
  {
     -93,   -93,   -93,   -29,   -93,   -92,    -3,   -83,    28,    59,
     -93,    -6,   -93,   -57,   175,   -93,   -93,    58,   -93,   -93,
     -93,    33,   -93,   -93,    60,   -93,   -93,   -93,   -93,   -93,
     -93
  };

  const short int
  pgsParser::yydefgoto_[] =
  {
      -1,    91,    92,    93,   228,    94,    95,    96,    97,    98,
      99,   100,   101,    57,    58,    59,    60,    61,    62,    63,
     112,   113,    64,   109,   110,    65,    66,    67,    68,   201,
      69
  };

  const unsigned short int
  pgsParser::yytable_[] =
  {
     102,   115,   105,   106,   107,    70,    71,    72,   159,    73,
     108,    74,    75,    76,    77,    78,    79,    80,    81,    82,
     144,   145,    70,    71,    72,   111,    73,    83,    74,    75,
      76,    77,    78,    79,    80,    81,    82,   116,   146,   147,
     210,   212,   243,   155,    83,   156,   117,   115,   211,   213,
     244,   246,   183,   184,   135,   249,   251,   118,   119,   247,
     139,   140,   253,   250,   252,   160,   137,   189,   190,   191,
     254,   255,   257,   121,   120,    84,    85,    86,    87,   256,
     258,    88,   138,    89,    90,   224,   225,   226,   227,   272,
     136,   274,    84,    85,    86,    87,   167,   273,    88,   275,
      89,    90,   276,   278,   122,   123,   148,   149,   280,   282,
     277,   279,   180,   181,   182,   124,   281,   283,   166,   125,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   126,
     177,   284,   286,   299,   127,   222,   128,   219,   223,   285,
     287,   300,   129,   185,   186,   187,   188,   141,   142,   143,
     150,   151,   152,   196,   198,   130,   153,   131,   132,   133,
     134,   154,   158,   161,   162,   164,   165,   178,   179,   194,
     163,   195,   200,   206,   241,   203,   204,   205,   207,   208,
     288,   192,   104,   218,   221,   238,   209,   239,   214,   220,
     215,   216,   217,   240,   242,   245,   202,   248,   260,   270,
     271,   229,   230,   231,   298,   232,   301,   233,   234,   235,
     236,   237,   302,   193,   303,   304,   305,   197,   306,   308,
       0,   199,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   259,     0,   261,     0,     0,     0,   262,   263,
       0,   264,     0,     0,   265,     0,   266,     0,   267,     0,
     268,     0,   269,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   289,     0,   290,
       0,   291,     0,   292,     0,   293,     0,   294,     0,   295,
       0,   296,   297,     0,     1,     0,     0,     2,     3,     4,
       5,     6,     0,     0,   307,     7,     0,     8,     9,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
     114,     0,     0,     2,     3,     4,     5,     6,     0,     0,
       0,     7,     0,     8,     9,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,     2,     3,     4,     5,
       6,     0,     0,     0,     7,   103,     8,     9,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,     2,
       3,     4,     5,     6,     0,     0,     0,     7,   157,     8,
       9,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,     2,     3,     4,     5,     6,     0,     0,     0,
       7,     0,     8,     9,     0,     0,     0,     0,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    70,    71,    72,     0,    73,
       0,    74,    75,    76,    77,    78,    79,    80,    81,    82,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    84,    85,    86,    87,     0,
       0,    88,     0,    89,    90
  };

  const short int
  pgsParser::yycheck_[] =
  {
       6,    58,     8,     9,    92,    16,    17,    18,    33,    20,
      86,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      94,    95,    16,    17,    18,    86,    20,    38,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   102,    31,    32,
      93,    93,    93,   100,    38,   102,   102,   104,   101,   101,
     101,    93,   144,   145,    83,    93,    93,   102,   102,   101,
      89,    90,    93,   101,   101,    90,    77,   150,   151,   152,
     101,    93,    93,     0,   102,    86,    87,    88,    89,   101,
     101,    92,    88,    94,    95,    21,    22,    23,    24,    93,
      90,    93,    86,    87,    88,    89,   125,   101,    92,   101,
      94,    95,    93,    93,    92,    92,    99,   100,    93,    93,
     101,   101,   141,   142,   143,    92,   101,   101,   124,    92,
     126,   127,   128,   129,   130,   131,   132,   133,   134,    92,
     136,    93,    93,    93,    92,   101,    92,   194,   104,   101,
     101,   101,    92,   146,   147,   148,   149,    96,    97,    98,
      33,    34,    35,   159,   160,    92,    36,    92,    92,    92,
      92,    37,    86,   101,   103,    86,    86,    93,    93,     8,
     101,    90,    86,    10,    86,    93,    93,    93,   101,   101,
      33,   153,     7,    91,    91,    90,   101,    91,   101,   195,
     101,   101,   101,    90,    93,   101,   163,    93,    93,    91,
      91,   207,   208,   209,    93,   211,    93,   213,   214,   215,
     216,   217,    93,   154,    93,    93,    93,   159,    93,    93,
      -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   238,    -1,   240,    -1,    -1,    -1,   244,   245,
      -1,   247,    -1,    -1,   250,    -1,   252,    -1,   254,    -1,
     256,    -1,   258,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   273,    -1,   275,
      -1,   277,    -1,   279,    -1,   281,    -1,   283,    -1,   285,
      -1,   287,   288,    -1,     0,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,   300,    11,    -1,    13,    14,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
       0,    -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    14,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    16,    17,    18,    -1,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    -1,
      -1,    92,    -1,    94,    95
  };

  const unsigned char
  pgsParser::yystos_[] =
  {
       0,     0,     3,     4,     5,     6,     7,    11,    13,    14,
      19,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,   118,   119,   120,
     121,   122,   123,   124,   127,   130,   131,   132,   133,   135,
      16,    17,    18,    20,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    38,    86,    87,    88,    89,    92,    94,
      95,   106,   107,   108,   110,   111,   112,   113,   114,   115,
     116,   117,   116,    12,   119,   116,   116,    92,    86,   128,
     129,    86,   125,   126,     0,   118,   102,   102,   102,   102,
     102,     0,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,   108,    90,    77,   116,   108,
     108,    96,    97,    98,    94,    95,    31,    32,    99,   100,
      33,    34,    35,    36,    37,   118,   118,    12,    86,    33,
      90,   101,   103,   101,    86,    86,   116,   108,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,    93,    93,
     108,   108,   108,   110,   110,   111,   111,   111,   111,   112,
     112,   112,   113,   114,     8,    90,   116,   122,   116,   129,
      86,   134,   126,    93,    93,    93,    10,   101,   101,   101,
      93,   101,    93,   101,   101,   101,   101,   101,    91,   118,
     116,    91,   101,   104,    21,    22,    23,    24,   109,   116,
     116,   116,   116,   116,   116,   116,   116,   116,    90,    91,
      90,    86,    93,    93,   101,   101,    93,   101,    93,    93,
     101,    93,   101,    93,   101,    93,   101,    93,   101,   116,
      93,   116,   116,   116,   116,   116,   116,   116,   116,   116,
      91,    91,    93,   101,    93,   101,    93,   101,    93,   101,
      93,   101,    93,   101,    93,   101,    93,   101,    33,   116,
     116,   116,   116,   116,   116,   116,   116,   116,    93,    93,
     101,    93,    93,    93,    93,    93,    93,   116,    93
  };

  const unsigned char
  pgsParser::yyr1_[] =
  {
       0,   105,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   107,   107,   107,   107,   108,   108,
     109,   109,   109,   109,   110,   110,   110,   110,   111,   111,
     111,   112,   112,   112,   112,   112,   113,   113,   113,   113,
     114,   114,   115,   115,   116,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   118,   118,   118,   118,   118,   118,   118,   118,
     119,   119,   120,   120,   121,   122,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     124,   125,   125,   126,   126,   127,   128,   128,   129,   129,
     129,   130,   130,   131,   132,   132,   132,   133,   133,   133,
     134,   134,   135,   135
  };

  const unsigned char
  pgsParser::yyr2_[] =
  {
       0,     2,     7,     4,     4,     4,     4,     1,     1,     1,
       1,     3,     1,     3,     1,     2,     2,     2,     1,     6,
       1,     1,     1,     1,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     3,
       1,     3,     1,     3,     1,     6,     8,    10,     8,    10,
      12,     6,     8,    10,     4,     6,     4,     6,     8,    10,
       6,     8,    10,     6,     8,    10,     6,     8,    10,     6,
       8,    10,     1,     1,     1,     2,     2,     2,     2,     2,
       1,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     3,     1,     4,     2,     1,     3,     3,     9,
       3,     3,     5,     3,     1,     1,     1,     2,     2,     7,
       1,     3,     1,     2
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const pgsParser::yytname_[] =
  {
  "\"END OF FILE\"", "error", "$undefined", "\"WHILE\"", "\"BREAK\"",
  "\"RETURN\"", "\"CONTINUE\"", "\"IF\"", "\"ELSE\"", "\"WAITFOR\"",
  "\"AS\"", "\"BEGIN (BLOCK)\"", "\"END (BLOCK)\"", "\"ASSERT\"",
  "\"PRINT\"", "\"LOG\"", "\"COLUMNS\"", "\"LINES\"", "\"TRIM\"",
  "\"RMLINE\"", "\"CAST\"", "\"RECORD\"", "\"INTEGER\"", "\"REAL\"",
  "\"STRING\"", "\"REGEX\"", "\"FILE\"", "\"DATE\"", "\"TIME\"",
  "\"DATETIME\"", "\"REFERENCE\"", "\"<=\"", "\">=\"", "\"=\"", "\"~=\"",
  "\"<>\"", "\"AND\"", "\"OR\"", "\"NOT\"", "\"character\"",
  "\"SET @VARIABLE\"", "\"DECLARE @VARIABLE\"", "\"ABORT\"", "\"ALTER\"",
  "\"ANALYZE\"", "\"BEGIN\"", "\"CHECKPOINT\"", "\"CLOSE\"", "\"CLUSTER\"",
  "\"COMMENT\"", "\"COMMIT\"", "\"COPY\"", "\"CREATE\"", "\"DEALLOCATE\"",
  "\"DECLARE\"", "\"DELETE\"", "\"DISCARD\"", "\"DROP\"", "\"END\"",
  "\"EXECUTE\"", "\"EXPLAIN\"", "\"FETCH\"", "\"GRANT\"", "\"INSERT\"",
  "\"LISTEN\"", "\"LOAD\"", "\"LOCK\"", "\"MOVE\"", "\"NOTIFY\"",
  "\"PREPARE\"", "\"REASSIGN\"", "\"REINDEX\"", "\"RELEASE\"", "\"RESET\"",
  "\"REVOKE\"", "\"ROLLBACK\"", "\"SAVEPOINT\"", "\"SELECT\"", "\"SET\"",
  "\"SHOW\"", "\"START\"", "\"TRUNCATE\"", "\"UNLISTEN\"", "\"UPDATE\"",
  "\"VACUUM\"", "\"VALUES\"", "\"IDENTIFIER\"", "\"INTEGER VALUE\"",
  "\"REAL VALUE\"", "\"STRING VALUE\"", "'['", "']'", "'('", "')'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'<'", "'>'", "','", "';'", "'{'", "'}'",
  "$accept", "postfix_expression", "unary_expression", "cast_expression",
  "type_name", "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "logical_and_expression",
  "logical_or_expression", "expression", "random_generator", "statement",
  "statement_list", "compound_statement", "sql_statement",
  "sql_expression", "sql_query", "declaration_statement",
  "declaration_list", "declaration_element", "assign_statement",
  "assign_list", "assign_element", "selection_statement",
  "iteration_statement", "jump_statement", "procedure_statement",
  "record_declaration_list", "translation_unit", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
  pgsParser::yyrline_[] =
  {
       0,   271,   271,   278,   285,   291,   297,   303,   309,   315,
     321,   327,   333,   334,   342,   343,   344,   349,   358,   359,
     368,   369,   370,   371,   375,   376,   383,   390,   400,   401,
     408,   418,   419,   426,   433,   440,   450,   451,   458,   465,
     475,   476,   486,   487,   497,   504,   512,   519,   526,   535,
     543,   551,   559,   566,   573,   579,   585,   593,   601,   608,
     615,   623,   630,   637,   645,   652,   659,   667,   674,   681,
     689,   697,   707,   708,   709,   710,   711,   712,   713,   714,
     718,   723,   731,   735,   743,   753,   762,   763,   764,   765,
     766,   767,   768,   769,   770,   771,   772,   773,   774,   775,
     776,   777,   778,   779,   780,   781,   782,   783,   784,   785,
     786,   787,   788,   789,   790,   791,   792,   793,   794,   795,
     796,   797,   798,   799,   800,   801,   802,   803,   804,   805,
     809,   816,   822,   831,   841,   856,   863,   868,   877,   890,
     905,   921,   933,   947,   960,   967,   974,   984,   994,  1003,
    1019,  1023,  1031,  1032
  };

  // Print the state stack on the debug stream.
  void
  pgsParser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  pgsParser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG

  // Symbol number corresponding to token number t.
  inline
  pgsParser::token_number_type
  pgsParser::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
     0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    98,     2,     2,
      92,    93,    96,    94,   101,    95,     2,    97,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   102,
      99,     2,   100,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    90,     2,    91,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   103,     2,   104,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89
    };
    const unsigned int user_token_number_max_ = 344;
    const token_number_type undef_token_ = 2;

    if (static_cast<int>(t) <= yyeof_)
      return yyeof_;
    else if (static_cast<unsigned int> (t) <= user_token_number_max_)
      return translate_table[t];
    else
      return undef_token_;
  }


} // pgscript
#line 3100 "pgscript/parser.tab.cc" // lalr1.cc:1167
#line 1040 "pgscript/pgsParser.yy" // lalr1.cc:1168
 /*** Additional Code ***/

void pgscript::pgsParser::error(const pgsParser::location_type & l,
		const std::string & m)
{
	wxLogScriptVerbose(wxT("EXPR STACK SIZE = %u"), driver.context.size_vars());
	wxLogScriptVerbose(wxT("STMT STACK SIZE = %u"), driver.context.size_stmts());
	driver.context.clear_stacks();
	driver.error(l, wxString(m.c_str(), wxConvUTF8));
}
