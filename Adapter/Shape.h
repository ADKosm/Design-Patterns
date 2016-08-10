//
// Created by alex on 10.08.16.
//

#ifndef ADAPTER_SHAPE_H
#define ADAPTER_SHAPE_H


class Shape {
public:
    virtual ~Shape();

    virtual void Draw() = 0;

protected:
    Shape();
};


#endif //ADAPTER_SHAPE_H
