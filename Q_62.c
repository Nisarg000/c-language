//WAP to print sum of all array elements 
#include<stdio.h>
int main()
{
	int i,size,user_input[50],add = 0;
	printf("Please enter the size of array : ");
	scanf("%d",&size); // e.g 5
	printf("\n Enter the array elements : ");

	for (int i = 0; i < size; ++i)
	{
		scanf("%d",&user_input[i]); //e.g. 10,20,30,40,50
		printf("\nYou have entered : %d\n",user_input[i] );
	}

	printf("\nBOOGABOOGABOOGA now it's time to see the summation of arrays!\n");

	for (int i = 0; i < size; ++i)
	{
		add+=user_input[i];
	}
	printf("\nThe sum of arrays are :  %d",add);
	
	return 0;
}