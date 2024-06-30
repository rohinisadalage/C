#include <stdio.h>

void printDiamond(int n) {
    int i, j;

    // Top half of the diamond
    for(i = 1; i <= n; i++) {
        // Print leading spaces
        for(j = i; j < n; j++) {
            printf(" ");
        }
        // Print plus symbols
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("+");
        }
        // Move to the next line
        printf("\n");
    }

    // Bottom half of the diamond
    for(i = n-1; i >= 1; i--) {
        // Print leading spaces
        for(j = n; j > i; j--) {
            printf(" ");
        }
        // Print plus symbols
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("+");
        }
        // Move to the next line
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the number of rows for the top half of the diamond: ");
    scanf("%d", &n);

    printDiamond(n);

    return 0;
}
