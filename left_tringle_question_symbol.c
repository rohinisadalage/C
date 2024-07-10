#include <stdio.h>

int main() {
    int rows, i, j, k;

    // Ask the user for the number of rows for the triangle
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to print the left triangle
    for(i = 1; i <= rows; i++) {
        // Print spaces for alignment
        for(j = rows; j > i; j--) {
            printf(" ");
        }
        // Print the question marks
        for(k = 1; k <= i; k++) {
            printf("?");
        }
        printf("\n");
    }

    return 0;
}
