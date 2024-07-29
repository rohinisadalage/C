#include <stdio.h>
int main() {
    float num1, num2, result;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    if(num2 != 0) {
        result = num1 / num2;
        printf("Result of the division: %.2f\n", result);
    } else {
        printf("Error! Division by zero is not allowed.\n");
    }
    return 0;
}
