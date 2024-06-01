#include <stdio.h>

int main() {
    int height;

    // Ask the user to input the height of the triangle
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);

    // Loop to print each row of the triangle
    for(int i = 1; i <= height; ++i) {
        // Print the hash symbols for the current row
        for(int j = 1; j <= i; ++j) {
            printf("#");
        }
        // Move to the next line after printing the hash symbols for the current row
        printf("\n");
    }

    return 0;
}
