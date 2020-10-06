//C program to find palindrome number of a user given number
#include<stdio.h>
#include<conio.h>
void main()
{
 	int user_input_1,temp=0,a=0,input=0;
 	printf("Please input any one number:\n");
 	scanf("%d",&user_input_1); // 525
 	input=user_input_1;
 	while (input > 0) // 525 > 0
 	{
 			temp=input% 10; // 5 //2 //5
 			a=(a*10)+temp; //0*10=0+5=5 // 5=50+2=52 //52=520+5=525;
 			input=input/10; //52.5 //5.25 //0.525
 	}

 	if (user_input_1 == a)
 	{
 		printf("\nThe number you have entered is an palindrome number.\n");
 	}
 	else
 		printf("\nNot an palindrome number.\n");
 	getch();
}