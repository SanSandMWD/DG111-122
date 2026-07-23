#include <stdio.h>

int main(void) {
    int day;
  


    printf("=== วัน ===\n");
    /* prompt for day, then read it */
    printf("day: ");
    if (scanf("%d", &day) != 1) {
        return 1;
    }

    if (day == 1) {
        printf("Day: %d --> → Monday (Weekday)\n", day);
    } else if (day == 2) {
        printf("Day: %d --> → Tuesday (Weekday)\n", day);
    } else if (day == 3) {
        printf("Day: %d --> → Wednesday (Weekday)\n", day);
    } else if (day == 4) {
        printf("Day: %d --> → Thursday (Weekday)\n", day);
    } else if (day == 5) {
        printf("Day: %d --> → Friday (Weekday)\n", day);
    } else if (day == 6) {
        printf("Day: %d --> → Saturday (Weekend)\n", day);
    } else if (day == 7) {
        printf("Day: %d --> → Sunday (Weekend)\n", day);
    } else {
        printf("Day: %d --> Invalid day\n", day);
    }
    return 0;
}







