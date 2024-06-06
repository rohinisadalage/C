#include <stdio.h>

void printTriangle(int height) {
    for(int i = 1; i <= height; i++) {
        for(int j = 1; j <= i; j++) {
            printf("!");
        }
        printf("\n");
    }
}

int main() {
    int height;
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);

    printTriangle(height);

    return 0;
}
