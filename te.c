#include<stdio.h>
int main()
{
	int user_input_1[50],size,count; //for user input's and main program
	int i,j; //for looping

	printf("Enter the size of array : ");
	scanf("%d",&size); //e.g. 5

	printf("\nEnter the array elements.\n");

	for (i = 0; i < size; ++i)
	{
		printf("\nelement [%d]: ",i);
		scanf("%d",&user_input_1[i]); //10,10,20,20,30
	}
	for (i = 0; i < size; ++i)
	{		
		for (int i = 0; i < size; ++i)
		{
			count = 0;
			for (int j = 0; j < size; ++j)
			{
				if (user_input_1[i] == user_input_1[j])
				{
					count++;
				}
			}
			if (count == 2)
			{
				printf("The element not repeated is : %d\n",user_input_1[i]);
				break;
			}
		}
	}

	return 0;
}