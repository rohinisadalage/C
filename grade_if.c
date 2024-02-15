#include<stdio.h>
int main()
{
	int g;
	printf("Enter the grade in numeric form:");
	scanf("%d",&g);
	if(g>=90 && g<100)
	{
	    printf("Grade is A+");
    }
    else if(g>80 && g<90)
    {
    	printf("Grade is A");
	}
	else if(g>70 && g<80)
    {
    	printf("Grade is B");
	}
	else if(g>40 && g<70)
    {
    	printf("Grade is C");
	}
	else
	{
		printf("Fail...");
	}
	return 0;
}
