//C program to sum the numbers from 1 to 10
#include<stdio.h>
int main()
{
	int i=1,sum=0;
	while(i <= 10)
	{
		sum+=i;
		i++;
	}
	printf("\nThe sum is %d",sum);

	return 0;
}