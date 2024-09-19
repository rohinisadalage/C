#include <stdio.h>
typedef struct {
    int real;
    int imaginary;
} Complex;
Complex subtract(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imaginary = a.imaginary - b.imaginary;
    return result;
}
int main() {
    Complex num1 = {5, 3};
    Complex num2 = {2, 1};
    Complex result = subtract(num1, num2);
    printf("Result: %d + %di\n", result.real, result.imaginary);
    return 0;
}
