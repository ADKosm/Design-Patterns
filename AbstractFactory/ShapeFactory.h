//
// Created by alex on 22.07.16.
//

#ifndef ABSTRACTFACTORY_ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_ABSTRACTFACTORY_H

#include "Rect.h"
#include "Round.h"

class ShapeFactory {
public:
    virtual ~ShapeFactory(){}

    virtual Rect *CreateRect(unsigned int w, unsigned int h) = 0;
    virtual Round *CreateRound(int r) = 0;

protected:
    ShapeFactory(){}
};


#endif //ABSTRACTFACTORY_ABSTRACTFACTORY_H
