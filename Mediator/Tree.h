//
// Created by alex on 23.08.16.
//

#ifndef MEDIATOR_TREE_H
#define MEDIATOR_TREE_H

#include "WoodTool.h"

class Tree : public WoodTool {

public:
    virtual ~Tree() override;

    Tree(Mediator *m);

    void Grow();
    void Fell();

private:
    int height;
};


#endif //MEDIATOR_TREE_H
