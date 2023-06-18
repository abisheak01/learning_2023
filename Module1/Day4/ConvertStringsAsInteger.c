#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[100];
    int num;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from the input string
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    num = atoi(str);

    printf("The integer value is: %d\n", num);

    return 0;
}