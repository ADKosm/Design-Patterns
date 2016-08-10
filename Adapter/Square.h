//
// Created by alex on 10.08.16.
//

#ifndef ADAPTER_SQUARE_H
#define ADAPTER_SQUARE_H

#include "Shape.h"

class Square : public Shape {
public:
    Square(int s);
    virtual ~Square() override;

    virtual void Draw() override;

private:
    int size;
};


#endif //ADAPTER_SQUARE_H
