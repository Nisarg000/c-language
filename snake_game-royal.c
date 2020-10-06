#include<stdio.h>
#include<stdlib.h>

#define MAX_X 50
#define MAX_Y 20
int main(int argc, char const *argv[])
{
	int px = 23,py = 12; //what is px
	int fx = 10,fy = 20; //what is fx
	int health = 100,score = 0;
	char ch; //ch is for choice I guess?

	while(1)
	{
		textcolor(LIGHTRED); //are names always capital?

		gotoxy(MAX_X + 3,1); //what is gotoxy
		cprintf("score : %d",score); //is cprintf for color?
		gotoxy(MAX_X + 3,2);
		cprintf("Health : %d",health);

		textcolor(CYAN);
		gotoxy(fx,fy);
		cprintf("%c\b",219); //what is b

		textcolor(YELLOW);
		gotoxy(px,py);
		cprintf("%c\b",219); //what is b

		ch = getch();

		switch(ch)
		{
			case 'X': case 'x' : exit(0);//X is for exiting the game
			case 'W': case 'w' : py--;break;
			case 'S': case 's' : py++;break;
			case 'A': case 'a' : px--;break;
			case 'D': case 'd' : py++;break;
		}
		if (px < 1)
		{
			px = MAX_X;
		}
		else if(px > MAX_X)
		{
			px = 1;
		}
		if (py < 1)
		{
			py = MAX_Y;
		}
		else if(py > MAX_Y)
		{
			py = 1;
		}
		if (px == fx && py == fy)
		{
			fx = rand()%MAX_X + 1;
			fy = rand()%MAX_Y + 1;

			score++;
			health +=10;
		}
		if (health == 0)
		{
			gotoxy(35,13);
			textcolor(RED);
			cprintf("YOU LOSE, GAME OVER!");
			getch();
			exit(0);
		}
	}

	return 0;
}