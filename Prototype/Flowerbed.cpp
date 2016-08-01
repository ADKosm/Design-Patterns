//
// Created by alex on 01.08.16.
//

#include <iostream>
#include "Flowerbed.h"

Flowerbed::Flowerbed() {
    flowersRegister["Rose"] = new Flower('@', "This is a Rose");
    flowersRegister["Bell"] = new Flower('*', "This is a Bellflower");
    flowersRegister["Sun"] = new Flower('#', "This is a Sunflower");
}

Flowerbed::~Flowerbed() {
    for(std::pair<std::string, Flower *> e : flowersRegister) {
        delete e.second;
    }
    for(Flower * e : data) {
        delete e;
    }
}

void Flowerbed::Add(std::string type) {
    data.push_back(flowersRegister[type]->Clone());
}

void Flowerbed::PrintInfo(int num) {
    if(num <0 || num >= data.size()) return;

    std::cout << data[num]->GetPicture() << std::endl << data[num]->GetDescription() << std::endl;
}

void Flowerbed::DrawAllFlower() {
    std::vector<std::vector<std::string> > shemes;
    for(Flower * e : data) {
        shemes.push_back(e->GetSheme());
    }
    for(size_t i = 0; i < shemes.size(); i++) {
        std::cout << "(" << i+1 << ")";
    }
    std::cout << std::endl;
    for(size_t i = 0; i < shemes[0].size(); i++) {
        for(size_t j = 0; j < shemes.size(); j++) {
            std::cout << shemes[j][i];
        }
        std::cout << std::endl;
    }
    for(size_t i = 0; i < shemes[0].size()*shemes.size(); i ++) {
        std::cout << '=';
    }
    std::cout << std::endl;
}

void Flowerbed::AskUser() {
    int decision = 0;
    while(decision >= 0) {
        std::cout << "Enter 0 to draw flowerbed or number from 1 to " << data.size()
        << " to get short info about appropriate flower" << std::endl;
        std::cout << "Negative number closes this program" << std::endl;
        std::cout << "> ";
        std::cin >> decision;
        if(decision == 0) {
            DrawAllFlower();
        } else {
            PrintInfo(decision-1);
        }
    }

}

