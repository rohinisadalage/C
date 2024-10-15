#include <stdio.h>
int main() {
    int i = 1, j;
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    while (i <= rows) {
        j = 1;
        while (j <= i) {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
