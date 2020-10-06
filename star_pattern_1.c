#include<stdio.h>
int main()
{
	int i,j; // i = rows && j = columns
	for (i = 0; i < 3; ++i) //for number of lines(row)
	{
		
		for(j = 0;j < 5 ;j++)
			{
			if (j <= i) //use steps 
			printf("*"); // for actual star printing (columns)
			else
			printf(" "); // for creating empty space
			}
		printf("\n"); // for gap in next star
	}
return 0;
}