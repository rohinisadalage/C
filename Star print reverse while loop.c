#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    i = n;
    while (i > 0) {
        j = i;
        while (j > 0) {
            printf("*");
            j--;
        }
        printf("\n");
        i--;
    }
    return 0;
}
