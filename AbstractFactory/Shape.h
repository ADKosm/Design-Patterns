//
// Created by alex on 22.07.16.
//

#ifndef ABSTRACTFACTORY_SHAPE_H
#define ABSTRACTFACTORY_SHAPE_H

#include <iostream>
#include <string>

class Shape {
public:
    virtual ~Shape(){}

    virtual void Draw() = 0;

protected:
    Shape() {}
};


#endif //ABSTRACTFACTORY_SHAPE_H
