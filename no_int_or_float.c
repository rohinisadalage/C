#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    char number[10];
    int flag = 0;
    int length, i = 0;

    printf("\n\nEnter a number: ");
    scanf("%s", number);

    length = strlen(number);

   
    while(number[i++] != '\0')   
    {
        if(number[i] == '.')   
        {
            flag = 1;
            break;
        }
    }
    
    if(flag)
        printf("\n\n\n\tEntered Number is a Floating point Number\n\n");
    else
        printf("\n\n\n\tEntered Number is a integer Number\n\n");

    printf("\n\n\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}