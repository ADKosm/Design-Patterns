//
// Created by alex on 10.08.16.
//

#ifndef ADAPTER_TRIANGLE_H
#define ADAPTER_TRIANGLE_H

class TriangleFigure{ // this class can be from another library and offer implementation of drawing triangle
public:
    TriangleFigure(int s, char sym);
    ~TriangleFigure();

    void PaintMe();

private:
    int size;
    char symb;
};


#endif //ADAPTER_TRIANGLE_H
