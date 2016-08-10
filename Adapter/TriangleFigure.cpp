//
// Created by alex on 10.08.16.
//

#include "TriangleFigure.h"
#include "string"
#include "iostream"

TriangleFigure::~TriangleFigure() {
}

void TriangleFigure::PaintMe() {
    for(int i = 0; i < size; i++) {
        std::string temp;
        for(int j = 0; j <= i; j++) {
            temp += symb;
        }
        for(int j = i; j<size; j++) {
            temp += ' ';
        }
        std::cout << temp << std::endl;
    }
}

TriangleFigure::TriangleFigure(int s, char sym) : size(s), symb(sym) {
}

