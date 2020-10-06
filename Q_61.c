//. WAP to Enter and print Array elements in reverse order using for loop 
#include<stdio.h>
int main()
{
	int i,size,user_input[50];
	printf("Please enter the size of array : ");
	scanf("%d",&size); // e.g 5
	printf("\n Enter the array elements : ");

	for (int i = 0; i < size; ++i)
	{
		scanf("%d",&user_input[i]); //e.g. 10,20,30,40,50
		printf("\nYou have entered : %d\n",user_input[i] );
	}
	//printf("\nBOOGABOOGABOOGA now it's time to see the arrays in their reverse order!\n");

	for(i = size-1; i >= 0; i--) // e.g. 5 = 5-1 = 4 ; 4 >= 0 ; starts from reverse size/num.
	{
		printf("\nYou have entered %d\n",user_input[i] );
	}
	
	return 0;
}