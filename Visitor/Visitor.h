//
// Created by alex on 29.07.16.
//

#ifndef VISITOR_VISITOR_H
#define VISITOR_VISITOR_H

#include "CharElement.h"
#include "NumberElement.h"

class Visitor {
public:
    virtual ~Visitor() {}

    virtual void VisitChar(CharElement * e) =0 ;

    virtual void VisitNumber(NumberElement * e) =0 ;

    virtual void Clear() = 0;

protected:
    Visitor() {}
};


#endif //VISITOR_VISITOR_H
