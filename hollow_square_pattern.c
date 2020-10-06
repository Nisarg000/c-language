#include <stdio.h>
int main()
{ 
    int size,i,j;
    printf("Enter the size of patterns : ");
    scanf("%d",&size);
    printf("\n");

for(i=1; i<=size; i++)
    {
        /* Iterate over each column */
        for(j=1; j<=size; j++)
        {
            if(i==1 || i==size || j==1 || j==size)
            {
                /* Print star for 1st, Nth row and column */
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        /* Move to the next line/row */
        printf("\n");
    }
}