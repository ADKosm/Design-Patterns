//
// Created by alex on 21.07.16.
//


#include <iostream>
#include "StarBorderedDecorator.h"

StarBorderedDecorator::StarBorderedDecorator(Component *c) : Decorator(c) {
}

StarBorderedDecorator::~StarBorderedDecorator() {
}

std::string StarBorderedDecorator::getDescription() {
    std::string str = Decorator::getDescription();
    std::stringstream tempstream;
    tempstream << str;
    std::vector<std::string> strings;
    std::string curr, result;
    while(std::getline(tempstream, curr, '\n')) {
        strings.push_back(curr);
    }

    unsigned long max_size = countOfStrings(strings);

    result += generateString(max_size+4, '*') + "\n";

    for(size_t i = 0; i < strings.size(); i++) {
        result += "* " + strings[i] + generateString(max_size-strings[i].size(), ' ') + " *\n";
    }

    result += generateString(max_size+4, '*') + "\n";
    return result;
}

unsigned long StarBorderedDecorator::countOfStrings(std::vector<std::string> &v) {
    size_t maximum = 0;
    for(size_t i = 0; i < v.size(); i++) {
        maximum = v[i].size() > maximum ? v[i].size() : maximum;
    }
    return static_cast<unsigned long>(maximum);
}

std::string StarBorderedDecorator::generateString(unsigned long number, char symbol) {
    std::string result("");
    for(size_t i = 0; i < number; i++) {
        result += symbol;
    }
    return result;
}



