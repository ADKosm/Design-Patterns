//
// Created by alex on 22.07.16.
//

#ifndef ABSTRACTFACTORY_HASHTAGFACTORY_H
#define ABSTRACTFACTORY_HASHTAGFACTORY_H

#include "ShapeFactory.h"
#include "HashtagRound.h"
#include "HashtagRect.h"

class HashtagFactory : public ShapeFactory {
public:
    HashtagFactory();
    ~HashtagFactory();

    Rect *CreateRect(unsigned int w, unsigned int h);
    Round *CreateRound(int r);
};


#endif //ABSTRACTFACTORY_HASHTAGFACTORY_H
