#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age:");
	scanf("%d",&age);
	if(age>18)
	{
		printf("User is adult");
	}
	else if(age>=13 && age<=17)
	{
		printf("User is teenager");
	}
	else
	{
		printf("User is child");
	}
	
	return 0;
}
