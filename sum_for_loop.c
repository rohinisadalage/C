#include<stdio.h>
int main()
{
	int sum=0, i,n;
	printf("Enter the any no. you want to make addition of those no.");
	scanf("%d",&n);
	for(i=0; i<=n; i++)
	{
		sum=sum+i;
	}
	printf("Sum is: %d\n",sum);
	printf("Thank You...");
	return 0;
}
