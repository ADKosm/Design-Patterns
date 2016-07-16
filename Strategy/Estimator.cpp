//
// Created by alex on 16.07.16.
//

#include "Estimator.h"

Estimator::Estimator(std::vector<float> d) : data(d), strategy(nullptr) {
}

Estimator::~Estimator() {
    if(strategy) delete strategy;
}

void Estimator::ChangeMethod(EstimateStrategy *str) {
    if(strategy) delete strategy;
    strategy = str;
}

float Estimator::Calculate() {
    return strategy->run(data.begin(), data.end());
}