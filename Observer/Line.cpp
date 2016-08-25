//
// Created by alex on 25.08.16.
//

#include <iostream>
#include "Line.h"
#include "Timer.h"

Line::~Line() {
}

void Line::Update(Subject *updatedObject) {
    if(updatedObject == tim) {
        Draw();
        len++;
    }
}

Line::Line(Timer *t) : tim(t), len(1) {
    tim->Attach(this);
}

void Line::Draw() {
    std::string r;
    for(int i = 0; i < len; i++) r += "#";
    std::cout << r << std::endl;
}

