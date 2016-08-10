//
// Created by alex on 10.08.16.
//

#ifndef ADAPTER_SEPARATOR_H
#define ADAPTER_SEPARATOR_H

#include "Shape.h"

class Separator : public Shape{

public:
    Separator();

    virtual ~Separator() override;

    virtual void Draw() override;
};


#endif //ADAPTER_SEPARATOR_H
