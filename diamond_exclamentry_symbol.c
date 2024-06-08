#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows for the diamond (half): ");
    scanf("%d", &n);

    // Upper half of the diamond
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        // Print exclamation marks
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("!");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        // Print exclamation marks
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("!");
        }
        printf("\n");
    }

    return 0;
}
