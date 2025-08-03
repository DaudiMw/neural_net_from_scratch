#include <vector>
#include <cmath>
#include <stdexcept>

using namespace std;

class MatrixMath{
public:
    MatrixMath();
    
    vector<vector<double>> matrix_add(const vector<vector<double>> A, const vector<vector<double>> B);

    vector<vector<double>> matrix_sub(const vector<vector<double>> A, const vector<vector<double>> B);

    vector<vector<double>> matrix_mult(const vector<vector<double>> A, const vector<vector<double>> B);

    vector<vector<double>> transpose(const vector<vector<double>>);

    double dot_product(const vector<double> A, const vector<double> B);

    vector<double> get_column(const vector<vector<double>> A, int index);

};


