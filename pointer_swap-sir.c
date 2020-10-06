#include<stdio.h>

void swap(int *a_pointer,*b_pointer)
{
	int temp;

	temp = *a_pointer;
	*a_pointer = *b_pointer;
	*b_pointer = temp;

}

int main(int argc, char const *argv[])
{
	int x = 12,y = 13;

	swap(&x,&y)// actual parameters

	printf("\nx : %d",x);
	printf("\ny : %d",y);
	
	return 0;
}