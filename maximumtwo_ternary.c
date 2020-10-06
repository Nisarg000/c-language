// c program to find maximum of two numbers using ternary operators
#include <stdio.h>
int main()
{
	int num1,num2,maximum;
	printf("Enter any two numbers:\n");
	scanf("%d %d",&num1,&num2);

	maximum=(num1 > num2) ? num1 : num2;
	printf("Maximum from %d and %d is %d" ,num1, num2, maximum);
	return 0;
}
