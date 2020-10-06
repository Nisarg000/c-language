#include<stdio.h>
int main(int argc, char const *argv[])
{
	FILE *file_pointer;
	char user_input;

	file_pointer = fopen("file.txt","r");
	while((user_input = getc(file_pointer)) != -1)
	{
		printf("\t%c",user_input);
	}

	fclose(file_pointer);
	return 0;
}