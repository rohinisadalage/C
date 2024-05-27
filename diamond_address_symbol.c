#include <stdio.h>

void printDiamond(int rows) {
    int n = rows * 2 - 1;  // Total number of rows for the full diamond

    // Upper half of the diamond (including the middle row)
    for (int i = 1; i <= rows; i++) {
        for (int j = i; j < rows; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("@");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = rows; j > i; j--) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("@");
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows for the diamond: ");
    scanf("%d", &rows);

    printDiamond(rows);

    return 0;
}
