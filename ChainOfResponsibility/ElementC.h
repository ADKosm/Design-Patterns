//
// Created by alex on 20.08.16.
//

#ifndef CHAINOFRESPONSIBILITY_ELEMENTC_H
#define CHAINOFRESPONSIBILITY_ELEMENTC_H


#include "Element.h"

class ElementC : public Element  {

public:
    ElementC(Handler *s = nullptr);
    virtual ~ElementC() override;

};


#endif //CHAINOFRESPONSIBILITY_ELEMENTC_H
