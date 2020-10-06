#include<stdio.h>
int main()
{
	int row_num,rows,column,i;
	printf("Enter the number of rows that you want:");
	scanf("%d",&row_num);

	for (int i = 0; i < row_num; ++i)
	{
		
        /* Iterate over columns */
        for(column=1; column<=row_num; column++)
        {
            /* Print star for each column */
            printf("*");
        }
        
        /* Move to the next line/row */
        printf("\n");
	}
	return 0;
}
