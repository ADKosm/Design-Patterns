//
// Created by alex on 16.07.16.
//

#include "EstimateByMax.h"

EstimateByMax::EstimateByMax() {
}

EstimateByMax::~EstimateByMax() {
}

float EstimateByMax::run(std::vector<float>::iterator begin, std::vector<float>::iterator end) {
    float result = *begin;
    for(; begin != end; begin++) {
        result = *begin > result ? *begin : result;
    }
    return result;
}



