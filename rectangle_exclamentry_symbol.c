#include <stdio.h>

void printRectangle(int width, int height) {
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            printf("!");
        }
        printf("\n");
    }
}

int main() {
    int width, height;

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    printf("Enter the height of the rectangle: ");
    scanf("%d", &height);

    printf("Rectangle with width %d and height %d:\n", width, height);
    printRectangle(width, height);

    return 0;
}
