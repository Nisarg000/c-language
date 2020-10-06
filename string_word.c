// C program to count the number of together words.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[100] = "";//so that we can input null value
	int i,count = 0; //for looping

	printf("\nEnter an sentence : ");
	gets(str);

	i = 0;
	while(str[i] == ' ') //for multiple starting space
	{
		i++;
	}

	for (int i = 0; str[i] != 0 ; ++i) //to continue till not null
	{
		if (str[i] == ' ' && str[i+1] != ' ') //to remove multispace
		{
			count++;
		}
	}

	if (str[i - 1] != ' ') //remove the backside repeated space
	{
		count ++;
	}
	
	printf("\nThe words you have entered are : %d",count);

	return 0;
}