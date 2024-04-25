#include <stdio.h>
int main() {
    int num = 1;
    loop:
    printf("Number: %d\n", num);
    num++;
    if (num <= 5)
    {
        goto loop;
    }
    return 0;
}
