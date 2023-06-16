#include <stdio.h>
#include <limits.h> 

void findLargestSmallest(int digits[], int numDigits, int *largest, int *smallest) {
    *largest = INT_MIN;
    *smallest = INT_MAX;
    
    for (int i = 0; i < numDigits; i++) {
        if (digits[i] > *largest) {
            *largest = digits[i];
        }
        if (digits[i] < *smallest) {
            *smallest = digits[i];
        }
    }
}

void processNumber(int number) {
    if (number < 10) {
        printf("Invalid number!\n\n");
        return;
    }
    
    int maxDigits = 10; 
    int digits[maxDigits]; 
    
    
    for (int i = 0; i < maxDigits; i++) {
        digits[i] = 0;
    }
    
    
    int numDigits = 0;
    int tempNumber = number;
    while (tempNumber != 0) {
        tempNumber /= 10;
        numDigits++;
    }
    
    
    tempNumber = number;
    int index = numDigits - 1;
    while (tempNumber != 0) {
        digits[index] = tempNumber % 10;
        tempNumber /= 10;
        index--;
    }
    
    
    printf("Digits: ");
    for (int i = 0; i < numDigits; i++) {
        printf("%d ", digits[i]);
    }
    printf("\n");
    
    
    int largest, smallest;
    findLargestSmallest(digits, numDigits, &largest, &smallest);
    
    
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n\n", smallest);
}

int main() {
    int numNumbers;
    printf("Enter the number of numbers: ");
    scanf("%d", &numNumbers);
    
    
    for (int count = 1; count <= numNumbers; count++) {
        int number;
        printf("Enter number %d: ", count);
        scanf("%d", &number);
        
        processNumber(number);
    }
    
    return 0;
}