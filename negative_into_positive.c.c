// The -ve covert into +ve number
#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the any no:");
    scanf("%d",&n);
    
    if(n<0)
    {
        n=n*(-1);
        printf("%d\n",n);
    }
    printf("Thank You...");
    return 0;
}