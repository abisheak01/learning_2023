#include <stdio.h>

int getSmallestDigit(int num) {
    int smallest = 9;

    while (num > 0) {
        int digit = num % 10;
        if (digit < smallest) {
            smallest = digit;
        }
        num /= 10;
    }

    return smallest;
}

int getLargestDigit(int num) {
    int largest = 0;

    while (num > 0) {
        int digit = num % 10;
        if (digit > largest) {
            largest = digit;
        }
        num /= 10;
    }

    return largest;
}

int main() {
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    int num;
    printf("Enter %d numbers:\n", n);

    int smallest = 9;
    int largest = 0;  

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);

        int smallestDigit = getSmallestDigit(num);
        if (smallestDigit < smallest) {
            smallest = smallestDigit;
        }

        int largestDigit = getLargestDigit(num);
        if (largestDigit > largest) {
            largest = largestDigit;
        }
    }

    printf("Smallest digit: %d\n", smallest);
    printf("Largest digit: %d\n", largest);

    return 0;
}