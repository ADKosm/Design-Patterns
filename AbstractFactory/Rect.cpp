//
// Created by alex on 22.07.16.
//

#include "Rect.h"

void Rect::Draw() {
    std::string temp;
    for(size_t i = 0; i < width; i++) {
        temp += fill;
    }
    for(size_t i = 0; i < height; i++) {
        std::cout << temp << std::endl;
    }
}

Rect::~Rect() {
}

Rect::Rect(unsigned int w, unsigned int h)  : width(w), height(h) {
}





