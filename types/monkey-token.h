//
// Created by mc on 30/08/2023.
//

#include <string>
#include <utility>

#ifndef MONKEYLANG_MONKEY_TOKEN_H
#define MONKEYLANG_MONKEY_TOKEN_H

struct MonkeyToken {
    std::string literal;
    std::string type;

    MonkeyToken(std::string literal, std::string type) : literal(literal), type(type) {}
};

const std::string bob = "BOB";

#endif //MONKEYLANG_MONKEY_TOKEN_H
