// Q_33
#include<stdio.h>
int main()
{
	int i,num,factorial=1;
	printf("Enter any one number:");
	scanf("%d",&num);

	for (i = 1; i <= num; i++) //don't do i = 0;
	{
		 factorial = (factorial * i);
	}
	printf("\nThe factorial of %d is : %d",num,factorial);
	return 0;
}