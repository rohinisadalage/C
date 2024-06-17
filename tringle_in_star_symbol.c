#include <stdio.h>

int main() {
    int rows, i, j;

    // Prompt the user to enter the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop through each row
    for(i = 1; i <= rows; i++) {
        // Print spaces
        for(j = i; j < rows; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= (2*i-1); j++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
