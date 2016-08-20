//
// Created by alex on 20.08.16.
//

#include <iostream>
#include "ElementA.h"

ElementA::ElementA(Handler *s) : Element(s) {
}

ElementA::~ElementA() {
}

void ElementA::HandleRequest() {
    std::cout << "Hello, I am Element A!" << std::endl;
}

