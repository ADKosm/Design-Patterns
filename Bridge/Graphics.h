//
// Created by alex on 23.07.16.
//

#ifndef BRIDGE_GRAPHICS_H
#define BRIDGE_GRAPHICS_H

#include <iostream>

class Graphics { // implementation of graphic
public:
    virtual ~Graphics() {};

    virtual void GDrawLine(int len, char symbol) = 0;
    virtual void GNewLine() = 0;
    virtual void GDrawRect(int width, int height);
    virtual void GDrawTriangle(int width, int height, int peak);

protected:
    Graphics(){}
};


#endif //BRIDGE_GRAPHICS_H
