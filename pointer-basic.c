#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num = 69,*pointer;

	pointer = &num;

	*pointer = 10;

	printf("%d",num);
	return 0;
}