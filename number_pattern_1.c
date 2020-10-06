#include<stdio.h>
int main()
{
	int user_input_1,i,j;
	printf("Enter the numnber of lines that you want : ");
	scanf("%d",&user_input_1);

	for (i = 1; i <= user_input_1; ++i)
	{
		for (j = 1; j <= i; ++j)
		{
			printf("%d",i);
		}
		printf("\n");
	}

	return 0;
}