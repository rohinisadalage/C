#include <stdio.h>
#include <stdlib.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    int absolute_value = abs(number);
    printf("The absolute value of %d is %d\n", number, absolute_value);
    return 0;
}
