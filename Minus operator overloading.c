#include <stdio.h>
typedef struct {
    int x;
    int y;
} Vector;
Vector subtract(Vector a, Vector b) {
    Vector result;
    result.x = a.x - b.x;
    result.y = a.y - b.y;
    return result;
}
int main() {
    Vector v1 = {10, 20};
    Vector v2 = {4, 6};
    Vector result = subtract(v1, v2);
    printf("Result of subtraction: (%d, %d)\n", result.x, result.y);
    return 0;
}
