//Write a c code to calculate the number of digits iin the given no using while loop
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10;
        count++;
    }
    printf("The total digits are:%d",count);
    printf("\nThank You...");
    return 0;
}
