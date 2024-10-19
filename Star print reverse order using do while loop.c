#include <stdio.h>
int main() {
    int i = 5, j;
    do {
        j = i;
        do {
            printf("*");
            j--;
        } while(j > 0);
        printf("\n");
        i--;
    } while(i > 0);
    return 0;
}
