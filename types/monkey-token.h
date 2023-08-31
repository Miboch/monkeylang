//
// Created by mc on 30/08/2023.
//

#include <string>
#include <utility>

#ifndef MONKEYLANG_MONKEY_TOKEN_H
#define MONKEYLANG_MONKEY_TOKEN_H
enum MonkeyTokenType {
    UNKNOWN,
    END,
    IDENT,
    INT,
    ASSIGN,
    PLUS,
    COMMA,
    SEMICOLON,
    LPAREN,
    RPAREN,
    LBRACE,
    RBRACE,
    FUNC,
    LET
};

struct MonkeyToken {
    std::string literal;
    MonkeyTokenType tokenType;

    MonkeyToken(std::string lit) :
            literal(lit),
            tokenType(MonkeyToken::getType(lit)) {}

    static MonkeyTokenType getType(std::string &symbol) {
        if (symbol == "UNKNOWN") return UNKNOWN;
        if (symbol == "EOF") return END;
        if (symbol == "IDENT") return IDENT;
        if (symbol == "INT") return INT;
        if (symbol == "=") return ASSIGN;
        if (symbol == "+") return PLUS;
        if (symbol == ",") return COMMA;
        if (symbol == ";") return SEMICOLON;
        if (symbol == "(") return LPAREN;
        if (symbol == ")") return RPAREN;
        if (symbol == "{") return LBRACE;
        if (symbol == "}") return RBRACE;
        if (symbol == "FUNCTION") return FUNC;
        if (symbol == "LET") return LET;

        return UNKNOWN; // Default case
    }
};

static std::string getSymbol(MonkeyTokenType token);


#endif //MONKEYLANG_MONKEY_TOKEN_H
