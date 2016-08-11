//
// Created by alex on 11.08.16.
//

#include "Decoder.h"

#include "KeyHolder.h"


Decoder::Decoder() {

}

Decoder::~Decoder() {

}

std::string Decoder::Decode(std::string s, KeyHolder *kh) {
    std::string result(s);
    int key = kh->GetKey();
    for(int i = 0; i < result.size(); i++) {
        result[i] = static_cast<char>( static_cast<int>(result[i])-key);
    }
    return result;
}

