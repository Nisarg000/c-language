// To Print The Sum of Entered Number
#include<stdio.h>
int main()
{
	int num,temp,i;
	float sum=0;

	printf("Enter a number : ");
	scanf("%d",&num);

	for(i=0; i > num ;i++)
	{
		temp=num % 10;
		num=num/10;
		sum=temp+num;
	}
	
	printf("The sum is: %2.1f \n",sum);
	
	return 0;
}