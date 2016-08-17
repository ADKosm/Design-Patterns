//
// Created by alex on 17.08.16.
//

#ifndef PROXY_ELEMENT_H
#define PROXY_ELEMENT_H


class Element {
public:
    virtual ~Element();

    virtual void Draw() = 0;

protected:
    Element();
};


#endif //PROXY_ELEMENT_H
