#include<stdio.h>

int add(int num1, int num2);
void sub(void);
int div();
void mul(int num1,int num2);

int main()
{
    int choice;
    printf("Press 1 to see function with return type and argument\n");
    printf("Press 2 to see function with no return type and no argument\n");
    printf("Press 3 to see function with return type and no argument\n");
    printf("Press 4 to see function with no return type and argument\n");

    printf("Enter your choice : ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        add(10,20);
        break;
    case 2:
        sub();
        break; 
    case 3:
        div();
        break;
    case 4:
        mul(10, 15);
        break;

    default:
        printf("Enter a choice between 1 to 4");
        break;
    }

    return 0;
}
int add(int num1,int num2)
{
    int sum;
    sum = num1 + num2;
    // sum = add(10,20);
    printf("\n%d",sum);
    return 0;
}
void sub()
{
    int a = 20,b = 50,c;
    c = a + b;
    printf("\n%d",c);
}
int div()
{
    // double a = 10,b = 20,c;
    float a,b,c;
    printf("Enter two values : ");
    scanf("%d %d",&a,&b);
    c = a / b;
    printf("\n%2f",c);
    // return c;
}
void mul(int num1, int num2)
{
    int multiplication;
    multiplication = num1 * num2;
    printf("\n%.2d",multiplication);
}