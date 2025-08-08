using namespace std;
#include <vector>
#include <string>

#include "matrix_math.h"

MatrixMath::MatrixMath() {};


vector<double> MatrixMath::get_column(const vector<vector<double>> A, int index){
    if (index > A.size() || A.empty() || index < 0){
        throw invalid_argument("get_column error: index out of bounds");
    }

    vector<double> column;

    for (int i = 0; i < A.size(); i++){
        column.push_back(A[i][index]);
    }
    return column;
};

double MatrixMath::dot_product(const vector<double> A, const vector<double> B){
    if (A.size() != B.size()){
        throw invalid_argument("dot product error: the two vectors must be of the same dimension.");
    }

    double dot_product = 0;

    for (int i = 0; i < A.size(); i++){
        dot_product += A[i] * B[i];
    }

    return dot_product;
};

vector<vector<double>> MatrixMath::matrix_add(const vector<vector<double>> A, const vector<vector<double>> B){
    if (A.size() != B.size() || A[0].size() != B[0].size()){
        throw invalid_argument("matrix add error: the two matrices must have the same dimensions.");
    }

    vector<vector<double>> result_matrix = A;

    for (int i = 0; i < A.size(); i++){
        for (int j = 0; j < A[0].size(); j++){
            result_matrix[i][j] += B[i][j];
        }
    }
    return result_matrix;
};

vector<vector<double>> MatrixMath::matrix_sub(const vector<vector<double>> A, const vector<vector<double>> B){
    if (A.size() != B.size() || A[0].size() != B[0].size()){
        throw invalid_argument("matrix sub error: the two matrices must have the same dimensions.");
    }
    vector<vector<double>> result_matrix(A.size(), vector<double>(A[0].size(), 0));

    for (int i = 0; i < A.size(); i++){
        for (int j = 0; j < A[0].size(); j++){
            result_matrix[i][j] = A[i][j] - B[i][j];
        }
    }
    return result_matrix;

};

vector<vector<double>> MatrixMath::matrix_mult(const vector<vector<double>> A, const vector<vector<double>> B){
    if (A[0].size() != B.size()){
        throw invalid_argument("matrix math error: incompatible dimensions - the number of columns in the first matrix must match the number of rows in the second matrix.");
    }

    vector<vector<double>> result_matrix(A.size(), vector<double>(B[0].size(), 0));

    for (int i = 0; i < A.size(); i++){
        for (int j = 0; j < B[0].size(); j++){
            result_matrix[i][j] = dot_product(A[i], get_column(B, j));
        }
    }

    return result_matrix;
    
};

vector<vector<double>> MatrixMath::transpose(const vector<vector<double>> A){
    vector<double> column;
    vector<vector<double>> A_transposed(A[0].size(), vector<double>(A.size(), 0));

    for (int i = 0; i < A[0].size(); i++){
        column = get_column(A, i);
        for (int j = 0; j < column.size(); j++){
            A_transposed[column[j]][i];
        }
    }
    return A_transposed;
};
