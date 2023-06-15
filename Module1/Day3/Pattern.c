#include <stdio.h>

void print_numbers(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
    }
    for (int i = n - 1; i >= 1; i--) {
        printf("%d", i);
    }
}

void print_spaces(int n) {
    for (int i = 1; i <= n; i++) {
        printf(" ");
    }
}

void print_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        print_numbers(i);
        print_spaces(2 * (n - i));
        print_numbers(i);
        printf("\n");
    }
}

int main() {
    int n = 5;
    print_pattern(n);
    
    return 0;
}