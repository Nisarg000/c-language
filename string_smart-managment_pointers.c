#include<stdio.h>
int main(int argc, char const *argv[])
{
	char *strings[]= {'Ahemdabad','Rajkot','Gondal'};

	for (int i = 0; i < 3; ++i)
	{
		printf("%s\n",strings[i]);
	}

	return 0;
}