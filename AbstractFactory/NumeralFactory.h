//
// Created by alex on 22.07.16.
//

#ifndef ABSTRACTFACTORY_NUMERALFACTORY_H
#define ABSTRACTFACTORY_NUMERALFACTORY_H

#include "ShapeFactory.h"
#include "NumeralRect.h"
#include "NumeralRound.h"

class NumeralFactory : public ShapeFactory {
public:
    NumeralFactory();
    ~NumeralFactory();

    Rect *CreateRect(unsigned int w, unsigned int h);
    Round *CreateRound(int r);
};


#endif //ABSTRACTFACTORY_NUMERALFACTORY_H
