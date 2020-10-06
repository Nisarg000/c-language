//C program to find factorial of a given number
#include <stdio.h>
int main()
{
	int user_input_1,answer=1,i=1; //why didn't my program work?
	printf("Enter an number to find its factorial:");
	scanf("%d",&user_input_1); // 5
	do
	{
		answer = user_input_1 * (user_input_1 -1); // 1=1*5=5,5=1*4=4;4=1*3=3
		i++;
	}

	while(answer <= user_input_1 ); // 1 <= 5

	printf("\nThe answer is: %d\n",answer);

	/*int user_input_1,answer=1,i=1;
	printf("Enter an number to find its factorial:");
	scanf("%d",&user_input_1); // 5

	do
	{
		answer=answer*i; // 1=1*1=1, 1=1*2=2, 2=2*3=6, 6=6*4=24,24=24*5=120 ;
		i++;
	}

	while(i <= user_input_1); // 1 <= 5

	printf("\nThe answer is: %d\n",answer);

	return 0;