//C program to find factorial of a user given number
#include<stdio.h>
int main()
{
	int user_input_1,factorial=1;
	
	printf("Enter an number:");
	scanf("%d",&user_input_1);

	while(user_input_1 > 0) //we don't multiply 5*0
	{
		factorial=factorial*(user_input_1);
		user_input_1--;
	}
	printf("\nThe output is:%d\n", factorial);
	
	return 0;
}