// Q_32
#include<stdio.h>
int main()
{
	int i,num,power;
	printf("Input any one number:");
	scanf("%d",&num);
	printf("\n Input the power for that number:");
	scanf("%d",&power);
	for (i = 0; i < num; ++i)
	{
		num=num*power;
		printf("Output is: %d\n",num);
	}
	return 0;
}