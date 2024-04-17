#include <stdio.h>

void increment() {
    static int count = 0;
    count++;
    printf("Count: %d\n", count);
}

int main() {
    increment(); // Count: 1
    increment(); // Count: 2
    increment(); // Count: 3
    return 0;
}
