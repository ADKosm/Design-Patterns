//
// Created by alex on 23.08.16.
//

#ifndef MEDIATOR_WATERING_H
#define MEDIATOR_WATERING_H

#include "WoodTool.h"

class Watering : public WoodTool {

public:
    virtual ~Watering() override;

    void Water();

    Watering(Mediator *m);
};


#endif //MEDIATOR_WATERING_H
