#include <stdio.h>
#include <time.h>
int main() {
    time_t now;
    struct tm *current_time;
    char date_string[11];  
    time(&now);
    current_time = localtime(&now);
    strftime(date_string, sizeof(date_string), "%Y-%m-%d", current_time);
    printf("Current date: %s\n", date_string);
    return 0;
}
