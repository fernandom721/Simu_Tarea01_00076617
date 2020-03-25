#include <iostream>
#include "math_tools.h"
#include "display_tools.h"

int main(void)
{

    Matrix matrix;
    zeroes(matrix, 3);
    Matrix transpuesta;
    Matrix adjunta;
    Matrix ans;

    matrix.at(0).at(0) = 2;
    matrix.at(0).at(1) = 2;
    matrix.at(0).at(2) = 3;
    matrix.at(1).at(0) = 4;
    matrix.at(1).at(1) = 5;
    matrix.at(1).at(2) = 6;
    matrix.at(2).at(0) = 7;
    matrix.at(2).at(1) = 8;
    matrix.at(2).at(2) = 9;
    float det = determinant(matrix);
    transpose(matrix, transpuesta);

    cofactors(transpuesta, adjunta);
    productRealMatrix((1 / det), adjunta, ans);
    showMatrix(ans);
    return 0;
}