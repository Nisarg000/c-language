#include<stdio.h>
int main()
{
	int user_input_1,i,j;

	printf("Enter the number of lines that you want: ");
	scanf("%d",&user_input_1);

	for (i = 1; i <= user_input_1; ++i)
	{
		printf("*");
		for(j = 1;j < i ;j++)
		{
			printf("*");
		}	
		 printf("\n");
	}

}