#include<stdio.h>
int main()
{
	int mark;
	printf("Enter mark: ");
	scanf("%d",&mark);
	if(mark>=91 && mark<=100)
	{
		printf("Grade A");
	}
	else if(mark>=75 && mark<=89)
	{
		printf("Grade B");
	}
	else if(mark>=60 && mark<=74)
	{
		printf("Grade C");
	}
	else if(mark>=50 && mark<=59)
	{
		printf("Grade D");
	}
	else if(mark>=0 && mark<=49)
	{
		printf("Grade F");
	}
	else
	{
		printf("Invalid");
	}
}