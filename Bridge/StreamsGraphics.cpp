//
// Created by alex on 23.07.16.
//

#include "StreamsGraphics.h"

StreamsGraphics::StreamsGraphics() {
}

StreamsGraphics::~StreamsGraphics() {
}

void StreamsGraphics::GDrawLine(int len, char symbol) {
    for(size_t i = 0; i < len; i++) {
        std::cout << symbol;
    }
}

void StreamsGraphics::GNewLine() {
    std::cout << std::endl;
}

