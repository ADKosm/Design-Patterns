//
// Created by alex on 29.07.16.
//

#ifndef VISITOR_MEANVISITOR_H
#define VISITOR_MEANVISITOR_H

#include "Visitor.h"

class MeanVisitor : public Visitor {
public:
    virtual ~MeanVisitor();

    virtual void VisitChar(CharElement *e);

    virtual void VisitNumber(NumberElement *e);

    double GetResult();
    virtual void Clear();

    MeanVisitor();

private:
    int sum;
    int count;
};


#endif //VISITOR_MEANVISITOR_H
