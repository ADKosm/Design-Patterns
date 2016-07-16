#include <iostream>

#include "EstimateByMax.h"
#include "EstimateByMean.h"
#include "EstimateByMinMax.h"
#include "Estimator.h"

int main() {
    std::vector<float> data = {2, 3, 5, 7, 3, 4, 6, 4, 5, 7, 7, 8, 4, 6};

    Estimator es(data);

    for(auto a : data) std::cout << a << ' ';
    std::cout << std::endl;

    es.ChangeMethod(new EstimateByMax());
    std::cout << "Estimate by max: " << es.Calculate() << std::endl;

    es.ChangeMethod(new EstimateByMinMax());
    std::cout << "Estimate by minmax: " << es.Calculate() << std::endl;

    es.ChangeMethod(new EstimateByMean());
    std::cout << "Estimate by mean: " << es.Calculate() << std::endl;

    return 0;
}