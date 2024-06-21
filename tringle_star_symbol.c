#include <stdio.h>

int main() {
    int rows;

    // Ask user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to print the triangle
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
