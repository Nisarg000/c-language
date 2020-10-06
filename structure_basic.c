#include<string.h>
#include<stdio.h>
#include<stdlib.h>

struct Student
{
	int roll_number,std,marks[3];
	char name[50];
};

int main(int argc, char const *argv[])
{
	struct Student stu; //stu here is the object of student

	stu.roll_number = 29;
	stu.std = 12;
	strcpy(stu.name,"Pure_Donkey");

	printf("\nYour name is %s\n",stu.name);
	printf("\nYour standard is %d\n",stu.std);
	printf("\nYour roll number is %d\n",stu.roll_number);

	for (int i = 0; i < 3; ++i)
	{
		printf("\nEnter your marks : ");
		scanf("%d",&stu.marks[i]);
	}

	for (int i = 0; i < 3; ++i)
	{
		printf("\n\nYour marks are : %d\t",stu.marks[i]);
	}

	return 0;
}