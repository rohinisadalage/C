#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the 1st number:\n");
    scanf("%d",&a);
    printf("Enter the 2nd number:\n");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("Sum is:%d\n",sum);
    int substraction = sub(a,b);
    printf("Sum is:%d\n",substraction);
    int multiplication = mul(a,b);
    printf("Sum is:%d\n",multiplication);
    int division = div(a,b);
    printf("Sum is:%d\n",division);
    printf("Thank You...");
    return 0;
}
int add(int x, int y)
{
    return x+y;
}
int sub(int x, int y)
{
    return x-y;
}
int mul(int x, int y)
{
    return x*y;
}
int div(int x, int y)
{
    return x/y;
}