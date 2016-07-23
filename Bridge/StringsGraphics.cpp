//
// Created by alex on 23.07.16.
//

#include "StringsGraphics.h"

StringsGraphics::StringsGraphics() {
}

StringsGraphics::~StringsGraphics() {
}

void StringsGraphics::GDrawLine(int len, char symbol) {
    std::string temp;
    for(size_t i = 0; i < len; i++) {
        temp += symbol;
    }
    std::cout << temp;
}

void StringsGraphics::GNewLine() {
    std::string temp("\n");
    std::cout << temp;
}

