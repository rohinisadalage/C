#include <stdio.h>

int main() {
    int height;

    // Ask the user for the height of the triangle
    printf("Enter the height of the right-angled triangle: ");
    scanf("%d", &height);

    // Loop to print each row of the triangle
    for (int i = 1; i <= height; ++i) {
        // Loop to print the appropriate number of hash symbols for the current row
        for (int j = 1; j <= i; ++j) {
            printf("#");
        }
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}
