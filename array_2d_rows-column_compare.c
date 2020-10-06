// Any one column or row of opp. matrix should be equal and take 4 sizes for row and column
#include<stdio.h>
int main()
{
	int user_input_1[50][50],doppelganger[50][50],temp[50][50] = {0},size,size_2,count; //for user input's and main program
	int row_1,column_1,row_2,column_2,m; //for looping

	printf("Enter the size of array : ");
	scanf("%d",&size); //e.g. 2
	printf("\nEnter the number of rows for the first matrix : ");
	scanf("%d",&row_1);
	printf("\nEnter the number of columns for the first matrix : ");
	scanf("%d",&column_1);

	printf("\nEnter the size of array for the second table: ");
	scanf("%d",&size_2); //e.g. 2
	printf("\nEnter the number of rows for the first matrix : ");
	scanf("%d",&row_2);
	printf("\nEnter the number of columns for the second matrix : ");
	scanf("%d",&column_2);



	printf("\nEnter the array elements.\n");

	for (row_1 = 0; row_1 < size; ++row_1)
	{
		for (int column_1 = 0; column_1 < size; ++column_1)
		{
			printf("\nelement [%d][%d]: ",row_1,column_1);
			scanf("%d",&user_input_1[row_1][column_1]);
		}
	}

	printf("\n");
	printf("Now the second matrix begins:-\n");

	for (row_2 = 0; row_2 < size_2; ++row_2)
	{
		for (int column_2 = 0; column_2 < size_2; ++column_2)
		{
			printf("\nelement [%d][%d]: ",row_2,column_2);
			scanf("%d",&doppelganger[row_2][column_2]);
		}
	}

	printf("\nThe matrix is :-\n");


	for (int row_1 = 0; row_1 < size; ++row_1)
	{
		for (int column_1 = 0; column_1 < size; ++column_1)
		{
			printf("%d\t",user_input_1[row_1][column_1]);
		}
	}
	for (int row_2 = 0; row_2 < size_2; ++row_2)
	{
		for (int column_2 = 0; column_2 < size_2; ++column_2)
		{
			printf("%d\t",doppelganger[row_2][column_2]);
		}
        printf("\n");
	}

	for (int row_1 = 0; row_1 < size; ++row_1)
	{
		for (int column_1 = 0; column_1 < size; ++column_1)
		{
			for (int m = 0; m < size; ++m)
			{
				temp[row_1][column_1] = temp[row_1][column_1] + (user_input_1[row_1][m] * doppelganger[m][column_1]);
			}
		}
	}

	printf("\nThe answer is :- ");
	for (int row_1 = 0; row_1 < size; ++row_1)
	{
		for (int column_1 = 0; column_1 < size; ++column_1)
		{
			printf("%d\t",temp[row_1][column_1]);
		}
		printf("\n");
	}

	return 0;
}