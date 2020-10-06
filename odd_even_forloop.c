//c program to find odd or even number from 1 to 1000
#include<stdio.h>
int main()
{
	int i=0,countOdd=0;
	
	for(i=1;i<=1000;i++)
	{
		if (i % 2 == 1)
			{
				countOdd++;	
				printf("The number %d is odd\n",i);
			}	
	}

	printf("\nThere are %d odd numbers\n", countOdd);
	return 0;
}