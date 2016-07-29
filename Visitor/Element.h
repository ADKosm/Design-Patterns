//
// Created by alex on 29.07.16.
//

#ifndef VISITOR_ELEMENT_H
#define VISITOR_ELEMENT_H

#include "Visitor.h"

class Visitor;

class Element {
public:
    virtual ~Element() {}

    virtual void Accept(Visitor * v) = 0;

protected:
    Element(){}
};


#endif //VISITOR_ELEMENT_H
