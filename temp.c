#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice;
start:
		printf("Enter your choice\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1 :
				printf("\nHello World\n");
			case 2 :
				exit(0);
		}
	goto start;
	return 0;
}