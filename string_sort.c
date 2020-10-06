#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char strs[50][50] = {};
	int i,j,size = 0
	char temp;

	printf("\nEnter the size of the strs : ");
	scanf("%d",&size);

	/*To ask the values :-*/

	for (int i = 0; i < size; ++i)
	{
		printf("\nEnter anything[%d] : ",i);
		gets(strs[i]);
	}

	/*To print the original values */

	for (int i = 0; i < size; ++i)
	{
		printf("\n You entered[%d] : %s\n",i,strs[i]);
	}

	/*To calculate the sorted values*/

	/*for (i = 0; i < size; ++i) 
        {
            for (j = i + 1; j < size; ++j)
            {
                if (strs[i] > strs[j]) 
                {
                    temp = strs[i];
                    strs[i] = strs[j];
                    strs[j] = temp;
                }
            }
        }
	*/
		for (int i = 0; i < size - 1; ++i)
		{
			for (int j = 0; j < size -1 -i; ++j)
			{
				if (strcmp(strs[j],strs[j+1]) > 0)
				{
					strcpy(temp,strs[j]);
					strcpy(strs[j],strs[j+1]);
					strcpy(strs[j+1],temp);
				}
			}
		}
      

        /*To print the sorted values*/
        for (i = 0; i < size; ++i)
        {
            printf("\tSorted : [%d] : %s\n", i, strs[i]);
        }

	return 0;
}