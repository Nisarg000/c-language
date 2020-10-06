// Arithmetic operations of two numbers in c by Nisarg
#include<stdio.h>
int main()
{
	int num1,num2,sum,multi,sub;
	float div;
	printf("\nEnter two numbers:");
	scanf("%d %d",&num1,&num2);

	sum = num1 + num2;
	printf("\nThe addition of %d & %d is: %d",num1,num2,sum);

	sub = num1 - num2;
	printf("\nThe subtraction of %d & %d is: %d",num1,num2,sub);
	
	multi = num1 * num2;
	printf("\nThe Multiplication of %d & %d is: %d",num1,num2,multi);
	
	div = num1 / num2;
	printf("\nThe Division of %d & %d is: %f",num1,num2,div);
	
	return 0;
}