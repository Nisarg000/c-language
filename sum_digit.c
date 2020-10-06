// To Print The Sum of n Entered Number
#include<stdio.h>
int main()
{
	int num,temp=0;
	float sum=0;
	printf("Enter a number : ");
	scanf("%d",&num); //e.g. 153

	for (int i = 0; i < ; ++i)
	{
		temp=num % 10; /* //3 =15.3 //1.53 */
		sum=temp+num; /* //3 // 1+5+3*/
		num=num/10; /* //15.3 //1.53//0.153 stop */
	}
	
	printf("\nThe sum of %d is %d\n", num,sum);
	
	return 0;
}