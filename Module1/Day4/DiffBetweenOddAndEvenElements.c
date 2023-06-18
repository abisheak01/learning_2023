#include <stdio.h>

int main() {
    int i, n;
    int sumOdd = 0;
    int sumEven = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            // Even element
            sumEven += arr[i];
        } else {
            // Odd element
            sumOdd += arr[i];
        }
    }

    int difference = sumEven - sumOdd;

    printf("Sum of odd elements: %d\n", sumOdd);
    printf("Sum of even elements: %d\n", sumEven);
    printf("Difference: %d\n", difference);

    return 0;
}