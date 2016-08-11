//
// Created by alex on 11.08.16.
//

#include <stdexcept>
#include "SimpleCrypto.h"
#include "exception"

SimpleCrypto::SimpleCrypto(int argc, char **argv) {
    if(argc < 2) {
        throw std::invalid_argument("You must write key for crypto in second argument of command line");
    }
    int k = std::stoi(std::string(argv[1]));
    kh = new KeyHolder(k);
}

SimpleCrypto::~SimpleCrypto() {
    delete kh;
}

std::string SimpleCrypto::Code(std::string str) {
    Coder c;
    return c.Code(str, kh);
}

std::string SimpleCrypto::Decode(std::string str) {
    Decoder c;
    return c.Decode(str, kh);
}

