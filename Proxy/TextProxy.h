//
// Created by alex on 17.08.16.
//

#ifndef PROXY_TEXTPROXY_H
#define PROXY_TEXTPROXY_H

#include "Element.h"
#include "TextElement.h"

class TextProxy : public Element {
public:
    virtual ~TextProxy() override;

    virtual void Draw() override;

    TextProxy(std::string l);

private:
    TextElement * realText;
    std::string link;
};


#endif //PROXY_TEXTPROXY_H
