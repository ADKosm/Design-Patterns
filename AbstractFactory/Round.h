//
// Created by alex on 22.07.16.
//

#ifndef ABSTRACTFACTORY_ROUND_H
#define ABSTRACTFACTORY_ROUND_H

#include "Shape.h"

class Round : public Shape {
public:
    virtual ~Round();

    virtual void Draw();

protected:
    Round(int r);
    char fill;

private:
    int radius;
};


#endif //ABSTRACTFACTORY_ROUND_H
