//
// Created by alex on 22.07.16.
//

#include "Round.h"

Round::~Round() {

}

Round::Round(int r) : radius(r) {
}

void Round::Draw() {
    for(int i = 0; i <= 2*radius; i++) {
        std::string temp;
        for(int j = 0; j <= 2*radius; j++) {
            temp += (radius-i)*(radius-i) + (radius-j)*(radius-j) <= radius*radius ? fill : ' ';
        }
        std::cout << temp << std::endl;
    }
}


