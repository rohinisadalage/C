#include <stdio.h>

void printDiamond(int n) {
    int i, j;

    // Print the upper part of the diamond
    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (j = i; j < n; j++) {
            printf(" ");
        }
        // Print the question mark symbols
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("?");
        }
        printf("\n");
    }

    // Print the lower part of the diamond
    for (i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (j = n; j > i; j--) {
            printf(" ");
        }
        // Print the question mark symbols
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("?");
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the number of rows for the diamond: ");
    scanf("%d", &n);

    printDiamond(n);

    return 0;
}
