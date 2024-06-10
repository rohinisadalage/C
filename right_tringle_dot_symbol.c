#include <stdio.h>

int main() {
    int n;

    // Prompt the user for the height of the triangle
    printf("Enter the height of the triangle: ");
    scanf("%d", &n);

    // Loop through each row
    for (int i = 1; i <= n; i++) {
        // Print dots for the current row
        for (int j = 1; j <= i; j++) {
            printf(".");
        }
        // Move to the next line after printing dots for the current row
        printf("\n");
    }

    return 0;
}
