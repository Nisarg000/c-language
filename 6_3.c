#include<stdio.h>
int main()
{
	int a,b,c,d,m,n;
	int x1=0,x2=0;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	printf("Enter the value of b\n");
	scanf("%d",&b);
	printf("Enter the value of c\n");
	scanf("%d",&c);
	printf("Enter the value of d\n");
	scanf("%d",&d);
	printf("Enter the value of m\n");
	scanf("%d",&m);
	printf("Enter the value of n\n");
	scanf("%d",&n);

	x1=(  ( (m*d)- (b*n) ) / ( (a*d)-(c*b) )  );
	x2=(  ( (n*a) -(m*c) ) / ( (a*d)-(c*b) )  );

	if ( ( (a*d) - (c*b) )  == 0)
	{
		printf("\nThe value of ad - cb is zero\n");
	}
	else
	{
	printf("\nThe value of x1 is: %d\n",x1);
	printf("\nThe value of x2 is: %d\n",x2);
	}
	return 0;
}