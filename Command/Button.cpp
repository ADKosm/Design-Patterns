//
// Created by alex on 27.07.16.
//

#include "Button.h"

Button::Button(Command *c) : action(c) {
}

Button::~Button() {
    delete action;
}

void Button::Click() {
    action->Exec();
}

