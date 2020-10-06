#include<string.h>
#include<stdio.h>
#include<stdlib.h>

struct Student
{
	int roll_number,std,marks[3];
	char name[50];
};

struct Student scan();
void print(struct Student);

int main(int argc, char const *argv[])
{
	struct Student stu; //stu here is the object of student
	stu = scan(); //to print the function scan
	print(stu);
	
	return 0;
}

struct Student scan()
{
	struct Student stu; //stu here is the object of student
	
	printf("\nEnter your name : ");
	gets(stu.name);

	printf("\nEnter your standard : ");
	scanf("%d",&stu.std);

	for (int i = 0; i < 3; ++i)
	{
		printf("\nEnter your marks : ");
		scanf("%d",&stu.marks[i]);
	}

	return stu;
}
void print(struct Student stu)//used object as parameter
{
	printf("\nYour name is : ");
	puts(stu.name);
	printf("\nYour standard is : %dth\n",stu.std);

	for (int i = 0; i < 3; ++i)
	{
		printf("\nYour marks[%d] are : %d",i,stu.marks[i]);
	}
}