#include<stdio.h>
int main()
{
	int i = 0,k = 0,j,size,user_input_1[50],sum = 0; // k here is for printf statement in line 10 for decoration.
	printf("Please enter the size of array: ");
	scanf("%d",&size);

		for (i = 0; i < size; ++i)
		{
			printf("\n Enter the array elements[%d] : ",i);
			scanf("%d",&user_input_1[i]);
			sum = 0;
			
			for (int j = 1; j < user_input_1[i]; ++j)
			{
				if (user_input_1[i] % j == 0) 
					{
						sum += j;
					}
			}
			
			if (sum > user_input_1[i])
				printf("\nThe number %d which you have entered is an abundant number.\n",user_input_1[i] );

			else if (sum < user_input_1[i])
				printf("\nThe number %d which you have entered is an deficient number.\n",user_input_1[i] );

			else
				printf("\nThe number %d which you have entered is an perfect number.\n",user_input_1[i] );
		}	
		
	return 0;
}