#include<stdio.h>
int main()
{
	int num1,num2;
	scanf("%d",&num1);
	char sym;
	scanf(" %c",&sym);
    scanf("%d",&num2);
if(sym == '+')
{
	printf("The sum of number is :%d ",num1+num2);
}
else if(sym == '-')
{

	printf("The difference of number is :%d ",num1-num2);
}
else if(sym == '*')
{
	
	printf("The Product of number is :%d ",num1*num2);
}
else if(sym == '/')
{
	
	printf("The division of number is :%d ",num1/num2);
}
else
{
	printf("Wrong Operator");
}
}