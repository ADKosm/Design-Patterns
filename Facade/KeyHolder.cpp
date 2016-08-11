//
// Created by alex on 11.08.16.
//

#include "KeyHolder.h"

#include "Coder.h"
#include "Decoder.h"

KeyHolder::KeyHolder(int k) : key(k) {

}

KeyHolder::~KeyHolder() {
}

int KeyHolder::GetKey() {
    return key;
}

