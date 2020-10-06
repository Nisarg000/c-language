#include<stdio.h>
int factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n-1);
    }
    else
        f = 1;
    return f;
}
int main()
{
    int user_input;
    printf("\nEnter an number to find its factorial : ");
    scanf("%d",&user_input);

    printf("\nAns : %d",factorial(user_input));

    return 0;
}