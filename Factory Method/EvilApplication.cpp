//
// Created by alex on 31.07.16.
//

#include "EvilApplication.h"


EvilApplication::~EvilApplication() {
}

Dialog *EvilApplication::GetDialog() {
    return new EvilDialog();
}

EvilApplication::EvilApplication() : Application() {
}

