#include<stdio.h>
int fun(int a,int b)
{
	return a + b;
}
int main(int argc, char const *argv[])
{
	int (*pointer)(int,int) = fun,ans;

	ans = pointer(10,20);

	printf("\nAns : %d",ans);
	return 0;
}