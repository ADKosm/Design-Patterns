#include <iostream>
#include "TextPrinter.h"
#include "Worker.h"
#include "StarBorderedDecorator.h"

using namespace std;

int main() {
    Component * one = new TextPrinter("Hello\nI am cool man\nEnjoy");
    Component * two = new StarBorderedDecorator(new TextPrinter("I am bordered text\nI must be in the stars\nI hope, that you see them"));
    Component * three = new StarBorderedDecorator(new Worker("Antonio", 15));
    Component * four = new StarBorderedDecorator(new StarBorderedDecorator(new TextPrinter("Hello\nI am just text\nOlolo\nI can do everything and I love it\nFor example, this text must be\ndouble bordered")));

    std::cout << one->getDescription() << std::endl;
    std::cout << two->getDescription() << std::endl;
    std::cout << three->getDescription() << std::endl;
    std::cout << four->getDescription() << std::endl;

    return 0;
}