#include<stdio.h>
int main()
{
	int user_input_1[50][50],doppelganger[50][50],temp[50][50] = {0},size,size_2,count; //for user input's and main program
	int i,j,k,l,m; //for looping

	printf("Enter the size of array : ");
	scanf("%d",&size); //e.g. 2
	printf("\nEnter the size of array for the second table: ");
	scanf("%d",&size_2); //e.g. 2

	printf("\nEnter the array elements.\n");

	for (i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			printf("\nelement [%d][%d]: ",i,j);
			scanf("%d",&user_input_1[i][j]);
		}
	}

	printf("\n");
	printf("Now the second matrix begins:-\n");

	for (k = 0; k < size_2; ++k)
	{
		for (int l = 0; l < size_2; ++l)
		{
			printf("\nelement [%d][%d]: ",k,l);
			scanf("%d",&doppelganger[k][l]);
		}
	}

	printf("\nThe matrix is :-\n");


	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			printf("%d\t",user_input_1[i][j]);
		}
	}
	for (int k = 0; k < size_2; ++k)
	{
		for (int l = 0; l < size_2; ++l)
		{
			printf("%d\t",doppelganger[k][l]);
		}
        printf("\n");
	}

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			for (int m = 0; m < size; ++m)
			{
				temp[i][j] = temp[i][j] + (user_input_1[i][m] * doppelganger[m][j]);
			}
		}
	}

	printf("\nThe answer is :- ");
	
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			printf("%d\t",temp[i][j]);
		}
		printf("\n");
	}

	return 0;
}