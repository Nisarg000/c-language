#include<stdio.h>
int main(int argc, char const *argv[])
{
	int user_input_1,user_input_2,temp;
	int *pointer1,*pointer2;

	printf("\nEnter the first value : ");
	scanf("%d",&user_input_1);

	printf("\nEnter the Second value : ");
	scanf("%d",&user_input_2);

	pointer1 = &user_input_1;
	pointer2 = &user_input_2;

	temp = user_input_1; //10 in temp
	user_input_1 = user_input_2; // 20 in user_input_1
	user_input_2 = temp;//10 of user_input_1 in user_input_2

	printf("\n%d and %d",user_input_1,user_input_2);

	return 0;
}