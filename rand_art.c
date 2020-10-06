#include<stdio.h>
int main(int argc, char const *argv[])
{
	int x,y,color;

	while(!kbhit())
	{
		x = rand() % 80 + 1;
		y = rand() % 25 + 1; 

		// 0 to 15 --> 1 to 15
		color = rand() % 15 + 1;

		textcolor(color);
		gotoxy(x,y);
		cprintf("%c",219); //asci value

		delay(20);
	}
	return 0;
}