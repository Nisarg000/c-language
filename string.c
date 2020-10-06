#include<stdio.h>
#include<string.h>
int main()
{
    char name[50],temp[50];
    printf("Enter your name : ");
    // scanf("%c",&name);
    // printf("Your name is : %c" ,name);

    gets(name); // for input.
    puts(name); // for display.
    // printf("Your name is : %c" ,name);

    strcpy(temp, name); // to copy the name to temp
    puts(temp);

    strrev(temp); // to reverse the name
    puts(temp);

    strcmp(temp,name); // to compare the name with temp
    puts(name);

    return 0;
}