//
// Created by alex on 23.07.16.
//

#include "Painter.h"

Painter::Painter() {
    std::cout << "Use (1) Strings or (2) Streams implementation of graphic?" << std::endl;
    int decide;
    std::cin >> decide;
    if(decide == 1) {
        impl = new StreamsGraphics();
    } else if(decide == 2) {
        impl = new StringsGraphics();
    } else {
        throw std::invalid_argument("Agrument must be only 1 or 2!");
    }
}

Painter::~Painter() {
    delete impl;
}

void Painter::DrawRect(int width, int height) {
    impl->GDrawRect(width, height);
}

void Painter::DrawTriangle(int width, int height, int peak) {
    impl->GDrawTriangle(width, height, peak);
}

