//
// Created by alex on 19.07.16.
//

#include "Worker.h"

Worker::Worker(std::string s, int n) : name(s), number(n) {
}

Worker::~Worker() {
}

std::string Worker::getDescription() {
    std::stringstream str;
    std::string result;
    str << "Hello, my name is " << name << " and my number is " << number;
    std::getline(str, result);
    return result;
}




