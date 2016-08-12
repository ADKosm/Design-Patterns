#include <iostream>

#include "CharacterFactory.h"
#include <string>
#include <vector>

int main() { // input example: "|r Hello |g world. |b I just wanna say, that |r 'Hello' |g is just a word and nothing more. |0 "
    // "|0" is stop-symbol
    CharacterFactory cf;

    std::vector<Character*> text;

    std::string curr;
    char colorFlag = 'g';
    while(curr != "|0") {
        std::cin >> curr;
        if(curr[0] == '|') {
            colorFlag = curr[1];
        } else {
            for(int i = 0; i < curr.size(); i++) {
                text.push_back(cf.GetCh(curr[i], Character::GetColor(colorFlag)));
            }
            text.push_back(cf.GetCh(' ', Character::GetColor('r')));
        }
    }

    std::cout << std::endl;

    for(int i = 0; i < text.size(); i++) {
        text[i]->Display();
    }

    std::cout << std::endl;
    std::cout << "Text size: " << text.size() << std::endl;
    std::cout << "Pool size: " << cf.GetSize() << std::endl;

    return 0;
}