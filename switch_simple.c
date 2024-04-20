
#include <stdio.h>

int main() {
    int n;
    printf("The week days are:");
    scanf("%d",&n);
    switch(n)
    {
        case 1: printf("Sunday\n");
        case 2: printf("Monday\n");
        case 3: printf("Tuesday\n");
        case 4: printf("Wenday\n");
        case 5: printf("Thursday\n");
        case 6: printf("Friday\n");
        case 7: printf("Saturday\n");
        default: printf("Invalid Choice");
    }
    return 0;
}
