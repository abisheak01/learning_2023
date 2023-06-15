#include <stdio.h>

void print_bits(unsigned int n) {
    int i;
    unsigned int m = 1 << 31; 

    for (i = 0; i < 32; i++) {       
        if (n & m)
            printf("1");
        else
            printf("0");
        m >>= 1;
    }
}

int main() {
    unsigned int n;
    printf("32-bit integer: ");
    scanf("%u", &n);
    printf("Bits: ");
    print_bits(n);
    return 0;
}