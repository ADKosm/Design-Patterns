//
// Created by alex on 27.07.16.
//

#include "Menu.h"

Menu::Menu() : exit(false) {
}

Menu::~Menu() {
    for(size_t i = 0; i < data.size(); i++) {
        delete data[i].second;
    }
}

void Menu::AddButton(std::string lab, Button *butt) {
    data.push_back(std::make_pair(lab, butt));
}

void Menu::Show() {
    std::cout << "Print number of button:" << std::endl;
    for(size_t i = 0; i < data.size(); i++) {
        std::cout << "(" << i+1 << ") " << data[i].first << std::endl;
    }
    std::cout << "Or any other number to exit" << std::endl;
}


void Menu::HandleUser() {
    std::cout << "> ";
    int decision;
    std::cin >> decision;
    decision--;

    if(decision >= 0 && decision < data.size()) {
        data[decision].second->Click();
    } else {
        exit = true;
    }
}


bool Menu::Exit() {
    return exit;
}

