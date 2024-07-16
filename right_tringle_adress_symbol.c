#include <stdio.h>

int main() {
    int height, i, j;

    // Prompt user for the height of the triangle
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);

    // Print the right triangle
    for (i = 1; i <= height; i++) {
        for (j = 1; j <= i; j++) {
            printf("@");
        }
        printf("\n");
    }

    return 0;
}
