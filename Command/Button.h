//
// Created by alex on 27.07.16.
//

#ifndef COMMAND_BUTTON_H
#define COMMAND_BUTTON_H

#include "Command.h"

class Button {
public:
    Button(Command * c);
    ~Button();

    void Click();

private:
    Command * action;
};


#endif //COMMAND_BUTTON_H
