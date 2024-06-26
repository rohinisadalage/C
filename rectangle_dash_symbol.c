#include <stdio.h>

int main() {
    int width, height;

    // Get the dimensions of the rectangle
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    printf("Enter the height of the rectangle: ");
    scanf("%d", &height);

    // Print the rectangle
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("-");
        }
        printf("\n");
    }

    return 0;
}
