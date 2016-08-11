//
// Created by alex on 11.08.16.
//

#ifndef FACADE_DECODER_H
#define FACADE_DECODER_H

#include "string"

class KeyHolder;

class Decoder {
public:
    Decoder();
    ~Decoder();

    std::string Decode(std::string s, KeyHolder *kh);
};


#endif //FACADE_DECODER_H
