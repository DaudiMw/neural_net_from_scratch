using namespace std;
#include <vector>

class Layer{
public: 
    Layer(int input_size, int output_size, ActivationType act_type_);
    vector<double> forward(const std::vector<double>& input);
    vector<double> backward(const std::vector<double>& dvalues, double learning_rate);

private:
    vector<std::vector<double>> weights;
    vector<double> biases;
    ActivationType activation;
    vector<double> last_input, last_output;
};