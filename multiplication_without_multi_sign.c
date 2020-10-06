// c program to multiply number without using * operator 
#include <stdio.h>
int main()

{
  int user_input_1,user_input_2,i=0,temp=0;
  printf("Enter the first number:"); //5
  scanf("%d",&user_input_1);
  printf("\nEnter the second number:"); //7
  scanf("%d",&user_input_2);

  for (i = 1; i <= user_input_2; ++i) //for e.g. 5*7=35
  {
    temp=temp+user_input_1 ; //i=5+5
  }

  printf("\nThe Output is:%d",temp);
  return 0;
}