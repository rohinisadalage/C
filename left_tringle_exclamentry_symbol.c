#include <stdio.h>

int main() {
    int height;

    // Prompt the user for the height of the triangle
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);

    // Loop through each row
    for(int i = 1; i <= height; i++) {
        // Print the appropriate number of exclamation marks for the current row
        for(int j = 1; j <= i; j++) {
            printf("!");
        }
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}
