#include<stdio.h>
int main()
{
	int n;
	printf("enter any positive or negative number:");
	scanf("%d",&n);
	if(n>=0)
	{
	    printf("The no is positive....");
    }
    else if(n<=0)
    {
    	printf("The no is negative.....");
	}
	else
	{
		printf("The no is zero....");
	}
	return 0;
}
