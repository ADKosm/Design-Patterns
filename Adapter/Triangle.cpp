//
// Created by alex on 10.08.16.
//

#include "Triangle.h"

Triangle::~Triangle() {
 delete adaptee;
}

void Triangle::Draw() {
    adaptee->PaintMe();
}

Triangle::Triangle(int s) :size(s) {
    adaptee = new TriangleFigure(s, '#');
}

