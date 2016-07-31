//
// Created by alex on 31.07.16.
//

#include "KindDialog.h"

KindDialog::~KindDialog() {
}

std::string KindDialog::AskUserName() {
    std::cout << "Good morning, Sir! The weather today is very nice!" << std::endl;
    std::cout << "Please, enter your name here: ";
    std::string name;
    std::cin >> name;
    return name;
}

KindDialog::KindDialog() : Dialog() {
}

