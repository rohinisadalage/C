#include <stdio.h>

void printDiamond(int n) {
    int space = n - 1;

    // Print the upper part of the diamond
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= space; j++) {
            printf(" ");
        }
        space--;

        // Print dots
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf(".");
        }
        printf("\n");
    }

    space = 1;

    // Print the lower part of the diamond
    for (int i = 1; i <= n - 1; i++) {
        // Print leading spaces
        for (int j = 1; j <= space; j++) {
            printf(" ");
        }
        space++;

        // Print dots
        for (int j = 1; j <= 2 * (n - i) - 1; j++) {
            printf(".");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows for the diamond (half of the diamond): ");
    scanf("%d", &n);

    printDiamond(n);

    return 0;
}
