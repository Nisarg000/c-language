#include <stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Input any 3 integer:");
	scanf("%d %d %d",&num1,&num2,&num3);

	if (num1 > num2 && num1 > num3)
	{
		printf("\nThe first number %d is the largest among %d and %d\n",num1,num2,num3);
	}
	else if (num2 > num1 && num2 > num3)
	{
		printf("\nThe second number %d is the largest among %d and %d\n",num2,num1,num3);
	}
	else
		printf("\nThe third number %d is the largest among %d and %d\n",num3,num1,num2);

	return 0;
}