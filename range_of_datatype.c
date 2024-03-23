//WAP to print the primitive data type ranges
#include<stdio.h>
#include<limits.h>

void main()
{
	printf("\nMemory range of primitive datatype:");
	printf("\n short=%d to %d",SHRT_MIN,SHRT_MAX);
	printf("\n int=%d to %d",INT_MIN,INT_MAX);
	printf("\n long=%d to %d",LONG_MIN,LONG_MAX);
	printf("\n char=%d to %d",CHAR_MIN,CHAR_MAX);
}
