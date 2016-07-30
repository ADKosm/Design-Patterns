//
// Created by alex on 29.07.16.
//

#include "NumberElement.h"
#include "Visitor.h"

NumberElement::NumberElement(int n) : data(n) {
}

NumberElement::~NumberElement() {
}

int NumberElement::GetNumber() {
    return data;
}

void NumberElement::Accept(Visitor *v) {
    v->VisitNumber(this);
}

