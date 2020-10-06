#include<stdio.h>
int main()
{
	int num;
	printf("Input any number\n");
	scanf("%d",&num);
	if (num %7 == 0 && num <200 && num > 100)
	{
		printf("Then number is divisible by 7\n",num);
	}
	else
		printf("The number is not divisible by 7\n");
	return 0;
}
