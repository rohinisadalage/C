#include <stdio.h>

void printDiamond(int n) {
    int i, j;
    int space = n - 1;

    // Top half of the diamond
    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (j = 1; j <= space; j++) {
            printf(" ");
        }
        space--;

        // Print = symbols
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("=");
        }
        printf("\n");
    }

    // Bottom half of the diamond
    space = 1;
    for (i = 1; i <= n - 1; i++) {
        // Print leading spaces
        for (j = 1; j <= space; j++) {
            printf(" ");
        }
        space++;

        // Print = symbols
        for (j = 1; j <= (2 * (n - i) - 1); j++) {
            printf("=");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of lines for the diamond: ");
    scanf("%d", &n);
    printDiamond(n);
    return 0;
}
