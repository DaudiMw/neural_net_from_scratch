using namespace std;
#include "activation.h"
#include <cmath>
#include <stdexcept>

double apply_activation(ActivationType type, double x){
    switch(type){
        case ActivationType::RELU:
            return max(0.0, x);
        case ActivationType::SIGMOID:
            return 1.0 / (1.0 + exp(-x));
        case ActivationType::TANH:
            return tanh(x);
        case ActivationType::LINEAR:
            return x;
        default:
            throw invalid_argument("Unkown activation type.");
    }
}