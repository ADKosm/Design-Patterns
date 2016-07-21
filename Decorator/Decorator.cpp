//
// Created by alex on 21.07.16.
//


#include "Decorator.h"

Decorator::Decorator(Component *c) : comp(c) {
}

Decorator::~Decorator() {
    delete comp;
}

std::string Decorator::getDescription() {
    return comp->getDescription();
}