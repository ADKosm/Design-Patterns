//
// Created by alex on 19.07.16.
//

#ifndef DECORATOR_TEXTPRINTER_H
#define DECORATOR_TEXTPRINTER_H

#include "Component.h"


class TextPrinter : public Component {
public:
    TextPrinter(std::string t);
    ~TextPrinter();

    std::string getDescription();

private:
    std::string data;
};


#endif //DECORATOR_TEXTPRINTER_H
