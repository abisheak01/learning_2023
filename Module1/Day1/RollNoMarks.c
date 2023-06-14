#include <stdio.h>

int main()
{
	int rollNumber;
    char name[50];
    float physicsMarks;
    float mathsMarks;
    float chemistryMarks;
    float totalMarks;
    
    printf("Enter Roll Number: ");
    scanf("%d", &rollNumber);

    printf("Enter Name with Initial: ");
    scanf(" %[^\n]s",name);

    printf("Enter Marks in Physics: ");
    scanf("%f", &physicsMarks);

    printf("Enter Marks in Maths: ");
    scanf("%f", &mathsMarks);

    printf("Enter Marks in Chemistry: ");
    scanf("%f", &chemistryMarks);
    
    totalMarks = physicsMarks + mathsMarks + chemistryMarks;
     
    printf("\n--- Student Summary ---\n");
    printf("Roll Number: %d\n",rollNumber);
    printf("Name with Initial: %s\n", name);
    printf("Physics Marks: %.2f\n", physicsMarks);
    printf("Maths Marks: %.2f\n", mathsMarks);
    printf("Chemistry Marks: %.2f\n", chemistryMarks);
    printf("Total Marks: %.2f\n", totalMarks);
}