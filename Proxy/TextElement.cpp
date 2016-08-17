//
// Created by alex on 17.08.16.
//

#include "TextElement.h"

TextElement::~TextElement() {
}

void TextElement::Draw() {
    std::cout << data << std::endl;
}

TextElement::TextElement(std::string link) {
    std::ifstream file;
    file.open(link);

    if(file.is_open()) {

        std::string line;

        while(std::getline(file, line)) {
            data += line;
            data += "\n";
        }

        file.close();
    }
}

