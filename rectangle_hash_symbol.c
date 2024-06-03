#include <stdio.h>

void printRectangle(int width, int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("#");
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

    printf("\n");

    printRectangle(width, height);

    return 0;
}
