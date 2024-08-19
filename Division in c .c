#include <stdio.h>
int main() {
    float num1, num2, result;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    if (num2 == 0) {
        printf("Error! Division by zero is not allowed.\n");
    } else {
        result = num1 / num2;
        printf("Result of %.2f / %.2f = %.2f\n", num1, num2, result);
    }
    return 0;
}
