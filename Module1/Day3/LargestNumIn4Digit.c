#include <stdio.h>

int deleteDigitAndGetLargest(int number) {
    int largest = 0;
    char numStr[5];
    snprintf(numStr, sizeof(numStr), "%d", number);
    for (int i = 0; i < 4; i++) {
        char tempStr[4];
        int tempNum = 0;
        int idx = 0;
        for (int j = 0; j < 4; j++) {
            if (j != i) {
                tempStr[idx++] = numStr[j];
            }
        }

        tempStr[idx] = '\0';
        sscanf(tempStr, "%d", &tempNum);

        if (tempNum > largest) {
            largest = tempNum;
        }
    }

    return largest;
}

int main() {
    int number;

    printf("4-digit number: ");
    scanf("%d", &number);

    int largestNumber = deleteDigitAndGetLargest(number);
    printf("Largest number after deleting a single digit: %d\n", largestNumber);

    return 0;
}