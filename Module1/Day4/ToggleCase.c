#include <stdio.h>
#include <ctype.h>

void toggle_case(char *string) {
    while (*string != '\0') {
        if (islower(*string)) {
            *string = toupper(*string);
        } else if (isupper(*string)) {
            *string = tolower(*string);
        }
        string++;
    }
}

int main() {
    char input_string[100];
    
    printf("Enter a string: ");
    fgets(input_string, sizeof(input_string), stdin);
    
    toggle_case(input_string);
    printf("Toggled case string: %s\n", input_string);
    
    return 0;
}