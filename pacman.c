#include <stdio.h>
int main()
{
	int size,i,j;
	
	printf("Enter the size of patterns : ");
	scanf("%d",&size);

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			printf(" * ");
		}
		for (int j = 0; j <= i; ++j)
		{
			printf(" * ");
		}
		printf("\n");
	}

	return 0;
}