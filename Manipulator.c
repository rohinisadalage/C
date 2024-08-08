#include <stdio.h>
int main() {
    int number = 12345;
    printf("Basic printing: %d\n", number);
    printf("Field width 10: %10d\n", number);
    printf("Left-aligned with width 10: %-10d\n", number);
    printf("Leading zeros with width 10: %010d\n", number);
    printf("Hexadecimal: %x\n", number);
    double pi = 3.14159265358979;
    printf("Scientific notation: %e\n", pi);
    return 0;
}
