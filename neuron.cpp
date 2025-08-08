using namespace std;
#include <typeinfo>
#include "neuron.h"
#include "matrix_math.h"
#include "activation.cpp"

Neuron::Neuron(ActivationType activation_func, vector<vector<double>> input, vector<double> weights, double bias){
    m_weights = weights;
    m_bias = bias;
    m_input2d = input;
    m_activation_func = activation_func;    
}

Neuron::Neuron(ActivationType activation_func, vector<double> input, vector<double> weights, double bias){
    m_weights = weights;
    m_bias = bias;
    m_input = input,
    m_activation_func = activation_func;
}

float Neuron::activate2d(){
    vector<double> flattened_array;
    for (int i = 0; i < m_input2d.size(); i++){
        for (int j = 0; j < m_input2d[0].size(); j++){
            flattened_array.push_back(m_input2d[i][j]);
        }
    }
    MatrixMath mmath;
    double sum = mmath.dot_product(flattened_array, m_weights);
    return apply_activation(m_activation_func, sum + m_bias);
}

float Neuron::activate(){
    MatrixMath mmath;
    double sum = mmath.dot_product(m_input, m_weights);
    return apply_activation(m_activation_func, sum + m_bias);
}
