#include <stdio.h>

int main() {
    unsigned int a = 60;    // Binary: 0011 1100
    unsigned int b = 13;    // Binary: 0000 1101
    unsigned int result;

    // Bitwise AND
    result = a & b;         // 12
    printf("a & b = %u\n", result);  // Output: 12

    // Bitwise OR
    result = a | b;         // 61
    printf("a | b = %u\n", result);  // Output: 61

    // Bitwise XOR
    result = a ^ b;         // 49
    printf("a ^ b = %u\n", result);  // Output: 49

    // Bitwise NOT
    result = ~a;            // -61 (Two's complement of 61)
    printf("~a = %d\n", result);     // Output: -61

    // Left shift
    result = a << 2;        // 240
    printf("a << 2 = %u\n", result); // Output: 240

    // Right shift
    result = a >> 2;        // 15
    printf("a >> 2 = %u\n", result); // Output: 15

    return 0;
}
