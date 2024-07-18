#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter the number of rows for the diamond (half of the diamond height): ");
    scanf("%d", &n);

    // Upper part of the diamond
    for(i = 1; i <= n; i++) {
        for(j = i; j < n; j++) {
            printf(" ");
        }
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("@");
        }
        printf("\n");
    }

    // Lower part of the diamond
    for(i = n - 1; i >= 1; i--) {
        for(j = n; j > i; j--) {
            printf(" ");
        }
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("@");
        }
        printf("\n");
    }

    return 0;
}
