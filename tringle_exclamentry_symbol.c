#include <stdio.h>

int main() {
    int height = 5;  // You can change this value to adjust the size of the triangle

    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            printf("!");
        }
        printf("\n");
    }

    return 0;
}
