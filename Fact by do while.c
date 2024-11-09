#include <stdio.h>
int main() {
    int num, factorial = 1, i = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        do {
            factorial *= i;
            i++;
        } while (i <= num);
        printf("Factorial of %d is %d\n", num, factorial);
    }
    return 0;
}
