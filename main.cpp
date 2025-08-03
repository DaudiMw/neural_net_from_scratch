#include <iostream>
#include <vector>
#include "matrix_math.h"
using namespace std;

int main(){
    cout << "Hello World" << endl;
    vector<vector<double>> A = {
        {2,3},
        {2,3}
    };
    vector<vector<double>> B = {
        {3,4},
        {3,4}
    };

    MatrixMath mmath;
    vector<vector<double>> result = mmath.matrix_sub(A, B);

    for (int i = 0; i < result.size(); i++){
        for (int j = 0; j < result[0].size(); j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
};