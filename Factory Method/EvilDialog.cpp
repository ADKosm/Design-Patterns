//
// Created by alex on 31.07.16.
//

#include "EvilDialog.h"

EvilDialog::~EvilDialog() {

}

std::string EvilDialog::AskUserName() {
    std::cout << "FUCK YOU, BITCH! Write your stupid name right now and GTFO: ";
    std::string name;
    std::cin >> name;
    return name;
}

EvilDialog::EvilDialog() : Dialog() {

}

