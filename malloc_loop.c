#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	int *pointer,i,count;

	printf("\nEnter the length of array : ");
	scanf("%d",&count);

	pointer = malloc(sizeof(int));
	
	for (int i = 0; i < count; ++i)
	{
		pointer[i] = i * 10 + 10;
	}
	for (int i = 0; i < count; ++i)
	{
		printf("%d\n",pointer[i]);
	}

	free(pointer);
	return 0;
}