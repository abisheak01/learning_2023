#include <stdio.h>

int main() {
    int i, n;
    int sum = 0;
    float avg;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    avg = (float)sum / n; 
    
    printf("The average of the numbers in the array is: %f", avg);

    return 0;
}