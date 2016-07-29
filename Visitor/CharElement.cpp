//
// Created by alex on 29.07.16.
//

#include "CharElement.h"

CharElement::CharElement(char c) : data(c) {
}

CharElement::~CharElement() {
}

char CharElement::GetChar() {
    return data;
}

void CharElement::Accept(Visitor *v) {
    v->VisitChar(this);
}

