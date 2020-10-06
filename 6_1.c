#include<stdio.h>
int main()
{
	int num;
	printf("Input any number\n");
	scanf("%d",&num);

	if (num %2 == 0)
	{
		printf("Number is even\n");
	}

	if (num %2 != 0)
	{
		printf("Number is odd\n");
	}
	//else
	//	printf("The number %d you have entered is odd\n",num);
	return 0;
}

