// // c program to print prime number from 1 to 100
// #include<stdio.h>
// int main()
// {
// 	int num;
// 	printf("Enter an number:");
// 	scanf("%d",&num);
	
// 	while(num <= 100)
// 	{
// 		if (num %2 == 1)
// 		{
// 			printf("\nPrime number\n");
// 			num++;
// 		}
// 		else
// 		{
// 			printf("\nNot an Prime number\n");
// 		}
// 		printf("Output:%d\n",num);

// 		num++;
// 	}
	
// 	return 0;
// }
#include <stdio.h>
 
int main()
{
  int i,count,num; 
  printf("\nEnter any one number:");
  scanf("%d",&num);

  int Number = num;
  printf(" Prime Number from %d to 100 are: \n",num); 
  
  if (num % 10 ==0 && num !=0)
  {
  	printf("Prime number\n");
  }
  else
  	printf("Composite number\n");
  while(Number <= 100)
  {
    count = 0;
    i = 2;
    while(i <= Number/2)
    {
      if(Number%i == 0)
      {
        count++;
	break;
      }
      i++;	
    }	
    if(count == 0 && Number != 1 )
    {
	printf(" %d ", Number);
    }
    Number++; 
  }
  return 0;
}