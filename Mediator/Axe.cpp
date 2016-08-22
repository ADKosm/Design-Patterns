//
// Created by alex on 23.08.16.
//

#include <iostream>
#include "Axe.h"

Axe::~Axe() {

}

void Axe::Cut() {
    std::cout << "Cutting the tree" << std::endl;
    Changed();
}

Axe::Axe(Mediator *m) : WoodTool(m) {

}

