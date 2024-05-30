#include <stdio.h>

int main() {
    int rows, i, j;

    // Prompt user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to print each row
    for(i = 1; i <= rows; i++) {
        // Loop to print the hash symbols
        for(j = 1; j <= i; j++) {
            printf("#");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
