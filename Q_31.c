// Q_31
#include<stdio.h>
int main()
{
	int num,sum=0,i;

	for (int i = 0; i < 10; ++i)
	{
			sum=sum+i;

			printf("The sum of %d is: %d\n",i,sum);	
	}
	printf("\n\nThe final addition is: %d\n",sum);
	return 0;
}