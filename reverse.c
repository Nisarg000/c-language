#include<stdio.h>
int main()
{
	int i,size,user_input,temp,sum = 0;
	
	printf("\nEnter the size : ");
	scanf("%d",&size); // 5

	for (int i = 0; i < size; ++i)
	{
		printf("\nEnter an number : ");
		scanf("%d",&user_input); // 10 20 30 40 50 
	}
	
/*INCOMPLETE AND WRONG CODE*/
	for (i = 0; i < size; ++i)
	{
		temp = user_input % 10; // 
		sum = temp + sum;
		user_input = user_input / 10 ;
	}

	printf("%d\n",sum);

	
	return 0;
}