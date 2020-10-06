// C program to make restaurant dish using nested switch case
#include<stdio.h>
int main()
{
	int Pizzas,pizza1,pizza2,pizza3,margeritapizza = 150,italianpizza = 170,bahubalipizza = 235;
	int bill,choice,quantity;
	int Punjabi,makai_roti=50,naan,butter_roti,panner_sabji,mix_sabji,panner_bhurji,lassi,masala_buttermilk;

	printf("Welcome to our hotel please select the below given menu\n");
	printf("________________________________________-----______________________________________\n");

	printf("Enter 1 for Pizzas:\n");
	printf("Enter 2 for Punjabi:\n");
	printf("\nEnter your choice:");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1: printf("\nWhat delicious pizza would you like to have today?\n");
					
					printf("\nEnter 1 for margerita Pizza \n");
					printf("\nEnter 2 for italian Pizza \n");
					printf("\nEnter 3 for bahubali Pizza \n");

					scanf("%d",&Pizzas);
				
				switch(Pizzas)
				{
				
					scanf("%d,&pizza1");

					scanf("%d,&pizza2");
					
					scanf("%d,&pizza3");

					case 1: printf("\t\nYou have selected margerita Pizza \n");
							bill=margeritapizza;
							printf("Your bill is %d.\n",bill);
							break;
					
					case 2:printf("\t\nYou have selected italian Pizza\n");
							bill=italianpizza;
							printf("Your bill is %d.\n",bill);
							break;
					case 3:printf("\t\nYou have selected bahubali Pizza\n");		
							bill=bahubalipizza;
							printf("Your bill is %d.\n",bill);
							break;
				}
				break;

		case 2:		printf("\nWhat delicious Punjabi food would you like to have today?\n");
					
					printf("\nEnter 1 for Makai Roti \n");
					printf("\nEnter 2 for Naan \n");
					printf("\nEnter 3 for Butter Roti\n");
					printf("\nEnter 4 to order Panner Sabji\n");
					printf("\nEnter 5 to order mix Sabji\n");
					printf("\nEnter 6 to order Panner bhurji\n");
					printf("\nEnter 7 to order Lassi\n");
					printf("\nEnter 8 to order masala buttermilk\n");
					scanf("%d",&Punjabi);
				switch(Punjabi)	
				{
					scanf("%d",&makai_roti);
					scanf("%d",&naan);
					scanf("%d",&butter_roti);
					scanf("%d",&panner_sabji);
					scanf("%d",&mix_sabji);
					scanf("%d",&panner_bhurji);
					scanf("%d",&lassi);
					scanf("%d",&masala_buttermilk);
						
						case 1:
								printf("\nYou have selected to order Makai Roti\n");
								printf("\nEnter your quantity:");
								quantity=makai_roti*quantity;
								scanf("%d",&quantity);
								printf("You have selected to have %d makai roti\n", quantity);
								break;

						case 2:
								printf("\nYou have selected to order naan\n");
								printf("\nEnter your quantity:");	

				}
	}

	return 0;
}