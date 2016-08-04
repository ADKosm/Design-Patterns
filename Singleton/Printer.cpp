//
// Created by alex on 05.08.16.
//

#include "Printer.h"

Printer * Printer::inst = nullptr;

Printer *Printer::Instance() {
    if(inst == nullptr) {
        inst = new Printer();
    }
    return inst;
}

void Printer::Print(std::string s) {
    std::cout << s << std::endl;
}

std::string Printer::GetString() {
    std::string result;
    std::cin >> result;

    return result;
}

Printer::Printer() {
}

Printer::~Printer() {
}

