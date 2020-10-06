#include<stdio.h>
int main()
{
	int num1,num2,add,sub,multi,choice=0;
	float div;
	
	printf("Enter any two numbers\n");
	scanf("%d %d",&num1,&num2);

	printf("\nEnter 1 for addition\n");
	printf("\nEnter 2 for subtraction\n");
	printf("\nEnter 3 for multiplication\n");
	printf("\nEnter 4 for division\n");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1: add=num1+num2;
				printf("The addition of %d and %d is %d\n",num1,num2,add);
				break;
		case 2: sub=num1-num2;
				printf("The subtraction of %d and %d is %d\n", num1,num2,sub);
				break;
		case 3: multi=num1*num2;
				printf("The multiplication of %d and %d is %d\n",num1,num2,multi);
				break;
		case 4: div=num1/num2;
				printf("The division of %d and %d is %d\n",num1,num2,div );
				break;
		
		default:printf("Please enter a valid number!!!\n");
	}
	return 0;
}