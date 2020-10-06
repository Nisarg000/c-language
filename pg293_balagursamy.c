#include<stdio.h>
	void main()
	{
		printline();
		printf("This demonstrates the use of c functions!");
		printline();
	}
	void printline(void);
	{
		int i;
		for(i=1;i<40;i++)
		printf("_");
		printf("\n");
	}