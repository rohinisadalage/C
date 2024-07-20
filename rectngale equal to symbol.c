#include <stdio.h>

void printRectangle(int width, int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("=");
        }
        printf("\n");
    }
}

int main() {
    int width, height;

    // Specify the width and height of the rectangle
    width = 10;  // change this value for different width
    height = 5;  // change this value for different height

    printRectangle(width, height);

    return 0;
}
