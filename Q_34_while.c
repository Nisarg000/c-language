//C program to find armstrong number of a user given number
#include<stdio.h>
int main()
{
 	int  num,sum,temp_num,temp=0;
 	printf("Enter an number:");
 	scanf("%d",&num); //e.g. 153
 	temp_num=num;
 	while(num > 0) //153 > 0
 	{
 		temp=num%10; //3 //5 //1 //the value of original num should not be affected
 		sum=sum+(temp*temp*temp); // 27 //125 //1
 		num=num/10; //15 //1 //0 //the value of original num should not be affected

 	}
 	if (sum == temp_num)
 	{
 		printf("\nAn armstrong number\n");
 	}
 	else
 		printf("\nNot an armstrong number\n");

	
	return 0;
}