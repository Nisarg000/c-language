#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\nEnter three numbers:");
	scanf("%d %d %d",&a ,&b ,&c);

	a=b+c;
	b=a-c;
	c=c-b;
	a=a-b;
	printf("\nThe anser of swapped values are:",a,b,c);
	return 0;
}