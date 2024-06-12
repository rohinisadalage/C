#include <stdio.h>

int main() {
    int height, i, j;

    // Prompt the user to enter the height of the triangle
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);

    // Loop to print each row of the triangle
    for (i = 1; i <= height; i++) {
        // Loop to print the dots for each row
        for (j = 1; j <= i; j++) {
            printf(".");
        }
        // Move to the next line after printing dots in the current row
        printf("\n");
    }

    return 0;
}
