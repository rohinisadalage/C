#include <stdio.h>

int main() {
    int height, i, j;

    // Prompt the user to enter the height of the triangle
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);

    // Loop through each row
    for(i = 1; i <= height; i++) {
        // Loop through each column in the current row
        for(j = 1; j <= i; j++) {
            printf("-");
        }
        // Move to the next line after printing all columns in the current row
        printf("\n");
    }

    return 0;
}
