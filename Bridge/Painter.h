//
// Created by alex on 23.07.16.
//

#ifndef BRIDGE_PAINTER_H
#define BRIDGE_PAINTER_H

#include "StreamsGraphics.h"
#include "StringsGraphics.h"

#include <exception>
#include <iostream>

class Painter {
public:
    Painter();
    ~Painter();

    void DrawRect(int width, int height);
    void DrawTriangle(int width, int height, int peak);

private:
    Graphics * impl;
};


#endif //BRIDGE_PAINTER_H
