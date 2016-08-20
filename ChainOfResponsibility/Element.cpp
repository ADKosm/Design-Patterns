//
// Created by alex on 20.08.16.
//

#include <iostream>
#include "Element.h"

Element::Element(Handler *s) : Handler(s) {
}

Element::~Element() {
    for(auto e : data) {
        delete e;
    }
}

void Element::AddElement(Element * e) {
    e->SetSuccessor(this);
    data.push_back(e);
}