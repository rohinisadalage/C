#include <stdio.h>

int main() {
    int i, j, rows;

    // Number of rows for the triangle
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("& ");
        }
        printf("\n");
    }

    return 0;
}
