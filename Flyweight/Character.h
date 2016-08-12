//
// Created by alex on 12.08.16.
//

#ifndef FLYWEIGHT_CHARACTER_H
#define FLYWEIGHT_CHARACTER_H

#include <map>

class Character {
public:
    static int GetColor(char s);

    Character(char s, int c);
    ~Character();

    void Display();

private:
    char symbol;
    int color;
};


#endif //FLYWEIGHT_CHARACTER_H
