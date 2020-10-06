//c program to find odd or even number from 1 to 1000
#include<stdio.h>
int main()
{
	int i=0,num,countOdd=0,counteven=0,sum=0;
	
	printf("Enter any one number:");
	scanf("%d",&num);
	for(i=num;i<=1000;i++)
	{
		if (i % 2 == 1)
			{
				sum=sum+i;
				printf("The number %d is odd\n",i);
			}	
		else
 			{
				sum=sum+i;
				printf("The number %d is even\n",i);
			}
	}

	printf("\nThere are %d numbers\n", sum);
	return 0;
}