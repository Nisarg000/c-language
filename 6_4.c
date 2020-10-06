#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your marks:");
	scanf("%d",&marks);

	if (marks > 80)
	{
		printf("\nYour marks are:%d and its range is from 81 to 100\n",marks);
	}
	if (marks > 60 && marks <= 80)
	{
		printf("\nYour marks are:%d and its range is from 61 to 80\n",marks);
	}
	if (marks < 40 && marks <= 60)
	{
		printf("\nYour marks are:%d and its range if from 41 to 60\n",marks);
	}
	if(marks > 40)
	{
		printf("\nYou have failed the exams and");
	}
	return 0;
}
