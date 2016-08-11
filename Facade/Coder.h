//
// Created by alex on 11.08.16.
//

#ifndef FACADE_CODER_H
#define FACADE_CODER_H

#include "string"

class KeyHolder;

class Coder {
public:
    Coder();
    ~Coder();

    std::string Code(std::string s, KeyHolder *kh);
};


#endif //FACADE_CODER_H
