using namespace std;
#include <vector>


class Network {
public:
    Network(const vector<int>& layer_sizes, const vector<ActivationType>& activations);
    vector<double> predict(vector<double>& input);
    void train(const vector<vector<double>>& X,
               const vector<vector<double>>& Y,
               int epochs, double lr);
};