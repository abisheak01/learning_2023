#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

int searchStudentByName(const struct Student students[], int numStudents, const char* name) {
    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return i;  // Return the index of the matching student
        }
    }
    return -1;  // Return -1 if student not found
}

void displayStudent(const struct Student* student) {
    printf("Roll No: %d\n", student->rollno);
    printf("Name: %s\n", student->name);
    printf("Marks: %.2f\n\n", student->marks);
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    getchar();

    struct Student* students = malloc(numStudents * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Assume students array is populated with data here

    char searchName[20];
    printf("Enter the name to search: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0';  // Remove trailing newline character

    int foundIndex = searchStudentByName(students, numStudents, searchName);
    if (foundIndex != -1) {
        printf("Student found:\n");
        displayStudent(&students[foundIndex]);
    } else {
        printf("Student not found.\n");
    }

    free(students);

    return 0;
}
