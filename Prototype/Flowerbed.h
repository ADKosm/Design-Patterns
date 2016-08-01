//
// Created by alex on 01.08.16.
//

#ifndef PROTOTYPE_FLOWERBED_H
#define PROTOTYPE_FLOWERBED_H

#include "Flower.h"
#include <map>

class Flowerbed {
public:
    Flowerbed();
    ~Flowerbed();

    void Add(std::string type);
    void PrintInfo(int num);
    void DrawAllFlower();
    void AskUser();

private:
    std::vector<Flower *> data;
    std::map<std::string, Flower *> flowersRegister;
};


#endif //PROTOTYPE_FLOWERBED_H
