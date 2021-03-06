
// Generated from E:\VSProjects\MyScript\MyScript\MyScript.g4 by ANTLR 4.7


#include "MyScriptListener.h"
#include "MyScriptVisitor.h"

#include "MyScriptParser.h"


using namespace antlrcpp;
using namespace antlr4;

MyScriptParser::MyScriptParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

MyScriptParser::~MyScriptParser() {
  delete _interpreter;
}

std::string MyScriptParser::getGrammarFileName() const {
  return "MyScript.g4";
}

const std::vector<std::string>& MyScriptParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& MyScriptParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- StartContext ------------------------------------------------------------------

MyScriptParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyScriptParser::ExprsContext* MyScriptParser::StartContext::exprs() {
  return getRuleContext<MyScriptParser::ExprsContext>(0);
}


size_t MyScriptParser::StartContext::getRuleIndex() const {
  return MyScriptParser::RuleStart;
}

void MyScriptParser::StartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStart(this);
}

void MyScriptParser::StartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStart(this);
}


antlrcpp::Any MyScriptParser::StartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyScriptVisitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}

MyScriptParser::StartContext* MyScriptParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, MyScriptParser::RuleStart);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(12);
    exprs();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprsContext ------------------------------------------------------------------

MyScriptParser::ExprsContext::ExprsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyScriptParser::ExprContext *> MyScriptParser::ExprsContext::expr() {
  return getRuleContexts<MyScriptParser::ExprContext>();
}

MyScriptParser::ExprContext* MyScriptParser::ExprsContext::expr(size_t i) {
  return getRuleContext<MyScriptParser::ExprContext>(i);
}


size_t MyScriptParser::ExprsContext::getRuleIndex() const {
  return MyScriptParser::RuleExprs;
}

void MyScriptParser::ExprsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprs(this);
}

void MyScriptParser::ExprsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprs(this);
}


antlrcpp::Any MyScriptParser::ExprsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyScriptVisitor*>(visitor))
    return parserVisitor->visitExprs(this);
  else
    return visitor->visitChildren(this);
}

MyScriptParser::ExprsContext* MyScriptParser::exprs() {
  ExprsContext *_localctx = _tracker.createInstance<ExprsContext>(_ctx, getState());
  enterRule(_localctx, 2, MyScriptParser::RuleExprs);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(15); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(14);
      expr();
      setState(17); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyScriptParser::T__0)
      | (1ULL << MyScriptParser::T__1)
      | (1ULL << MyScriptParser::ID)
      | (1ULL << MyScriptParser::STRING)
      | (1ULL << MyScriptParser::NUM))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

MyScriptParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyScriptParser::AtomContext* MyScriptParser::ExprContext::atom() {
  return getRuleContext<MyScriptParser::AtomContext>(0);
}

MyScriptParser::ListContext* MyScriptParser::ExprContext::list() {
  return getRuleContext<MyScriptParser::ListContext>(0);
}

MyScriptParser::QuoteContext* MyScriptParser::ExprContext::quote() {
  return getRuleContext<MyScriptParser::QuoteContext>(0);
}


size_t MyScriptParser::ExprContext::getRuleIndex() const {
  return MyScriptParser::RuleExpr;
}

void MyScriptParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void MyScriptParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


antlrcpp::Any MyScriptParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyScriptVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

MyScriptParser::ExprContext* MyScriptParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 4, MyScriptParser::RuleExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(22);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyScriptParser::ID:
      case MyScriptParser::STRING:
      case MyScriptParser::NUM: {
        enterOuterAlt(_localctx, 1);
        setState(19);
        atom();
        break;
      }

      case MyScriptParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(20);
        list();
        break;
      }

      case MyScriptParser::T__0: {
        enterOuterAlt(_localctx, 3);
        setState(21);
        quote();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuoteContext ------------------------------------------------------------------

MyScriptParser::QuoteContext::QuoteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyScriptParser::AtomContext* MyScriptParser::QuoteContext::atom() {
  return getRuleContext<MyScriptParser::AtomContext>(0);
}

MyScriptParser::ListContext* MyScriptParser::QuoteContext::list() {
  return getRuleContext<MyScriptParser::ListContext>(0);
}


size_t MyScriptParser::QuoteContext::getRuleIndex() const {
  return MyScriptParser::RuleQuote;
}

void MyScriptParser::QuoteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuote(this);
}

void MyScriptParser::QuoteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuote(this);
}


antlrcpp::Any MyScriptParser::QuoteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyScriptVisitor*>(visitor))
    return parserVisitor->visitQuote(this);
  else
    return visitor->visitChildren(this);
}

MyScriptParser::QuoteContext* MyScriptParser::quote() {
  QuoteContext *_localctx = _tracker.createInstance<QuoteContext>(_ctx, getState());
  enterRule(_localctx, 6, MyScriptParser::RuleQuote);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(28);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(24);
      match(MyScriptParser::T__0);
      setState(25);
      atom();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(26);
      match(MyScriptParser::T__0);
      setState(27);
      list();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ListContext ------------------------------------------------------------------

MyScriptParser::ListContext::ListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyScriptParser::ExprsContext* MyScriptParser::ListContext::exprs() {
  return getRuleContext<MyScriptParser::ExprsContext>(0);
}


size_t MyScriptParser::ListContext::getRuleIndex() const {
  return MyScriptParser::RuleList;
}

void MyScriptParser::ListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList(this);
}

void MyScriptParser::ListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList(this);
}


antlrcpp::Any MyScriptParser::ListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyScriptVisitor*>(visitor))
    return parserVisitor->visitList(this);
  else
    return visitor->visitChildren(this);
}

MyScriptParser::ListContext* MyScriptParser::list() {
  ListContext *_localctx = _tracker.createInstance<ListContext>(_ctx, getState());
  enterRule(_localctx, 8, MyScriptParser::RuleList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(36);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(30);
      match(MyScriptParser::T__1);
      setState(31);
      match(MyScriptParser::T__2);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(32);
      match(MyScriptParser::T__1);
      setState(33);
      exprs();
      setState(34);
      match(MyScriptParser::T__2);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

MyScriptParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyScriptParser::AtomContext::ID() {
  return getToken(MyScriptParser::ID, 0);
}

tree::TerminalNode* MyScriptParser::AtomContext::NUM() {
  return getToken(MyScriptParser::NUM, 0);
}

tree::TerminalNode* MyScriptParser::AtomContext::STRING() {
  return getToken(MyScriptParser::STRING, 0);
}


size_t MyScriptParser::AtomContext::getRuleIndex() const {
  return MyScriptParser::RuleAtom;
}

void MyScriptParser::AtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom(this);
}

void MyScriptParser::AtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom(this);
}


antlrcpp::Any MyScriptParser::AtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyScriptVisitor*>(visitor))
    return parserVisitor->visitAtom(this);
  else
    return visitor->visitChildren(this);
}

MyScriptParser::AtomContext* MyScriptParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 10, MyScriptParser::RuleAtom);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(38);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyScriptParser::ID)
      | (1ULL << MyScriptParser::STRING)
      | (1ULL << MyScriptParser::NUM))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> MyScriptParser::_decisionToDFA;
atn::PredictionContextCache MyScriptParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN MyScriptParser::_atn;
std::vector<uint16_t> MyScriptParser::_serializedATN;

std::vector<std::string> MyScriptParser::_ruleNames = {
  "start", "exprs", "expr", "quote", "list", "atom"
};

std::vector<std::string> MyScriptParser::_literalNames = {
  "", "'''", "'('", "')'"
};

std::vector<std::string> MyScriptParser::_symbolicNames = {
  "", "", "", "", "WS", "LINE_COMMENT", "COMMENT", "ID", "STRING", "NUM"
};

dfa::Vocabulary MyScriptParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> MyScriptParser::_tokenNames;

MyScriptParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0xb, 0x2b, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x3, 0x6, 0x3, 0x12, 0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 
    0x13, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x19, 0xa, 0x4, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x1f, 0xa, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x27, 0xa, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x2, 0x2, 0x8, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0x2, 0x3, 0x3, 0x2, 0x9, 0xb, 0x2, 0x29, 0x2, 0xe, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x11, 0x3, 0x2, 0x2, 0x2, 0x6, 0x18, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0x1e, 0x3, 0x2, 0x2, 0x2, 0xa, 0x26, 0x3, 0x2, 0x2, 0x2, 0xc, 0x28, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0xf, 0x5, 0x4, 0x3, 0x2, 0xf, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x12, 0x5, 0x6, 0x4, 0x2, 0x11, 0x10, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x13, 0x3, 0x2, 0x2, 0x2, 0x13, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x13, 0x14, 0x3, 0x2, 0x2, 0x2, 0x14, 0x5, 0x3, 0x2, 0x2, 0x2, 0x15, 
    0x19, 0x5, 0xc, 0x7, 0x2, 0x16, 0x19, 0x5, 0xa, 0x6, 0x2, 0x17, 0x19, 
    0x5, 0x8, 0x5, 0x2, 0x18, 0x15, 0x3, 0x2, 0x2, 0x2, 0x18, 0x16, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0x17, 0x3, 0x2, 0x2, 0x2, 0x19, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0x1b, 0x7, 0x3, 0x2, 0x2, 0x1b, 0x1f, 0x5, 0xc, 0x7, 
    0x2, 0x1c, 0x1d, 0x7, 0x3, 0x2, 0x2, 0x1d, 0x1f, 0x5, 0xa, 0x6, 0x2, 
    0x1e, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1f, 
    0x9, 0x3, 0x2, 0x2, 0x2, 0x20, 0x21, 0x7, 0x4, 0x2, 0x2, 0x21, 0x27, 
    0x7, 0x5, 0x2, 0x2, 0x22, 0x23, 0x7, 0x4, 0x2, 0x2, 0x23, 0x24, 0x5, 
    0x4, 0x3, 0x2, 0x24, 0x25, 0x7, 0x5, 0x2, 0x2, 0x25, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x26, 0x20, 0x3, 0x2, 0x2, 0x2, 0x26, 0x22, 0x3, 0x2, 0x2, 
    0x2, 0x27, 0xb, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x9, 0x2, 0x2, 0x2, 
    0x29, 0xd, 0x3, 0x2, 0x2, 0x2, 0x6, 0x13, 0x18, 0x1e, 0x26, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

MyScriptParser::Initializer MyScriptParser::_init;
