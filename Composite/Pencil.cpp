//
// Created by alex on 12.07.16.
//

#include "Pencil.h"

int Pencil::Price() {
    return price;
}

void Pencil::Describe() {
    std::cout << "One pencil(" << price << "$)";
}

Pencil::Pencil(int p) {
    price = p;
}

Pencil::~Pencil() {}
