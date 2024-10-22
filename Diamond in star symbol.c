#include <stdio.h>
void printDiamondWithStar(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            if (i == n / 2 + 1 && j == (2 * i - 1) / 2 + 1) {
                printf("*");  
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (j = n; j > i; j--) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            if (i == n / 2 + 1 && j == (2 * i - 1) / 2 + 1) {
                printf("*");  
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter the number of rows for the diamond (odd number): ");
    scanf("%d", &n
