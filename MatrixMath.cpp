#include <vector>
#include <cmath>
#include <stdexcept>

using namespace std;

vector<vector<double>> matrix_add(const vector<vector<double>> A, const vector<vector<double>> B){
    if (A.size() != B.size() || A[0].size() != B[0].size()){
        throw runtime_error("matrix add error: the two matrices must have the same dimensions.");
    }

    vector<vector<double>> result_matrix(A.size(), vector<double>(A[0].size(), 0));

    for (int i = 0; i < A.size(); i++){
        for (int j = 0; j < A[0].size(); j++){
            result_matrix[i][j] = A[i][j] + B[i][j]
        }
    }
    return result_matrix;
};

vector<vector<double>> matrix_sub(const vector<vector<double>> A, const vector<vector<double>> B);

vector<vector<double>> matrix_mult(const vector<vector<double>> A, const vector<vector<double>> B);

vector<vector<double>> transpose(const vector<vector<double>>);

double dot_product(const vector<vector<double>> A, const vector<vector<double>> B);

