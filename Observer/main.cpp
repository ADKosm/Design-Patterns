#include <iostream>

#include "Timer.h"
#include "ClockDisplay.h"
#include "Line.h"

int main() {
    Timer * timer = new Timer();

    ClockDisplay * cd = new ClockDisplay(timer);
    Line * l = new Line(timer);

    timer->Start(1);

    return 0;
}