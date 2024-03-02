#include<stdio.h>
int main()
{
	//for intger datatype
	int a=25;
	int *ptr;
	ptr =&a;
	printf("This is the value and address for integer datatye:\n");
	printf("%d\n",a);                 //value which is we peinting
	printf("%d\n",ptr);        	      //adress of the value
	printf("%d\n",*ptr);
	
	return 0;
}
