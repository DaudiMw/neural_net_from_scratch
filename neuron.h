using namespace std;
#include <vector>
#include "activation.h"

class Neuron {
    Neuron(ActivationType activation_func, vector<double> input, vector<double> weights, double bias);
    Neuron(ActivationType activation_func, vector<vector<double>> input2d, vector<double> weights, double bias);
    float activate();
private:
    double m_bias;
    vector<double> m_weights;
    ActivationType m_activation_func;
    vector<double> m_input;
    vector<vector<double>> m_input2d; 
};