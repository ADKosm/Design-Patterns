//
// Created by alex on 23.07.16.
//

#ifndef BRIDGE_STRINGSGRAPHICS_H
#define BRIDGE_STRINGSGRAPHICS_H

#include <string>
#include "Graphics.h"

class StringsGraphics : public Graphics { // implementations based on std::string
public:
    StringsGraphics();
    virtual ~StringsGraphics();

    virtual void GDrawLine(int len, char symbol);
    virtual void GNewLine();
};


#endif //BRIDGE_STRINGSGRAPHICS_H
