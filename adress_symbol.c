#include <stdio.h>

int main() {
    int n; // Height of the triangle
    printf("Enter the height of the triangle: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        // Print '@' symbols
        for (int k = 1; k <= (2*i - 1); k++) {
            printf("@");
        }
        printf("\n");
    }

    return 0;
}
