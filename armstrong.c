#include<stdio.h>
int main()
{
	int num,temp,sum=0,temp_num;
	printf("Input any number:");
	scanf("%d",&num); // e.g 153

	temp_num = num; //to store the value of num in temp_num

	for ( ; num > 0; )
	{
		temp = num % 10; // 3
		sum = sum + ( temp * temp * temp); //0 * 3
		num = num / 10; //15.3 so through this it will continue till it becomes 1.53 till 0.153 so till this in the end it will end
	}

	if (temp_num == sum)
	{
		printf("\nThe number you have entered is an armstrong number!\n");
	}
	else
		printf("\nThe number you have entered is not an armstrong number!\n");
	
	return 0;
}