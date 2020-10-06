#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define RIGHT_PASSWORD "sys"

int main()
{
	/*
		char psw[50] = " ";
		char user_input[50] = " ";
		int i;
		printf("\nEnter your master password : ");
		gets(psw);
		// puts(psw);

		for (int i = 0; i < 5; ++i)
		{
			printf("\nAttempt the password[%d] : ",i);
			gets(user_input);
			if (psw != user_input)
			{
				printf("\nInvalid Password!");
			}
			else
				printf("\nYou have been logged in successfully!");
		}		
	*/
	char password[100] = "";
	int i,flag = 0; //flag here is for login

	do
	{
		printf("\nEnter your password : ");
		gets(password);

		if (strcmp(password,RIGHT_PASSWORD))
		{
			flag = 1;
			break;
		}
		i++;
	}
	while(i <= 5);

		if(flag)
		{
			printf("\nLogin failed!");
		}
		else
			printf("\nLogin successful!");
}