//
// Created by alex on 12.07.16.
//

#ifndef COMPOSITE_PEN_H
#define COMPOSITE_PEN_H

#include "component.h"

class Pen : public Component {
public:
    Pen(int);

    virtual ~Pen();

    virtual int Price();
    virtual void Describe();
private:
    int price;
};


#endif //COMPOSITE_PEN_H
