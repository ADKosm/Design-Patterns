//
// Created by alex on 23.07.16.
//

#ifndef BRIDGE_HOUSEPAINTER_H
#define BRIDGE_HOUSEPAINTER_H

#include "Painter.h"

class HousePainter : public Painter {
public:
    void DrawHouse(int width, int base_height, int roof_height, int peak);
};


#endif //BRIDGE_HOUSEPAINTER_H
