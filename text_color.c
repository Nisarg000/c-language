#include<stdio.h>
int main(int argc, char const *argv[])
{
	textcolor(red);
	textbackground(GREEN);
	cprintf("Pure Donkey");
	printf("\n");

	textcolor(YELLOW);
	textbackground(BLUE);
	cprintf("Hello World");
	return 0;
}