#include<stdio.h>
void swap(int *,int *);
int main()
{
	int n1,n2;
	printf("Enter n1: ");
	scanf("%d",&n1);
	printf("Enter n2: ");
	scanf("%d",&n2);
	printf("Before swap n1=%d and n2=%d",n1,n2);
	swap(&n1,&n2);
	printf("\n After swap n1=%d and n2=%d",n1,n2);
	return 0;
}
void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
	
}