#include <stdio.h>
int subtract(int a, int b) {
    return a - b;
}
int main() {
    int num1, num2, result;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    result = subtract(num1, num2);
    printf("Result of subtraction: %d\n", result);
    return 0;
}
