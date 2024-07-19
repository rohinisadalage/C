#include <stdio.h>

int main() {
    int i, j, rows;

    // Input the number of rows for the triangle
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print the left-aligned triangle
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("=");
        }
        printf("\n");
    }

    return 0;
}
