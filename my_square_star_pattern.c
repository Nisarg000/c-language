#include<stdio.h>
int main()
{
	int row_num,rows,column,i;
	printf("Enter the number of rows that you want:");
	scanf("%d",&row_num);

	for (int i = 0; i < row_num; ++i)
	{
		
		for (column = 0; column < row_num; ++column)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
