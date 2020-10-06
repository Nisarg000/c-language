// c program to find power of a user given number
#include<stdio.h>
int main()
{
	int user_input_1,power,answer=1,temp=1;
	printf("Please enter an number:");
	scanf("%d",&user_input_1); //2
	printf("\nEnter the power of %d:",user_input_1);
	scanf("%d",&power); //5

	do
	{
		answer=answer*user_input_1; // 1=1*2=2 ,2=2*2=4,....... // make sure that answer does only one task that is either
											// of adding or counting the values .Declare another variable if you have to.
		temp++;
		
	}
	while(temp <= power);

	printf("\nThe answer is:%d",answer);

	return 0;
}