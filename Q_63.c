//WAP IN C to copy contents of one array elements to another array.
#include<stdio.h>
int main()
{
	int user_input_1[50],size,doppelganger[50];
	int i;

	printf("Please enter the size of array : ");
	scanf("%d",&size); //e.g 5

	printf("\nPlease enter the array elements :- \n");

	for (int i = 0; i < size; ++i)
	{
		scanf("%d",&user_input_1[i]); //10,20,30,40,50.
		printf("The array element which you have entered is : %d.\n",user_input_1[i]);
		doppelganger[i] = user_input_1[i];
	}

	for (int i = 0; i < size; ++i)
	{
		printf("\nBOOGABOOGABOOGA! The copied array elements are :- %d.",doppelganger[i]);
	}

	return 0;
}