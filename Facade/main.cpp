#include <iostream>

#include "SimpleCrypto.h"

int main(int argc, char **argv) {

    SimpleCrypto sc(argc, argv);

    std::cout << "Write your text line below:" << std::endl;

    std::string userText;
    std::getline(std::cin, userText);

    std::string coded = sc.Code(userText);
    std::string decoded = sc.Decode(coded);

    std::cout << "Coded string: " << std::endl;
    std::cout << coded << std::endl;

    std::cout << "Decoded string" << std::endl;
    std::cout << decoded << std::endl;

    return 0;
}