// Swapping of two numbers with third variable in c by Nisarg
#include<stdio.h>
int main()
{
	int num1,num2,temp;
	printf("Enter the values of two numbers: ");
	scanf("%d %d",&num1,&num2);

	temp=num1;
	num1=num2;
	num2=temp;

	printf("\nThe value of number 1 is:%d ",num1);
	printf("\nThe value of number 2 is: %d",num2);
	return 0;
}