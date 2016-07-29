//
// Created by alex on 29.07.16.
//

#ifndef VISITOR_NUMBERELEMENT_H
#define VISITOR_NUMBERELEMENT_H

#include "Element.h"

class NumberElement : public Element {
public:
    NumberElement(int n);
    virtual ~NumberElement();

    int GetNumber();

    virtual void Accept(Visitor *v);

protected:
    int data;
};


#endif //VISITOR_NUMBERELEMENT_H
