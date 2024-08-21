#include <stdio.h>
int main() {
    int rows = 5, cols = 5;
    float multiplier = 0.5;
    printf("    ");
    for (int j = 1; j <= cols; j++) {
        printf("%6.2f ", j * multiplier);
    }
    printf("\n");
    for (int i = 1; i <= rows; i++) {
        printf("%6.2f ", i * multiplier);  // Row header
        for (int j = 1; j <= cols; j++) {
            printf("%6.2f ", i * j * multiplier * multiplier);
        }
        printf("\n");
    }
    return 0;
}
