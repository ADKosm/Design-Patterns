//
// Created by alex on 31.07.16.
//

#ifndef FACTORY_METHOD_DIALOG_H
#define FACTORY_METHOD_DIALOG_H

#include <iostream>
#include <string>

class Dialog {
public:
    virtual ~Dialog();

    virtual std::string AskUserName() = 0;
protected:
    Dialog();
};


#endif //FACTORY_METHOD_DIALOG_H
