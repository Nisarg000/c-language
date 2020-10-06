// c program to find kaprikar number
#include<stdio.h>
int main()
{
	int user_input_1,square,i,temp,temp_1;
	printf("Please enter an number : ");
	scanf("%d",&user_input_1); // 45 

	square = (long) user_input_1 * user_input_1; // 45 * 45 = 2025
	
	for (i = 0; i < user_input_1; ++i)
	{	
		temp = square % 100; // 2025 = 25,
	}
	for (int i = 0; i < user_input_1; ++i)
	{
			temp_1 = square / 100	; // 2025 = 20
	}
	if ( temp + temp_1 == user_input_1)  // 20 + 25 = 45
	 {
	 	printf("\n The number %d that you have entered is an kaprekar number \n", user_input_1);
	 } 
	 else
	 	printf("\n The number %d that you have entered is not an kaprekar number \n", user_input_1);

	return 0;
}