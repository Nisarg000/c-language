//WAP to do total summation,addittion,subtraction and multiplication using 2d arrays
#include<stdio.h>
int main()
{
	int user_input_1[50][50],doppelganger[50][50],stupid_arrray[50][50],size,size_2,count; //for user input's and main program
	int i,j,k,l,m,n,sum = 0, multiplication = 1,choice,subtraction; //for looping

	printf("Enter the size of array : ");
	scanf("%d",&size); //e.g. 2
	printf("\nEnter the size of array for the second table: ");
	scanf("%d",&size_2); //e.g. 2
	
	printf("\n Press 1 to total add\n");
	printf("\n Press 2 to multiply\n");
	printf("\n Press 3 to subtract\n");
	
	printf("\nEnter your choice : ");
	scanf("%d",&choice);


	switch(choice)
	{
	case 1 : 
		for (i = 0; i < size; ++i)
		{
			for (int j = 0; j < size; ++j)
			{
				printf("\nelement [%d][%d]: ",i,j);
				scanf("%d",&user_input_1[i][j]);
				printf("\nYou have entered :  %d\n",user_input_1[i][j]);
				sum = sum + user_input_1[i][j];
			}
		}	

		printf("Now the second matrix begins:-\n");

		for(int k = 0;k < size_2;++k)
		{
			for (int l = 0; l < size_2; ++l)
			{
				printf("\nelement [%d][%d]: ",k,l);
				scanf("%d",&doppelganger[k][l]);
				printf("\nYou have entered :  %d\n",doppelganger[k][l]);
				sum = sum + doppelganger[k][l];
			}
		}	


		printf("\nThe matrix so far is :-\n");


		for (int i = 0; i < size; ++i)
		{
			for (int j = 0; j < size; ++j)
			{
				printf("%d\t",user_input_1[i][j]);
			}

			for (int j = 0; j < size; ++j)
			{
				printf("%d\t",doppelganger[i][j]);
			}
        	printf("\n");
		}
		printf("\n\n");
		for (int i = 0; i < size; ++i)
			{
				for (int j = 0; j < size; ++j)
				{
					stupid_arrray[i][j] = user_input_1[i][j] + doppelganger[i][j];
					printf("%d\t",stupid_arrray[i][j]);
				}
				printf("\n");
			}	

		printf("\n\n\nThe total addition of array is : %d\n",sum);
		break;

		case 2 : 
		for (i = 0; i < size; ++i)
		{
			for (int j = 0; j < size; ++j)
			{
				printf("\nelement [%d][%d]: ",i,j);
				scanf("%d",&user_input_1[i][j]);
				printf("\nYou have entered :  %d\n",user_input_1[i][j]);
				subtraction = subtraction - user_input_1[i][j];
			}
		}	

		printf("Now the second matrix begins:-\n");

		for(int k = 0;k < size_2;++k)
		{
			for (int l = 0; l < size_2; ++l)
			{
				printf("\nelement [%d][%d]: ",k,l);
				scanf("%d",&doppelganger[k][l]);
				printf("\nYou have entered :  %d\n",doppelganger[k][l]);
				subtraction = subtraction - doppelganger[k][l];
			}
		}	


		printf("\nThe matrix so far is :-\n");


		for (int i = 0; i < size; ++i)
		{
			for (int j = 0; j < size; ++j)
			{
				printf("%d\t",user_input_1[i][j]);
			}

			for (int j = 0; j < size; ++j)
			{
				printf("%d\t",doppelganger[i][j]);
			}
        	printf("\n");
		}
		printf("\n\n");

		for (int i = 0; i < size; ++i)
			{
				for (int j = 0; j < size; ++j)
				{
					stupid_arrray[i][j] = user_input_1[i][j] * doppelganger[i][j];
					printf("%d\t",stupid_arrray[i][j]);
				}
				printf("\n");
			}	
			//heres some problem in my program as it produces my predefined value:-

			printf("The final output of multiplication is : %d\n",multiplication);
			break;
		case 3 :
		 for (i = 0; i < size; ++i)
			{
				for (int j = 0; j < size; ++j)
					{
						printf("\nelement [%d][%d]: ",i,j);
						scanf("%d",&user_input_1[i][j]);
						printf("\nYou have entered :  %d\n",user_input_1[i][j]);
						subtraction = subtraction - user_input_1[i][j];
					}
			}	

		printf("Now the second matrix begins:-\n");

		for(int k = 0;k < size_2;++k)
		{
			for (int l = 0; l < size_2; ++l)
			{
				printf("\nelement [%d][%d]: ",k,l);
				scanf("%d",&doppelganger[k][l]);
				printf("\nYou have entered :  %d\n",doppelganger[k][l]);
				subtraction = subtraction - doppelganger[k][l];
			}
		}


	printf("\nThe matrix so far is :-\n");

		for (int i = 0; i < size; ++i)
		{
			for (int j = 0; j < size; ++j)
			{
				printf("%d\t",user_input_1[i][j]);
			}

			for (int j = 0; j < size; ++j)
			{
				printf("%d\t",doppelganger[i][j]);
			}
        	printf("\n");
		}

		printf("\n\n");
		
		for (int i = 0; i < size; ++i)
			{
				for (int j = 0; j < size; ++j)
				{
					stupid_arrray[i][j] = user_input_1[i][j] - doppelganger[i][j];
					printf("%d\t",stupid_arrray[i][j]);
				}
				printf("\n");
			}	

		//here's some problem in my program as it produces some garbage value:-

		printf("\n\n\nThe total subtraction of array is : %d\n",subtraction);
		break;

		default:
				printf("\nYOU IDIOT ! I told you to enter the choice between the numbers 1 to 4 are you blind?\n");
	}

	return 0;
}