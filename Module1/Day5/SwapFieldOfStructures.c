#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

void swapFields(struct Student* student1, struct Student* student2) {

    char tempName[50];
    strcpy(tempName, student1->name);
    strcpy(student1->name, student2->name);
    strcpy(student2->name, tempName);

    int tempAge = student1->age;
    student1->age = student2->age;
    student2->age = tempAge;

    float tempMarks = student1->marks;
    student1->marks = student2->marks;
    student2->marks = tempMarks;
}

int main() {
    struct Student student1, student2;

    printf("Enter details for student 1:\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Age: ");
    scanf("%d", &(student1.age));
    printf("Marks: ");
    scanf("%f", &(student1.marks));

    printf("\nEnter details for student 2:\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Age: ");
    scanf("%d", &(student2.age));
    printf("Marks: ");
    scanf("%f", &(student2.marks));

    swapFields(&student1, &student2);

    printf("\nSwapped Data:\n");
    printf("Student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Marks: %.2f\n", student1.marks);
    printf("\nStudent 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("Marks: %.2f\n", student2.marks);

    return 0;
}