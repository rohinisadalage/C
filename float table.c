#include <stdio.h>
int main() {
    float numbers[] = {1.23, 4.56, 7.89, 10.11, 12.13};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    printf("Index\tValue\n");
    printf("-----\t-----\n");
    for (int i = 0; i < length; i++) {
        printf("%d\t%.2f\n", i, numbers[i]);
    }
    return 0;
}
