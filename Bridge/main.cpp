#include <iostream>

#include "HousePainter.h"

int main() {
    HousePainter * p = new HousePainter();

    p->DrawHouse(20, 7, 10, 10);
    return 0;
}