#include <stdio.h>
void demonstrateConstModifier() {
    const int num = 10;
    printf("The value of num is: %d\n", num);
}
void demonstrateVolatileModifier() {
    volatile int flag = 1;
    while (flag) {
        printf("Flag is set\n");
        flag = 0; 
    }
    printf("Flag is cleared\n");
}
void demonstrateStaticModifier() {
    static int counter = 0;
    counter++;
    printf("Counter value: %d\n", counter);
}
int main() {
    demonstrateConstModifier();
    demonstrateVolatileModifier();
    demonstrateStaticModifier(); 
    demonstrateStaticModifier();
    return 0;
}
