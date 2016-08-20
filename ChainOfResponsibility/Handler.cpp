//
// Created by alex on 20.08.16.
//

#include <iostream>
#include "Handler.h"

Handler::Handler(Handler *s) : successor(s) {
}

Handler::~Handler() {
    delete successor;
}

void Handler::SetSuccessor(Handler *s) {
    successor = s;
}

void Handler::HandleRequest() {
    PassRequest();
}


void Handler::PassRequest() {
    if(successor == nullptr) {
        std::cout << "No handling" << std::endl;
    } else {
        successor->HandleRequest();
    }
}

