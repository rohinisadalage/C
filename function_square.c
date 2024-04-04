#include<stdio.h>
void square()
{
	int n,sqrt;
	printf("Enter the number:");
	scanf("%d",&n);
	sqrt=n*n;
	printf("The squre of the number is:%d",sqrt);
}
int main()
{
	square();
	printf("\nThank You...");
	return 0;
}
