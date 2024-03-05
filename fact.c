#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("Enter the any no:");
	scanf("%d",&n);
	for( i=1; i<=n; ++i)
	{
		fact*=i;
	}
	printf("The factorial of you enterd no is:%d%d",n,fact);
	
	return 0;
}
