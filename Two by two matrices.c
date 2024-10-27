#include <stdio.h>
typedef struct {
    int data[2][2];
} Matrix2x2;
void printMatrix(Matrix2x2 matrix) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix.data[i][j]);
        }
        printf("\n");
    }
}
Matrix2x2 addMatrices(Matrix2x2 a, Matrix2x2 b) {
    Matrix2x2 result;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result.data[i][j] = a.data[i][j] + b.data[i][j];
        }
    }
    return result;
}
Matrix2x2 subtractMatrices(Matrix2x2 a, Matrix2x2 b) {
    Matrix2x2 result;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result.data[i][j] = a.data[i][j] - b.data[i][j];
        }
    }
    return result;
}
Matrix2x2 multiplyMatrices(Matrix2x2 a, Matrix2x2 b) {
    Matrix2x2 result;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result.data[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                result.data[i][j] += a.data[i][k] * b.data[k][j];
            }
        }
    }
    return result;
}
int main() {
    Matrix2x2 a = {{{1, 2}, {3, 4}}};
    Matrix2x2 b = {{{5, 6}, {7, 8}}};
    printf("Matrix A:\n");
    printMatrix(a);
    printf("\nMatrix B:\n");
    printMatrix(b);
    Matrix2x2 sum = addMatrices(a, b);
    printf("\nA + B:\n");
    printMatrix(sum);
    Matrix2x2 diff = subtractMatrices(a, b);
    printf("\nA - B:\n");
    printMatrix(diff);
    Matrix2x2 product = multiplyMatrices(a, b);
    printf("\nA * B:\n");
    printMatrix(product);
    return 0;
}
