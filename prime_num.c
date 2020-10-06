//c program to find prime numbers
#include<stdio.h>
int main()
{
	int num,count=0,i;
	printf("Enter any number:");
	scanf("%d",&num);
	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			count++;
			printf(" ");
		}
	}

	if ( count == 2 )
		{
			printf("\nThe number %d you have entered is a prime number",num);
		}
	else
		{
			printf("\nThe number %d you have entered is not a prime number",num);
		}

	return 0;
}