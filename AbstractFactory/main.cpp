#include <iostream>
#include <stdexcept>

#include "NumeralFactory.h"
#include "HashtagFactory.h"
#include "Rect.h"
#include "Round.h"

ShapeFactory * shf;

void initialize_style() {
    int decision;
    std::cout << "Choose style:" << std::endl << "(1) Hashtag" << std::endl << "(2) Numeral" << std::endl;
    std::cin >> decision;
    if(decision == 1) {
        shf = new HashtagFactory();
    } else if(decision == 2) {
        shf = new NumeralFactory();
    }
    else {
        throw std::invalid_argument("Argument must be a number 1 or 2!");
    }
}

int main() {
    initialize_style();

    Rect * one = shf->CreateRect(2, 3);
    Rect * two = shf->CreateRect(4, 5);
    Rect * three = shf->CreateRect(8, 3);

    Round * four = shf->CreateRound(2);
    Round * five = shf->CreateRound(5);
    Round * six = shf->CreateRound(7);

    one->Draw();
    std::cout << std::endl;
    four->Draw();
    std::cout << std::endl;
    two->Draw();
    std::cout << std::endl;
    five->Draw();
    std::cout << std::endl;
    three->Draw();
    std::cout << std::endl;
    six->Draw();
    return 0;
}