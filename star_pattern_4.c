#include<stdio.h>
int main()
{
	int user_input_1,i,j;
	printf("Enter the number of stars that you want:");
	scanf("%d",&user_input_1);

	for ( i = 0; i < user_input_1; ++i)
	{
		printf("*");
		
		for ( j = 0 ; j < i ; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}