//
// Created by alex on 12.08.16.
//

#include "CharacterFactory.h"

CharacterFactory::CharacterFactory() {
}

CharacterFactory::~CharacterFactory() {
    for(auto e : CharactersPool) {
        delete e.second;
    }
}

Character *CharacterFactory::GetCh(char symb, int color) {
    auto search = CharactersPool.find(std::make_pair(symb, color));
    if(search == CharactersPool.end()) {
        CharactersPool[std::make_pair(symb, color)] = new Character(symb, color);
    }
    return CharactersPool[std::make_pair(symb, color)];
}


int CharacterFactory::GetSize() {
    return CharactersPool.size();
}

