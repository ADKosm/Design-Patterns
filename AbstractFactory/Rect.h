//
// Created by alex on 22.07.16.
//

#ifndef ABSTRACTFACTORY_RECT_H
#define ABSTRACTFACTORY_RECT_H

#include "Shape.h"

class Rect : public Shape {
public:
    virtual ~Rect();

    virtual void Draw();

protected:
    Rect(unsigned int w, unsigned int h);
    char fill;

private:
    unsigned int width;
    unsigned int height;
};


#endif //ABSTRACTFACTORY_RECT_H
