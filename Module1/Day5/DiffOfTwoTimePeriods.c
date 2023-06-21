#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time getTimePeriod() {
    struct Time tp;
    printf("Enter the time period (hh:mm:ss): ");
    scanf("%d:%d:%d", &(tp.hours), &(tp.minutes), &(tp.seconds));
    return tp;
}

struct Time calculateDifference(struct Time tp1, struct Time tp2) {
    struct Time diff;

    int totalSeconds1 = tp1.hours * 3600 + tp1.minutes * 60 + tp1.seconds;
    int totalSeconds2 = tp2.hours * 3600 + tp2.minutes * 60 + tp2.seconds;
    int diffSeconds = totalSeconds2 - totalSeconds1;

    diff.hours = diffSeconds / 3600;
    diffSeconds %= 3600;
    diff.minutes = diffSeconds / 60;
    diff.seconds = diffSeconds % 60;

    return diff;
}

int main() {
    struct Time timePeriod1, timePeriod2, difference;

    printf("Enter the first time period:\n");
    timePeriod1 = getTimePeriod();

    printf("Enter the second time period:\n");
    timePeriod2 = getTimePeriod();

    difference = calculateDifference(timePeriod1, timePeriod2);

    printf("\n");
    printf("Difference: %02d:%02d:%02d\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}