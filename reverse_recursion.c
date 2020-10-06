#include<stdio.h>
#include<stdlib.h>

int rev(int user_input);


int main()
{
	int user_input;

	/*SIMPLE STYLE*/

	printf("\nEnter a number : ");
	scanf("%d",&user_input);
	rev(user_input);
	
	/*COMPLEX STYLE*/
	//see screenshot and complete it

	// int reverse;
	// reverse = rev(user_input,0);
	// printf("\nReverse of your number is : %d\n",reverse);

	return 0;
}

int rev(int user_input)
{
	printf("%d",user_input % 10);
	if (user_input > 10)
	{
		rev(user_input / 10);
	}
}