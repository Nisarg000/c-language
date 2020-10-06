#include<stdio.h>
int main()
{
	int user_input_1[100],user_input_2[100],choice,i = 0,size;
	float addition = 0,subtraction = 0,multiplication = 0,division = 0;

	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("\nEnter the value of two variables:");
	scanf("%d %d",&user_input_1[i],&user_input_2[i]);

	printf("\nEnter one to add");
	printf("\nEnter two to subtract");
	printf("\nEnter three to do multiplication");
	printf("\nEnter four to do division\n");
	scanf("%d",&choice);

		switch(choice)
	{
		for (i = 0; i < size; ++i)
		{
			case 1: addition = user_input_1[i] + user_input_2[i];
					printf("\nThe addition of %d and %d is %d",user_input_1,user_input_2,addition);
					break;
		}
		for (i = 0; i < size; ++i)
		{
			case 2: subtraction = user_input_1[i] - user_input_2[i];
				printf("\nThe subtraction of %d and %d is %d",user_input_1,user_input_2,subtraction);
				break;
		}

		
		for (i = 0; i < size; ++i)
		{
			case 3: multiplication = user_input_1[i] * user_input_2[i];
					printf("\nThe multiplication of %d and %d is %d",user_input_1,user_input_2,multiplication);
					break;
		}
		
		for (i = 0; i < size; ++i)
				{
					case 4: division = user_input_1[i] / user_input_2[i];
					printf("\nThe division of %d and %d is %d",user_input_1,user_input_2,division);
					break;
				}			
	}

	return 0;
}