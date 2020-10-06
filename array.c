#include<stdio.h>
int main()
{
	int array[100],i,size;

	printf("Enter the size of array:");
	scanf("%d",&size);

	for (i = 1; i <= size; ++i)
	{	
		printf("Enter the value of array [%d]",i);
		scanf("%d",&array[i]);
	}

	for (i = 1; i <= size; ++i)
	{
		printf("The value of array[%d] is: %d.\n",i,array[i] );
	}

	return 0;
}