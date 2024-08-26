#include <stdio.h>
#include <string.h>
int main() {
    char str1[50] = "Hello, ";
    char str2[50] = "World!";
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    strcat(str1, str2);
    printf("After concatenation: %s\n", str1);
    int length = strlen(str1);
    printf("Length of str1: %d\n", length);
    char str3[50];
    strcpy(str3, str1);
    printf("Copied string (str3): %s\n", str3);
    return 0;
}
