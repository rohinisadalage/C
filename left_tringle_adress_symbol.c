#include <stdio.h>

int main() {
    int n;

    // Get the number of rows for the triangle
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop to print the triangle
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("@");
        }
        printf("\n");
    }

    return 0;
}
