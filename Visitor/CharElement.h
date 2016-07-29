//
// Created by alex on 29.07.16.
//

#ifndef VISITOR_CHARELEMENT_H
#define VISITOR_CHARELEMENT_H

#include "Element.h"

class CharElement : public Element {
public:
    CharElement(char c);
    virtual ~CharElement();

    char GetChar();

    virtual void Accept(Visitor *v);

protected:
    char data;
};


#endif //VISITOR_CHARELEMENT_H
