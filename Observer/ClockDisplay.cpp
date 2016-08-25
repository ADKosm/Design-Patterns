//
// Created by alex on 25.08.16.
//

#include <iostream>
#include "ClockDisplay.h"
#include "Timer.h"

ClockDisplay::~ClockDisplay() {
}

void ClockDisplay::Update(Subject *updatedObject) {
    if(updatedObject == tim) {
        std::cout << "Current time: " << tim->GetCurrentTime() << std::endl;
    }
}

ClockDisplay::ClockDisplay(Timer *t) : tim(t) {
    tim->Attach(this);
}

