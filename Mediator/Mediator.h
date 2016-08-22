//
// Created by alex on 23.08.16.
//

#ifndef MEDIATOR_MEDIATOR_H
#define MEDIATOR_MEDIATOR_H

#include "WoodTool.h"
#include "Watering.h"

class WoodTool;

class Tree;
class Watering;
class Axe;

class Mediator {
public:
    Mediator();
    ~Mediator();

    void WoodToolChanged(WoodTool * e);

    Tree* GetTree();
    Axe* GetAxe();
    Watering* GetWatering();

private:
    Tree* tree;
    Axe* axe;
    Watering* watering;
};


#endif //MEDIATOR_MEDIATOR_H
