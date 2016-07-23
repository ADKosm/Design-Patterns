//
// Created by alex on 23.07.16.
//

#ifndef BRIDGE_STREAMSGRAPHICS_H
#define BRIDGE_STREAMSGRAPHICS_H

#include "Graphics.h"

class StreamsGraphics : public Graphics { // implementation based on std::cout
public:
    StreamsGraphics();
    virtual ~StreamsGraphics();

    virtual void GDrawLine(int len, char symbol);
    virtual void GNewLine();
};


#endif //BRIDGE_STREAMSGRAPHICS_H
