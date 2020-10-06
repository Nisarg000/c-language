#include<stdio.h>
int main()
{
	int math,physics,chem,total=0,else_total=0;
	printf("Enter your mathmetics marks:");
	scanf("%d",&math);
	printf("\nEnter your physics marks:");
	scanf("%d",&physics);
	printf("\nEnter your chemistry marks:");
	scanf("%d",&chem);

	total=physics+math+chem;
	else_total=math+physics;

	if (math >= 60 && physics >= 50 && chem >= 40 && total >= 200)
	{
		{
			printf("You are eligible for college\n");
		}
	}	
	else
		{
			if(else_total >= 150)	
				printf("You are eligible for college\n");
			else
				printf("You have failed in meeting the college's minimum requirement!!!\n");
		}
		
return 0;
}
