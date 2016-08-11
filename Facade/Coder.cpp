//
// Created by alex on 11.08.16.
//

#include "Coder.h"

#include "KeyHolder.h"


Coder::Coder() {
}

Coder::~Coder() {
}

std::string Coder::Code(std::string s, KeyHolder *kh) {
    std::string result(s);
    int key = kh->GetKey();
    for(int i = 0; i < result.size(); i++) {
        result[i] = static_cast<char>( static_cast<int>(result[i])+key);
    }
    return result;
}

