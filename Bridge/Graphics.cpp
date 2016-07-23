//
// Created by alex on 23.07.16.
//

#include "Graphics.h"


void Graphics::GDrawRect(int width, int height) {
    for(int i = 0; i < height; i++) {
        GDrawLine(width, '#');
        GNewLine();
    }
}

void Graphics::GDrawTriangle(int width, int height, int peak) {
    double k1 = static_cast<double>(height)/ static_cast<double>(peak);
    double k2 = static_cast<double>(height)/(static_cast<double>(peak)- static_cast<double>(width));
    double b2 = -k2* static_cast<double>(height);
    for(int i = height; i>=0; i--) {
        int one, two, three;
        one = static_cast<double>(i)/k1;
        three = static_cast<double>(width)- static_cast<double>(peak)-(static_cast<double>(i)-b2)/k2;
        two = width-one-three;
        GDrawLine(one, ' ');
        GDrawLine(two, '#');
        GDrawLine(three, ' ');
        GNewLine();
    }
}

