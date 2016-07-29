//
// Created by alex on 29.07.16.
//

#include "LetterStatisticVisitor.h"

LetterStatisticVisitor::~LetterStatisticVisitor() {
}

void LetterStatisticVisitor::VisitChar(CharElement *e) {
    data[e->GetChar()] = data[e->GetChar()] ? data[e->GetChar()]+1 : 1;
}

void LetterStatisticVisitor::VisitNumber(NumberElement *e) {
    return;
}

LetterStatisticVisitor::LetterStatisticVisitor() {
}


void LetterStatisticVisitor::Clear() {
    data.clear();
}

std::string LetterStatisticVisitor::GetResult() {
    std::string result;
    for(std::pair<char, int> e : data) {
        std::stringstream a;
        std::string temp;
        a << "Character \'" << e.first << "\': " << e.second << std::endl;
        std::getline(a, temp);
        result += temp + "\n";
    }
    return result;
}

