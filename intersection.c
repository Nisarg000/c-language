/*intersectionv means common elements like for e.g.
a : 1 2 4 5 7
b : 3 7 5 2 1
ans : 1 2 3 5 7*/
#include<stdio.h>
int main()
{
	int i,j,size,user_input_1[50],user_input_2[50];
	printf("Please enter the size of array: ");
	scanf("%d",&size);

	printf("\nEnter the first array elements :-\n");

		for (i = 0; i < size; ++i)
		{
			printf("\nelement[%d] : ",i);
			scanf("%d",&user_input_1[i]);
		}

	printf("\nEnter the second array elements :-\n");

		for (j = 0; j < size; ++j) //no need to use j here you can also use i
		{
			printf("\nelement[%d] : ",j);
			scanf("%d",&user_input_2[j]);
		}


		//for confirmation from the user

		printf("So far you have entered for the first array elements :- \n\n");

		for (int i = 0; i < size; ++i)
		{
			printf("%d\t", user_input_1[i]);	
		}

		printf("\n");

		printf("So far you have entered for the second array elements :- \n\n");

		for (int j = 0; j < size; ++j)
		{
			printf("%d\t", user_input_2[j]);	
		}

		printf("\n");
		
		//From here on the actual code begins:-

		for (i = 0; i < size; ++i)
		{
			for (int j = 0; j < size; ++j)
			{
				if (user_input_1[i] == user_input_2[j])
				{
					printf("\n%d and %d are common\n",user_input_1[i],user_input_2[j]); //you can write either of them
				}
			}
		}

	return 0;
}