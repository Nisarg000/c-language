#include<stdio.h>

int addition(int user_input)
{
    if(user_input != 0)
    {
        return user_input + addition(user_input - 1);
    }
    else
     return user_input;
}

int main()
{
    int user_input;

    printf("\nEnter an positive number : ");
    scanf("%d",&user_input);

    printf("\nAns : %d",addition(user_input));
 
    return 0;
}