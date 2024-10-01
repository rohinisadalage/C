#include <stdio.h>
#define MAX 10
void multiplyMatrices(int firstMatrix[MAX][MAX], int secondMatrix[MAX][MAX], int result[MAX][MAX], int row1, int col1, int row2, int col2) {
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            result[i][j] = 0;
        }
    }
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            for (int k = 0; k < col1; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}
void displayMatrix(int matrix[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int firstMatrix[MAX][MAX], secondMatrix[MAX][MAX], result[MAX][MAX];
    int row1, col1, row2, col2;
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &row1, &col1);
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &row2, &col2);
    if (col1 != row2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col1; ++j) {
            scanf("%d", &firstMatrix[i][j]);
        }
    }
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < row2; ++i) {
        for (int j = 0; j < col2; ++j) {
            scanf("%d", &secondMatrix[i][j]);
        }
    }
    multiplyMatrices(firstMatrix, secondMatrix, result, row1, col1, row2, col2);
    printf("Resultant matrix after multiplication:\n");
    displayMatrix(result, row1, col2);
    return 0;
}
