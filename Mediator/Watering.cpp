//
// Created by alex on 23.08.16.
//

#include <iostream>
#include "Watering.h"

Watering::~Watering() {
}


void Watering::Water() {
    std::cout << "Watering the tree" << std::endl;
    Changed();
}

Watering::Watering(Mediator *m) : WoodTool(m) {

}

