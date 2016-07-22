//
// Created by alex on 22.07.16.
//

#include "NumeralFactory.h"

NumeralFactory::NumeralFactory() {
}

NumeralFactory::~NumeralFactory() {
}

Rect *NumeralFactory::CreateRect(unsigned int w, unsigned int h) {
    return new NumeralRect(w, h);
}

Round *NumeralFactory::CreateRound(int r) {
    return new NumeralRound(r);
}



