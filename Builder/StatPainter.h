//
// Created by alex on 30.07.16.
//

#ifndef PAINTER_STATPAINTER_H
#define PAINTER_STATPAINTER_H

#include "Painter.h"
#include <string>
#include <iostream>

class StatPainter : public Painter {

public:
    StatPainter();
    virtual ~StatPainter() override;

    virtual void PreparePicture(int w, int h) override;
    virtual void DrawHouse(int x, int y) override;
    virtual void DrawFlower(int x, int y) override;

    void GetStat();
private:
    int houseCount;
    int flowerCount;
    int width;
    int height;
};


#endif //PAINTER_STATPAINTER_H
