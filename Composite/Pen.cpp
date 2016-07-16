//
// Created by alex on 12.07.16.
//

#include "Pen.h"

Pen::Pen(int p) {
    price = p;
}

Pen::~Pen() {}

int Pen::Price() {
    return price;
}

void Pen::Describe() {
    std::cout << "One pen(" << price << "$)";
}