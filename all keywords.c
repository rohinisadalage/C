#include <stdio.h>
int global_var = 10; 
const float pi = 3.14; 
void staticFunction(); 
void registerDemo(); 
int main() 
{
    auto int a = 5; 
    char ch = 'A'; 
    short int b = 2; 
    long int c = 100000; 
    if (a > 3) {
        printf("a is greater than 3\n");
    } else {
        printf("a is less than or equal to 3\n");
    }
  switch (ch) {
        case 'A': 
            printf("Character is A\n");
            break; 
        default:
            printf("Character is not A\n");
    }
    for (int i = 0; i < 5; i++) { 
        printf("i = %d\n", i);
        if (i == 3) {
            continue
