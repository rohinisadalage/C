#include <stdio.h>

int main() {
    int i, j, n;

    // Number of rows for the triangle
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("@ ");
        }
        printf("\n");
    }

    return 0;
}
