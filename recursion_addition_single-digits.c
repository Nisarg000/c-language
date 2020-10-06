#include<stdio.h>
#include<stdlib.h>

int Calculation(int user_input);

int main()
{
	int user_input;

    printf("\nEnter a number : ");
    scanf("%d",&user_input); //e.g. 237 = 12

    printf("\nAns : %d",Calculation(user_input));
 
	Calculation(231);

	return 0;
}

int Calculation(int user_input)
{
	int temp,sum;
	if (user_input > 10)
	{
		return user_input;
	}

	else
		return user_input % 10 + Calculation(user_input / 10);
}