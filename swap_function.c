#include<stdio.h>
void swap()
{
	int a,b,c;
	printf("Enter the value for a and b accordingly:");
	scanf("%d%d",&a,&b);
	printf("Before swapping the elememts are:a=%d,b=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("After swapping the a and b values are:a=%d\n,b=%d\n",a,b);
	printf("Thank You...");
}
int main()
{
	swap();
	return 0;
}
