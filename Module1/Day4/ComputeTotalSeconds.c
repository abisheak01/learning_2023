#include <stdio.h>
#include <stdlib.h>

int calculate_total_seconds(const char *time_string) {
    int hours, minutes, seconds;
    sscanf(time_string, "%d:%d:%d", &hours, &minutes, &seconds);
    
    int total_seconds = hours * 3600 + minutes * 60 + seconds;
    return total_seconds;
}

int main() {
    char time_string[9];
    
    printf("Enter time in hh:mm:ss format: ");
    fgets(time_string, sizeof(time_string), stdin);
    
    int total_seconds = calculate_total_seconds(time_string);
    printf("Total seconds: %d\n", total_seconds);
    
    return 0;
}