#include <stdio.h>

int main() {
    int n = 5; // You can change this value to adjust the height of the triangle
    int i, j;

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf(".");
        }
        printf("\n");
    }

    return 0;
}
