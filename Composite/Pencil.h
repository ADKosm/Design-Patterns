//
// Created by alex on 12.07.16.
//

#ifndef COMPOSITE_PENCIL_H
#define COMPOSITE_PENCIL_H

#include "component.h"

class Pencil : public Component {
public:
    Pencil(int);

    virtual ~Pencil();

    virtual int Price();
    virtual void Describe();

private:
    int price;
};


#endif //COMPOSITE_PENCIL_H
