#include <stdio.h>
#include <limits.h>
int main() {
    int signedInt = 10;
    short signedShort = -5;
    long signedLong = 1000000;
    long long signedLongLong = 90000000000;
    unsigned int unsignedInt = 20;
    unsigned short unsignedShort = 15;
    unsigned long unsignedLong = 2000000;
    unsigned long long unsignedLongLong = 180000000000;
    printf("Signed int: %d, Range: [%d, %d]\n", signedInt, INT_MIN, INT_MAX);
    printf("Signed short: %hd, Range: [%d, %d]\n", signedShort, SHRT_MIN, SHRT_MAX);
    printf("Signed long: %ld, Range: [%ld, %ld]\n", signedLong, LONG_MIN, LONG_MAX);
    printf("Signed long long: %lld, Range: [%lld, %lld]\n", signedLongLong, LLONG_MIN, LLONG_MAX);
    printf("Unsigned int: %u, Range: [0, %u]\n", unsignedInt, UINT_MAX);
    printf("Unsigned short: %hu, Range: [0, %u]\n", unsignedShort, USHRT_MAX);
    printf("Unsigned long: %lu, Range: [0, %lu]\n", unsignedLong, ULONG_MAX);
    printf("Unsigned long long: %llu, Range: [0, %llu]\n", unsignedLongLong, ULLONG_MAX);
    return 0;
}
