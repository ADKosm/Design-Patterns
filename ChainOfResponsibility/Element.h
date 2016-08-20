//
// Created by alex on 20.08.16.
//

#ifndef CHAINOFRESPONSIBILITY_ELEMENT_H
#define CHAINOFRESPONSIBILITY_ELEMENT_H

#include <vector>
#include "Handler.h"

class Element : public Handler {
public:
    Element(Handler *s);
    virtual ~Element() override;

    void AddElement(Element *);

private:
    std::vector<Element*> data;
};


#endif //CHAINOFRESPONSIBILITY_ELEMENT_H
