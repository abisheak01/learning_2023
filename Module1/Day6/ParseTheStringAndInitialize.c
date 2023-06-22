#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseAndInitialize(const char* input, struct Student students[], int numStudents) {
    char rollnoStr[20];
    char name[20];
    char marksStr[20];

    sscanf(input, "%s %s %s", rollnoStr, name, marksStr);

    struct Student newStudent;
    newStudent.rollno = atoi(rollnoStr);
    strncpy(newStudent.name, name, sizeof(newStudent.name));
    newStudent.marks = atof(marksStr);

    students[numStudents] = newStudent;
}

int main() {
    int numInputs;
    printf("Enter the number of student inputs: ");
    scanf("%d", &numInputs);
    getchar(); 

    struct Student* students = malloc(numInputs * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < numInputs; i++) {
        char input[100];
        printf("Enter student details (Roll No Name Marks): ");
        fgets(input, sizeof(input), stdin);

        input[strcspn(input, "\n")] = '\0';

        parseAndInitialize(input, students, i);
    }

    for (int i = 0; i < numInputs; i++) {
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    free(students);

    return 0;
}