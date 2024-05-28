#include <stdio.h>

void printRectangle(int width, int height, char symbol) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("%c ", symbol);
        }
        printf("\n");
    }
}

int main() {
    int width = 10;    // Width of the rectangle
    int height = 5;    // Height of the rectangle
    char symbol = '@'; // Symbol to fill the rectangle

    printRectangle(width, height, symbol);

    return 0;
}
