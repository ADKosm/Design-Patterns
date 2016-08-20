//
// Created by alex on 20.08.16.
//

#include <iostream>
#include "ElementB.h"

ElementB::ElementB(Handler *s) : Element(s) {
}

ElementB::~ElementB() {
}

void ElementB::HandleRequest() {
    std::cout << "Hello, now this is Element B! Oh yeah!" << std::endl;
}

