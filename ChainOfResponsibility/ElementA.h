//
// Created by alex on 20.08.16.
//

#ifndef CHAINOFRESPONSIBILITY_ELEMENTA_H
#define CHAINOFRESPONSIBILITY_ELEMENTA_H

#include "Element.h"

class ElementA : public Element {

public:
    ElementA(Handler *s = nullptr);

    virtual ~ElementA() override;

    virtual void HandleRequest() override;
};


#endif //CHAINOFRESPONSIBILITY_ELEMENTA_H
