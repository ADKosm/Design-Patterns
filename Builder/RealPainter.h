//
// Created by alex on 30.07.16.
//

#ifndef PAINTER_REALPAINTER_H
#define PAINTER_REALPAINTER_H

#include "Painter.h"
#include <string>
#include <vector>

class RealPainter : public Painter {

public:
    RealPainter();
    virtual ~RealPainter() override;

    virtual void PreparePicture(int w, int h) override;
    virtual void DrawHouse(int x, int y) override;
    virtual void DrawFlower(int x, int y) override;

    std::string GetPicture();

private:
    std::vector<std::string> holst;
};


#endif //PAINTER_REALPAINTER_H
