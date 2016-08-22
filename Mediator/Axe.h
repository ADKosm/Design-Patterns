//
// Created by alex on 23.08.16.
//

#ifndef MEDIATOR_AXE_H
#define MEDIATOR_AXE_H

#include "WoodTool.h"

class Axe : public WoodTool {

public:
    virtual ~Axe() override;

    void Cut();

    Axe(Mediator *m);
};


#endif //MEDIATOR_AXE_H
