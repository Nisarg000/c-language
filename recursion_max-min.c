#include <stdlib.h>
#include <stdio.h>
int max(int size,int array[]);
int min();

int main()
{
	int size,array[50];
	printf("\nEnter the size of an array : ");
	scanf("%d",&size);
	max(size,array[50]);
	
	return 0;
}

int max(int size,int array[])
{
	int i = 0;
	if (size > 0)
	{
		printf("\nEnter the elements : ");
		scanf("%d",&array[i]);
		printf("\n%d",max(size,array[i]));
	}
	return array[i];
}