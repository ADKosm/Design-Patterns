//
// Created by alex on 16.07.16.
//

#include "EstimateByMean.h"

EstimateByMean::EstimateByMean() {
}

EstimateByMean::~EstimateByMean() {
}

float EstimateByMean::run(std::vector<float>::iterator begin, std::vector<float>::iterator end) {
    float sum = 0;
    float count = 0;
    for(;begin!=end; begin++) {
        sum += *begin;
        count += 1;
    }
    return 2*sum/count;
}

