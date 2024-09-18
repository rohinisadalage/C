#include <stdio.h>
typedef struct {
    int x;
    int y;
} Point;
Point addPoints(Point p1, Point p2) {
    Point result;
    result.x = p1.x + p2.x;
    result.y = p1.y + p2.y;
    return result;
}
int main() {
    Point p1 = {3, 4};
    Point p2 = {5, 6};
    Point sum = addPoints(p1, p2);
    printf("Sum of points: (%d, %d)\n", sum.x, sum.y);
    return 0;
}
