#include <stdio.h>
int main() {
    char ch;
    for(ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c ", ch);
    }
    printf("\n");
    for(ch = 'a'; ch <= 'z'; ch++) {
        printf("%c ", ch);
    } 
    printf("\n");
    return 0;
}
