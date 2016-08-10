//
// Created by alex on 10.08.16.
//

#include "Separator.h"
#include "iostream"

Separator::~Separator() {

}

void Separator::Draw() {
    for(int i = 0; i < 25; i++) {
        std::cout << '-';
    }
    std::cout << std::endl;
}


Separator::Separator() {

}

