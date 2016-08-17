#include <iostream>
#include "TextProxy.h"

void DrawElement(Element * e) {
    std::cout << "And even now" << std::endl;

    e->Draw();

    std::cout << "Only after real request to object, element loads in memory and handles this request" << std::endl;
}

int main() {

    std::cout << "No big objects in memory" << std::endl;

    Element * pr = new TextProxy("text");

    std::cout << "And now too" << std::endl;

    DrawElement(pr);

    return 0;
}