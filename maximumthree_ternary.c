// c program to find maximum of three numbers using ternary operators
#include <stdio.h>
int main()
{
	int num1,num2,num3,maximum;
	printf("Enter any three numbers:\n");
	scanf("%d%d%d",&num1,&num2,&num3);

	maximum = (num1>num2 && num1>num3) ? (num2>num1 && num2>num3) : (num3>num1 && num3>num2);
	printf("Maximum from %d and %d and %d is %d" ,num1, num2, num3,maximum);
	return 0;
}
