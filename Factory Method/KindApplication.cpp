//
// Created by alex on 31.07.16.
//

#include "KindApplication.h"

KindApplication::~KindApplication() {

}

Dialog *KindApplication::GetDialog() {
    return new KindDialog();
}

KindApplication::KindApplication() : Application() {

}

