//
// Created by alex on 29.07.16.
//

#ifndef VISITOR_LETTERSTATISTICVISITOR_H
#define VISITOR_LETTERSTATISTICVISITOR_H

#include "Visitor.h"
#include "map"
#include "string"
#include "sstream"

class LetterStatisticVisitor : public Visitor {

public:
    virtual ~LetterStatisticVisitor();

    virtual void VisitChar(CharElement *e);

    virtual void VisitNumber(NumberElement *e);

    virtual void Clear();
    std::string GetResult();

    LetterStatisticVisitor();

private:
    std::map<char, int> data;
};


#endif //VISITOR_LETTERSTATISTICVISITOR_H
