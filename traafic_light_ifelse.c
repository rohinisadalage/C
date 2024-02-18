#include<stdio.h>
#include<string.h>
int main()
{
	char currentColor[10];
	printf("Enter the current traffic light color:");
	scanf("%s",currentColor);
	if(strcmp(currentColor,"red")==0)
	{
		printf("Next color: green \n");
	}
	else if(strcmp(currentColor,"yellow")==0)
	{
		printf("Next color: Red \n");
	}
	else if(strcmp(currentColor,"green")==0)
	{
		printf("Next color: Yellow \n");
	}
	else
	{
		printf("Invalid input!");
	}
	return 0;
}
























