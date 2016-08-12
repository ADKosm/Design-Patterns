//
// Created by alex on 12.08.16.
//

#ifndef FLYWEIGHT_CHARACTERFACTORY_H
#define FLYWEIGHT_CHARACTERFACTORY_H

#include "Character.h"
#include <map>
#include <string>

class CharacterFactory {
public:
    CharacterFactory();
    ~CharacterFactory();

    Character * GetCh(char symb, int color);

    int GetSize();

private:
    std::map< std::pair<char, int>, Character * > CharactersPool;
};


#endif //FLYWEIGHT_CHARACTERFACTORY_H
