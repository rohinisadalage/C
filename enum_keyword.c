#include <stdio.h>
enum Days {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};
int main() {
    enum Days today;
    today = WEDNESDAY;
    printf("Today is day %d\n", today);
    return 0;
}
