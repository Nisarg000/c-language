#include<stdio.h>
#include<string.h>
int main()
{
    char first_name[50];
    char last_name[50];
    char reverse[50];
    int i,j = 0,count = 0;//for looping;
    int length;
    char temp[100];

    printf("\nEnter your First Name : ");
    scanf("%s",first_name);//string does not require &.

    length = strlen(first_name); //storing name in int length.
    printf("\nYour name's length is : %d",length);//to print the length using system function.

    printf("\nEnter your Last name : ");
    scanf("%s",last_name);//string does not require &.

    strcat(first_name,last_name); //to store last name in first name.
    printf("\nThe concated String is %s",first_name);

    /*To print the length without using system function*/
    
    for (i = 0; first_name[i] != '\0' ; ++i) //\0 means null character.
    {
        count++;
    }

    /*To print the string in reverse without using system function*/

    printf("\nThe length of %s is %d",first_name,count);
    for (i  = count - 1; i >=0 ; i--) //to continue till reverse has reached zero.
    {
        reverse[j] = first_name[i];
        j++;
    }

    reverse[j] = '\0'; //don't forget to do this.
    printf("\nThe reversed string is : %s",reverse);
    
    /*To copy the string without using system function*/

    for (i = 0; first_name[i] != '\0' ; ++i) //\0 means null character.
    {
        temp[i] = first_name[i];
    }
    temp[i] = '\0';

    printf("\n%s",temp);

    /*To concade the string without using in-built function*/
    
    // printf("\nThe concated String is %s%s",first_name,last_name);

    for (i = 0; first_name[i] != '\0' && last_name[i] != '\0'; ++i) //\0 means null character.
    {
        temp[i] = first_name[i],last_name[i];
    }
    temp[i] = '\0'; 

    printf("\n%s",temp);

    return 0;
}