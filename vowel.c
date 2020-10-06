// vowel or not using if_else statement
#include<stdio.h>
int main()
{
	char alpha;
	printf("Enter any one alphabet character:");
	scanf("%c",&alpha);

	if (
		alpha == 'A' || alpha == 'a' ||
		alpha == 'E' || alpha == 'e' ||
		alpha == 'I' || alpha == 'i' ||
		alpha == 'O' || alpha == 'o' ||
		alpha == 'U' || alpha == 'u'
		)
		
	{
		printf("\nThe character %c you have entered is an vowel\n",alpha);
	}
	else
		printf("\nThe character %c you have entered is not an vowel\n",alpha);
	return 0;
}