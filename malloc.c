#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	int *pointer;

	pointer = malloc(sizeof(int));
	*pointer = 50;
	printf("%d\n",*pointer);

	free(pointer);
	return 0;
}