#include <stdio.h>

int main() {
    int i, j, n;

    // Get the number of rows for the triangle from the user
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop through each row
    for(i = 1; i <= n; i++) {
        // Print the plus symbols for the current row
        for(j = 1; j <= i; j++) {
            printf("+");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
