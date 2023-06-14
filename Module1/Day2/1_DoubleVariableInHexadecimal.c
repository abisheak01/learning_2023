#include <stdio.h>
#include <stdint.h>

void printExponent(double num) {
    uint64_t *bits = (uint64_t *)&num;
    uint64_t exponentBits = (*bits >> 52) & 0x7FF;
    printf("Exponent (hex): 0x%lx\n", exponentBits);
    printf("Exponent (binary): ");
    for (int i = 10; i >= 0; i--) {
        printf("%d", (exponentBits >> i) & 1);
    }
    printf("\n");
}
int main() {
    double number = 123.456;

    printf("Number: %lf\n", number);
    printExponent(number);

    return 0;
}