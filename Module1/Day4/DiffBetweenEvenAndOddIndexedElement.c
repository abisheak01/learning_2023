#include <stdio.h>

int main() {
    int i, n;
    int sumEvenIndices = 0;
    int sumOddIndices = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            // Even index
            sumEvenIndices += arr[i];
        } else {
            // Odd index
            sumOddIndices += arr[i];
        }
    }

    int difference = sumEvenIndices - sumOddIndices;

    printf("Sum of elements at even indices: %d\n", sumEvenIndices);
    printf("Sum of elements at odd indices: %d\n", sumOddIndices);
    printf("Difference: %d\n", difference);

    return 0;
}