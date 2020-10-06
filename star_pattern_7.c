#include<stdio.h>
int main()
{
	int user_input_1,i,j;
	printf("Enter the number of stars that you want:");
	scanf("%d",&user_input_1); // 5

	for (i = 1; i < user_input_1-1; i++) // 1 <= 5
	{
		printf("  ");
		for (j = i ; j <= user_input_1 ; j++) //  
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}