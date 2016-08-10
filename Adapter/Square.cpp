//
// Created by alex on 10.08.16.
//

#include "Square.h"
#include "iostream"
#include "string"

Square::~Square() {
}

void Square::Draw() {
    std::string side;
    for(int i = 0; i < size; i++) side += '#';
    for(int i = 0; i < size; i++) std::cout << side << std::endl;
}

Square::Square(int s) : size(s) {
}

