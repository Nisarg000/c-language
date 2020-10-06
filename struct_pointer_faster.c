#include<stdio.h>
#include<string.h>

struct Student
{
	int roll_no,std;
	char[30] name;
};

int scan(struct Student *obj_pointer)
{
`	printf("Enter your roll_no\n");
	scanf("%d",&pointer->roll_no); //arrow operator
	printf("\nEnter your name");
	getchar();
	gets(pointer->name);
	printf("\nEnter your standard");
	scanf("%d",&p->std);
}
int print(struct Student *obj_pointer)
{
	printf("\nYour roll number is : [%d]",p->roll_no);
	printf("\nYour name is : [%s]",p->name);
	printf("\nYour standard is : [%d]",p->std);
}

int main(int argc, char const *argv[])
{
	struct Student obj;
	scan(&obj);
	print(&obj)

	
	return 0;
}