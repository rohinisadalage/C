#include <stdio.h>
#define SIZE 2
float determinant(float matrix[SIZE][SIZE]) {
    return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
}
void inverse(float matrix[SIZE][SIZE], float inverseMatrix[SIZE][SIZE]) {
    float det = determinant(matrix);
    if (det == 0) {
        printf("Inverse cannot be calculated, determinant is zero.\n");
        return;
    }
    inverseMatrix[0][0] = matrix[1][1] / det;
    inverseMatrix[0][1] = -matrix[0][1] / det;
    inverseMatrix[1][0] = -matrix[1][0] / det;
    inverseMatrix[1][1] = matrix[0][0] / det;
}
void multiplyMatrices(float mat1[SIZE][SIZE], float mat2[SIZE][SIZE], float result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0;
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
void printMatrix(float matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int
