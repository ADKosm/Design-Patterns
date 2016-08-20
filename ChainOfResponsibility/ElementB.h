//
// Created by alex on 20.08.16.
//

#ifndef CHAINOFRESPONSIBILITY_ELEMENTB_H
#define CHAINOFRESPONSIBILITY_ELEMENTB_H


#include "Element.h"

class ElementB : public Element  {

public:
    ElementB(Handler *s = nullptr);

    virtual ~ElementB() override;

    virtual void HandleRequest() override;
};


#endif //CHAINOFRESPONSIBILITY_ELEMENTB_H
