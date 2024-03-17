#include<stdio.h>
int main()
{
	int a,b,gcd,i;
	printf("Enter the 1st Positive integer number:");
	scanf("%d",&a);
	printf("Enter the 2nd Positive integer number:");
	scanf("%d",&b);
	
	for(i=0; i<=a && i<=b; i++)
	{
		if(a%i==0 && b%i==0)
		{
			gcd=i;
		}
		printf("GCD of the yu entered number is:",gcd,a,b);
	}
	printf("Thank You...");
	return 0;
}
