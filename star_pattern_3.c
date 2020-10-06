#include<stdio.h>
int main()
{
	int user_input_1;
	printf("Enter the number of stars that you want:");
	scanf("%d",&user_input_1);

	for (int i = 0; i < user_input_1; ++i)
	{
		printf("*");
		
		for (int i = 0; i < user_input_1; ++i)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}