#include<stdio.h>
int main()
{
	int choice;
	
	start:

	printf("1: Punjabi Food\n");
	printf("2: Chinese Food\n");
	printf("3: Continental Food\n");
	printf("4: Italian Food\n");
	printf("5: Sizzlers Food\n");
	printf("6: Haryani Food\n");
	printf("7: Biryani\n");
	printf("8: Dessert\n");
	printf("9: Japanese Food\n");
	printf("10: Koren Food\n");
	printf("11: European Food\n");
	printf("12: Pizzas\n");
	printf("13: Sea Food\n");
	printf("14: La-zania\n");
	printf("15: Hotdog\n");
	printf("16: Vadapav\n");
	printf("17: Chaat\n");
	printf("18: Coffee\n");
	printf("19: Tea\n");
	printf("20: Kathiyawadi\n");
	printf("21: Khicdi\n");
	printf("22: Exit\n");
	printf("Enter you choice of food:\n");
	scanf("%d",&choice);

	switch (choice)
	{
		case 1 :printf("You have selected Punjabi\n");
		break;
		case 2 :printf("You have selected Chinese\n");
		break;
		case 3 :printf("You have selected Continental\n");
		break;
		case 4 :printf("You have selected Italian\n");
		break;
		case 5 :printf("You have selected Sizzlers \n");
		break;
		case 6 :printf("You have selected Haryani\n");
		break;
		case 7 :printf("You have selected Biryani\n");
		break;
		case 8 :printf("You have selected Dessert\n");
		break;
		case 9 :printf("You have selected Japanese\n");
		break;
		case 10 :printf("You have selected Koren\n");
		break;
		case 11 :printf("You have selected European\n");
		break;
		case 12 :printf("You have selected Pizzas\n");
		break;
		case 13 :printf("You have selected Sea Food\n");
		break;
		case 14 :printf("You have selected Lazania\n");
		break;
		case 15 :printf("You have selected Hotdog\n");
		break;
		case 16 :printf("You have selected Vadapav\n");
		break;
		case 17 :printf("You have selected Chaat\n");
		break;
		case 18 :printf("You have selected Coffee\n");
		break;
		case 19 :printf("You have selected Tea \n");
		break;
		case 20 :printf("You have selected Kathiyawadi\n");
		break;
		case 21 :printf("You have selected Khicdi\n");
		break;
		case 22 :exit(0);

		default:printf("Invalid Choice\n");
	}
	goto start;
	return 0;
}