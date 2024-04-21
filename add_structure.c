#include <stdio.h>
typedef struct {
    int num1;
    int num2;
} Numbers;

int add(Numbers nums) {
    return nums.num1 + nums.num2;
}
int main() {
    Numbers nums;
    printf("Enter first number: ");
    scanf("%d", &nums.num1);
    printf("Enter second number: ");
    scanf("%d", &nums.num2);
    printf("Addition: %d\n", add(nums));
    return 0;
}
  
