//
// Created by alex on 12.08.16.
//

#include "Character.h"

#include <string>
#include <stdio.h>

Character::Character(char s, int c) : symbol(s), color(c) {
}

Character::~Character() {
}

void Character::Display() {
    std::string str = "\033[" + std::to_string(color) + "m" + symbol + "\033[0m";
    printf(str.c_str());
}


int Character::GetColor(char s) {
    if(s == 'r') return 31; // red
    if(s == 'g') return 32; // green
    if(s == 'b') return 33; //blue
    return 0; // white
}

