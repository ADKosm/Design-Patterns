//
// Created by alex on 16.07.16.
//

#ifndef STRATEGY_ESTIMATOR_H
#define STRATEGY_ESTIMATOR_H

#include <vector>
#include "EstimateStrategy.h"

class Estimator {
public:
    Estimator(std::vector<float> d);
    ~Estimator();

    void ChangeMethod(EstimateStrategy *str);
    float Calculate();
private:
    EstimateStrategy * strategy;
    std::vector<float> data;
};


#endif //STRATEGY_ESTIMATOR_H
