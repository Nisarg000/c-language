//WAP to Enter and print Array elements using for loop 
#include<stdio.h>
int main()
{
	int i,size,user_input[50];
	printf("Please enter the size of array : ");
	scanf("%d",&size);
	printf("\n Enter the array elements : ");

	for (int i = 0; i < size; ++i)
	{
		scanf("%d",&user_input[i]);
		printf("\nYou have entered : %d\n",user_input[i]);
	}

	for (int i = 0; i < size; ++i)
	{
		printf("So in total you have entered : %d\n", user_input[i]);
	}

	return 0;
}