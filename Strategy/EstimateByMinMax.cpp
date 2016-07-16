//
// Created by alex on 16.07.16.
//

#include "EstimateByMinMax.h"

EstimateByMinMax::EstimateByMinMax() {
}

EstimateByMinMax::~EstimateByMinMax() {
}

float EstimateByMinMax::run(std::vector<float>::iterator begin, std::vector<float>::iterator end) {
    float minimum = *begin, maximum = *begin;
    for(; begin!= end; begin++) {
        minimum = *begin < minimum ? *begin : minimum;
        maximum = *begin > maximum ? *begin : maximum;
    }
    return minimum + maximum;
}





