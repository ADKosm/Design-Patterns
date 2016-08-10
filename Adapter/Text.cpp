//
// Created by alex on 10.08.16.
//

#include "Text.h"

Text::~Text() {
}

void Text::Draw() {
    std::cout << text << std::endl;
}

Text::Text(std::string a) : text(a)  {
}

