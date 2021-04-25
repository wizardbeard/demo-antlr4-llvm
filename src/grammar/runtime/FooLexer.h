
// Generated from /Users/qtmsheep/Development/dev-day-language/src/grammar/FooLexer.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  FooLexer : public antlr4::Lexer {
public:
  enum {
    Add = 1, Sub = 2, Mul = 3, Div = 4, Mod = 5, Equal = 6, OpeningParen = 7, 
    ClosingParen = 8, OpeningBrace = 9, ClosingBrace = 10, OpeningBracket = 11, 
    ClosingBracket = 12, VariableDeclarator = 13, Print = 14, If = 15, While = 16, 
    Comma = 17, InstructionsSeparator = 18, VariableName = 19, StringLiteral = 20, 
    CharLiteral = 21, DecimalLiteral = 22, ZeroLiteral = 23, HexadecimalLiteral = 24, 
    BinaryLiteral = 25, Comment = 26, WhiteSpace = 27, LineTerminator = 28
  };

  explicit FooLexer(antlr4::CharStream *input);
  ~FooLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

