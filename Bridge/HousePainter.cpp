//
// Created by alex on 23.07.16.
//

#include "HousePainter.h"


void HousePainter::DrawHouse(int width, int base_height, int roof_height, int peak) {
    Painter::DrawTriangle(width, roof_height, peak);
    Painter::DrawRect(width, base_height);
}

