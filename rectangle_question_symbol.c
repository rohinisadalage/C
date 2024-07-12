#include <stdio.h>

void printRectangle(int width, int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("?");
        }
        printf("\n");
    }
}

int main() {
    int width, height;

    // Input the dimensions of the rectangle
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    printf("Enter the height of the rectangle: ");
    scanf("%d", &height);

    // Print the rectangle
    printRectangle(width, height);

    return 0;
}
