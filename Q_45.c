// WAP to check the no. is Twin or not. Using Do … While Loop
// e.g. 123= 1+2+3=6 && 1*2*3=6
#include<stdio.h>
int main()
{
	int user_input_1,sum=0,temp=0,multi=1;
	printf("Enter an number:");
	scanf("%d",&user_input_1); //e.g. 123

	do
	{
		temp = user_input_1 % 10; // 123 = 12.3,1.23
		sum = sum + temp; // 0=0+12=12,12=1+
		multi = multi * temp; // 1=1*12=12 12=
		user_input_1 = user_input_1 / 10; //123=123/10=12.3
	}

	while(user_input_1 > 0);
	
	if (sum == multi)
	{
		printf("The number you have entered is an twin number\n");
	}
	else
	printf("\nThe number you have entered is not an twin number!!!\n");

	return 0;
}