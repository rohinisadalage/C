#include <stdio.h>

int main() {
    int n, i, j, space;

    // Enter the number of rows for the diamond (half of the diamond)
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Upper half of the diamond
    for (i = 1; i <= n; i++) {
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("&");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (i = n - 1; i >= 1; i--) {
        for (space = 1; space <= n - i; space++)
