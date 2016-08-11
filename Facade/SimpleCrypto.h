//
// Created by alex on 11.08.16.
//

#ifndef FACADE_SIMPLECRYPTO_H
#define FACADE_SIMPLECRYPTO_H

#include "Coder.h"
#include "Decoder.h"
#include "KeyHolder.h"

class SimpleCrypto {
public:
    SimpleCrypto(int argc, char **argv);
    ~SimpleCrypto();

    std::string Code(std::string str);
    std::string Decode(std::string str);

private:
    KeyHolder * kh;
};


#endif //FACADE_SIMPLECRYPTO_H
