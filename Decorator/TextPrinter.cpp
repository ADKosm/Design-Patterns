//
// Created by alex on 19.07.16.
//

#include "TextPrinter.h"

TextPrinter::TextPrinter(std::string t) : data(t) {
}

TextPrinter::~TextPrinter() {
}

std::string TextPrinter::getDescription() {
    return data;
}



