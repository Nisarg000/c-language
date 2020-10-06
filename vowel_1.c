#include<stdio.h>
int main()
{
	char user_input_1;

	printf("Enter an alphabet:");
	scanf("%c",&user_input_1);

	if (user_input_1 == 'A' || user_input_1 == 'a' ||
		user_input_1 == 'E' || user_input_1 == 'e' ||
		user_input_1 == 'I' || user_input_1 == 'i' ||
		user_input_1 == 'O' || user_input_1 == 'o' ||
		user_input_1 == 'U' || user_input_1 == 'u')
	{
		printf("\nThe character %c you have entered is an vowel.\n",user_input_1 );
	}
	else
		printf("\nThe character %c you have entered is not an vowel.\n",user_input_1);
}