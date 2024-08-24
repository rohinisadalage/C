#include <stdio.h>
#include <string.h>
#define MAX_CHAR 256 
void countFrequency(char *str) {
    int frequency[MAX_CHAR] = {0}; 
    for (int i = 0; str[i] != '\0'; i++) {
        frequency[(unsigned char)str[i]]++;
    }
    printf("Character Frequency:\n");
    for (int i = 0; i < MAX_CHAR; i++) {
        if (frequency[i] != 0) {
            printf("%c: %d\n", i, frequency[i]);
        }
    }
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    countFrequency(str);
    return 0;
}
