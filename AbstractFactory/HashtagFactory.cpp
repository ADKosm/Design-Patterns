//
// Created by alex on 22.07.16.
//

#include "HashtagFactory.h"

HashtagFactory::HashtagFactory() {
}

HashtagFactory::~HashtagFactory() {
}

Rect *HashtagFactory::CreateRect(unsigned int w, unsigned int h) {
    return new HashtagRect(w, h);
}

Round *HashtagFactory::CreateRound(int r) {
    return new HashtagRound(r);
}

