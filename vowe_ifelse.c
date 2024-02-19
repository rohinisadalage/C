#include<stdio.h>
int main()
{
	char i;
	printf("Enter the character:");
	scanf("%s",&i);
	if(i=='a'|| i=='e'|| i=='i'|| i=='o'|| i=='u')
	{
		printf("You enter character is vowel...");
	}
	else
	{
		printf("You enter character is consonent...");
	}
	return 0;
}
