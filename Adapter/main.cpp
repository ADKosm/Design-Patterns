#include <iostream>
#include <vector>

#include "Square.h"
#include "Text.h"
#include "Triangle.h"
#include "Separator.h"

int main() {

    std::vector<Shape *> shapes {
            new Square(5),
            new Separator(),
            new Text("Hello, man"),
            new Separator(),
            new Triangle(4),
            new Separator(),
            new Triangle(8),
            new Separator(),
            new Square(6),
            new Separator(),
            new Text("Good bye")
    };

    for(Shape * e : shapes) {
        e->Draw();
    }

    for(Shape * e : shapes) {
        delete e;
    }

    return 0;
}