#include <stdio.h>

#define SIZE 6

void printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[SIZE][SIZE];

    // Initializing the matrix with sample values
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = i * SIZE + j + 1; // Example values
        }
    }

    printf("The 6x6 matrix is:\n");
    printMatrix(matrix);

    return 0;
}
