#include<string.h>
#include<stdio.h>
#include<stdlib.h>

struct Student
{
	int roll_number,std,marks[3];
	char name[50];
};

struct student stu[30];

int Addition();
int	Display();
int Search();
int Update();
int Remove();

int main(int argc, char const *argv[])
{
	struct Student stu; //stu here is the object of student
	int choice;

	printf("\nEnter the size : ");
	scanf("%d",&size);

	while(1)
	{
		printf("\n\n\n-----------------------\n\n\n");
		printf("\nPress 0 to exit.");
		printf("\nPress 1 to add.");
		printf("\nPress 2 to display.");
		printf("\nPress 3 to search.");
		printf("\nPress 4 to update.");
		printf("\nPress 5 to remove.");

		printf("\n\nEnter your choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 0 : 
				exit(0);
			case 1 : 
				
			case 2 : 
					
		}
	}
	
	return 0;
}

int Addition()
{
	printf("\nEnter the name of the student : ");
	gets(stu.name);
	printf("\nEnter the students standard : ");
	scanf("%d",&stu.std);

	for (int i = 0; i < size; ++i)
		{
			printf("\nEnter the students marks : ");
			scanf("%d",&stu.marks);
		}
	return 0;		
}