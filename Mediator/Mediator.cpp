//
// Created by alex on 23.08.16.
//

#include <iostream>
#include "Mediator.h"
#include "Tree.h"
#include "Axe.h"
#include "Watering.h"

Mediator::Mediator() {
    tree = new Tree(this);
    axe = new Axe(this);
    watering = new Watering(this);
}

Mediator::~Mediator() {
    delete tree;
    delete axe;
    delete watering;
}

void Mediator::WoodToolChanged(WoodTool *e) {
    if(e == tree) {
        std::cout << "The tree is grow" << std::endl;
    } else if(e == axe) {
        tree->Fell();
    } else if(e == watering) {
        tree->Grow();
    } else {
        std::cout << "Unknown tool" << std::endl;
    }
}


Tree *Mediator::GetTree() {
    return tree;
}

Axe *Mediator::GetAxe() {
    return axe;
}

Watering *Mediator::GetWatering() {
    return watering;
}

