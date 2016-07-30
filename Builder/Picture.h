//
// Created by alex on 30.07.16.
//

#ifndef BUILDER_PICTURE_H
#define BUILDER_PICTURE_H

#include <string>
#include <iostream>

#include "RealPainter.h"

class Picture {
public:
    Picture();
    ~Picture();

    void CreatePicture(Painter * b);

    void DrawPicture(RealPainter *p);

private:
    std::string data;
};


#endif //BUILDER_PICTURE_H
