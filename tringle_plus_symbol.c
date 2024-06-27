#include <stdio.h>

int main() {
    int rows, i, j, k;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        // Print spaces
        for(j = i; j < rows; j++) {
            printf(" ");
        }
        // Print plus symbols
        for(k = 1; k <= (2 * i - 1); k++) {
            printf("+");
        }
        printf("\n");
    }

    return 0;
}
