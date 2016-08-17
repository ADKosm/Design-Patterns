//
// Created by alex on 17.08.16.
//

#include "TextProxy.h"

TextProxy::~TextProxy() {
    if(realText != nullptr) {
        delete realText;
    }
}

void TextProxy::Draw() {
    if(realText == nullptr) {
        realText = new TextElement(link);
    }

    realText->Draw();
}

TextProxy::TextProxy(std::string l) : link(l) {
}