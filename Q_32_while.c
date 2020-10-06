/*//C program to find power
#include<stdio.h>
int main()
{
	int no,user_input_1,power,answer=1;
	printf("Enter an number:");
	scanf("%d",&user_input_1);
	printf("\nEnter the numbers power:");
	scanf("%d",&power);
	no=1;

	while(no<= power)
	{
		answer=answer*user_input_1;
		no++;
	}
	printf("\nThe output is:%d\n",answer);

	return 0;
}*/




#include<stdio.h>
int main()
{
	int user_input_1,power,temp=1,answer=1 ;
	printf("Enter an number:");
	scanf("%d",&user_input_1); //e.g. 2
	printf("\nEnter the number's power:");
	scanf("%d",&power); // 5

	while(temp <= power) // 1<=5
	{
		answer=answer * user_input_1; /* 1=1*2;//2=2*2;4= */
		temp++;
	}
	printf("\nThe output is:%d\n",answer);

	return 0;
}




























