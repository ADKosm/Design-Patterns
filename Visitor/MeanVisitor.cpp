//
// Created by alex on 29.07.16.
//

#include "MeanVisitor.h"
#include "CharElement.h"
#include "NumberElement.h"

MeanVisitor::~MeanVisitor() {
}

void MeanVisitor::VisitChar(CharElement *e) {
    return;
}

void MeanVisitor::VisitNumber(NumberElement *e) {
    sum += e->GetNumber();
    count++;
}

MeanVisitor::MeanVisitor() {
    Clear();
}


double MeanVisitor::GetResult() {
    return static_cast<double>(sum)/ static_cast<double >(count);
}

void MeanVisitor::Clear() {
    sum = 0;
    count = 0;
}

