#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

float calculateVolume(struct Box* boxPtr) {
    float volume = boxPtr->length * boxPtr->width * boxPtr->height;
    return volume;
}

float calculateSurfaceArea(struct Box* boxPtr) {
    float area = 2 * (boxPtr->length * boxPtr->width + boxPtr->length * boxPtr->height + boxPtr->width * boxPtr->height);
    return area;
}

int main() {
    struct Box myBox;
    
    printf("Enter the length of the box: ");
    scanf("%f", &myBox.length);
    
    printf("Enter the width of the box: ");
    scanf("%f", &myBox.width);
    
    printf("Enter the height of the box: ");
    scanf("%f", &myBox.height);
    
    struct Box* boxPtr = &myBox;
    
    float volume = calculateVolume(boxPtr);
    float surfaceArea = calculateSurfaceArea(boxPtr);
    
    printf("Volume of the box: %.2f\n", volume);
    printf("Total surface area of the box: %.2f\n", surfaceArea);
    
    return 0;
}