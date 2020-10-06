#include<stdio.h>
#include<stdlib.h>

int Even();
int Odd();
int Leap_Year();
int Perfect_Square();

int main()
{
	int user_input,choice,flag;

	while(1)
	{
		printf("------------------------____________-----------------------");
		printf("\nPress 0 to exit\n");
		printf("01) Even\n");
		printf("02) Odd\n");
		printf("03) Leap year\n");
		printf("04) Perfect square\n");
		printf("05) Perfect cube\n");
		printf("06) Triangular\n");
		printf("07) Pronic\n");
		printf("08) Marsenne\n");
		printf("09) Fibonacci\n");
		printf("10) Lucas\n");
		printf("11) Pell\n");
		printf("12) Duck\n");
		printf("13) Harshad\n");
		printf("14) Twin\n");
		printf("15) Prime\n");
		printf("16) Adundant\n");
		printf("17) Deficient\n");
		printf("18) Perfect\n");
		printf("19) Armstrong\n");
		printf("20) Disarium\n");
		printf("21) Palindrome\n");
		printf("22) Zplus\n");
		printf("23) Zminus\n");
		printf("24) Automorphic\n");
		printf("25) Thanos\n");
		printf("26) strong\n");
		printf("27) Kaprekar\n");
		printf("28) Lychrel\n");
		printf("29) Happy\n");
		printf("30) Kieth\n");

		printf("********************____________*************************");

		printf("\nPlease enter your choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 0 :
					exit(0);
					break;
			case 1 : 
					Even();
					break;
			case 2 : 
					Odd();	
					break;
			case 3 : 
					Leap_Year();
					break;
			case 4 :
					flag = Perfect_Square();
					break;		
		}
		if (flag)
		{
			printf("\nIt is ...");
		}
	}

	return 0;
}

int Even()
{
	int user_input;
	printf("\nEnter an number : ");
	scanf("%d",&user_input);
	if (user_input % 2 == 0)
	{
		printf("\nThe number %d which you have entered is even number.\n\n\n",user_input);
	}
	else
		printf("\nThe number %d which you have entered is not an even number!\n\n\n",user_input);
}
int Odd()
{
	int user_input;
	printf("\nEnter an number : ");
	scanf("%d",&user_input);
	if (user_input % 2 == 1)
	{
		printf("\nThe number %d which you have entered is an odd number.\n\n\n",user_input);
	}
	else
		printf("\nThe number %d which you have entered is not an odd number!\n\n\n",user_input);
}
int Leap_Year()
{
	int user_input;
	printf("\nEnter a year : ");
	scanf("%d",&user_input);

	if (user_input % 4 == 0)
	{
		if (user_input % 100 == 0)
		{
			if (user_input % 400 == 0)
				printf("\nThe number %d which you have entered is an leap year!",user_input);
			else
				printf("\nThe number %d which you have entered is not an leap year!",user_input);
		}	
	else
		printf("\nThe number %d which you have entered is an leap year!",user_input);
	}
	else
		printf("\nThe number %d which you have entered is not an leap year!",user_input);
}

int Perfect_Square()
{
	//e.g. 8 sq 16,4 sq 2;
	int user_input,temp = 0;
	int i,flag = 0;
	// double temp;
	printf("\nEnter a number to find it's square : ");
	scanf("%d",&user_input); // 9,4
/*
	if (user_input % 2 == 0 && user_input % 3 )// 4 / 2, 64,8 , 9 / 3 , ;
	{
		printf("\nThe number %d has an square\n\n\n",user_input);
	}
	else
		printf("\nThe number %d does not have an square\n\n\n",user_input);
*/
	// temp = user_input; // storing the value of users input into temp

	// for(int i = 1; i * i <= user_input; ++i)
	// {
		// temp *= i;
		/*
		if(i * i == user_input)
			{
				printf("\nThe number %d has an square\n\n\n",user_input);
			}
		else
			printf("\nThe number %d does not have an square\n\n\n",user_input);	*/
		for (int i = 1; i*i <= user_input; ++i)
		{
			if (i*i == user_input)
			{
				flag = 1;
			}
		}
		// temp ++;
		return flag;
	// }

	// temp = (double)user_input * user_input;
}