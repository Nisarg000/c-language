// WAP to see if the user entered number is an abundant,deficient,perfect number.
#include<stdio.h>
int main()
{
	int user_input_1,i,sum = 0;
	printf("Enter an number : ");
	scanf("%d",&user_input_1); // e.g. 12 14 28

	for (int i = 0; i < user_input_1; ++i)
	{
		if (user_input_1 % i == 0) 
		{
			sum += i;
		}
	}
	if (sum > user_input_1)
	{
		printf("\nThe number %d which you have entered is an abundant number.\n",user_input_1 );
	}
	else if (sum < user_input_1)
	{
		printf("\nThe number %d which you have entered is an deficient number.\n",user_input_1 );
	}
	else
	{
		printf("\nThe number %d which you have entered is an perfect number.\n",user_input_1 );
	}

}