#include <stdio.h>

int main(void) {
    int totalSeconds;
    int hours;
    int minutes;
    int seconds;

    printf("=== กรอกข้อมูล ===\n");
    /* Use fixed example input as requested */
    totalSeconds = 3723;
    printf("Input: %d seconds\n", totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("Output: %02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}

