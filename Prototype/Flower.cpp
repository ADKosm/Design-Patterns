//
// Created by alex on 01.08.16.
//

#include "Flower.h"

Flower::Flower(char s, std::string desc) : symbol(s), description(desc) {
}

Flower::~Flower() {
}

std::string Flower::GetPicture() {
    auto sheme = GetSheme();
    std::string result;
    for(std::string str : sheme) {
        result += str;
        result += "\n";
    }
    return result;
}

std::string Flower::GetDescription() {
    return description;
}

std::vector<std::string> Flower::GetSheme() {
    std::vector<std::string> result {
            " @ ",
           "\\|/",
            " | "
    };
    result[0][1] = symbol;
    return result;
}


Flower *Flower::Clone() {
    Flower * result = new Flower(symbol, description);
    return result;
}

