//
// Created by alex on 23.08.16.
//

#include <iostream>
#include "Tree.h"

Tree::~Tree() {

}


void Tree::Grow() {
    height++;
    Changed();
}


void Tree::Fell() {
    if(height >= 5) {
        height = 0;
        std::cout << "The tree was felled" << std::endl;
    } else {
        std::cout << "This height is not enough!" << std::endl;
    }
}

Tree::Tree(Mediator *m) : WoodTool(m) {

}

