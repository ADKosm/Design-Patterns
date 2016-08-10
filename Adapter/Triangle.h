//
// Created by alex on 10.08.16.
//

#ifndef ADAPTER_TRIANGLEF_H
#define ADAPTER_TRIANGLEF_H

#include "Shape.h"
#include "TriangleFigure.h"

class Triangle : public Shape { // this class is adapter TriangleFigure to Shape

public:
    virtual ~Triangle() override;

    virtual void Draw() override;

    Triangle(int s);

private:
    int size;
    TriangleFigure * adaptee;
};


#endif //ADAPTER_TRIANGLEF_H
