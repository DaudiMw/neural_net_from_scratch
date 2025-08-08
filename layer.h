using namespace std;
#include <vector>
#include "neuron.h"
#include "activation.h"

class Layer{
public: 
    Layer(int input_size, int output_size, int nueron_count, ActivationType act_type_);
    vector<double> forward(const vector<double>& input);
    vector<double> backward(const vector<double>& dvalues, double learning_rate);
    vector<Neuron> get_neurons();

private:
    vector<vector<double>> weights;
    vector<double> biases;
    ActivationType activation;
    vector<double> last_input, last_output;
    vector<Neuron> neurons;
    int neuron_count;

};