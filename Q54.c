/*Write a program to print the following pattern:
   *
  ***
 *****
*******
 *****
  ***
   *
                */
#include <stdio.h>

int main ()
{
    int i,j;
    for (i=1;i<=4;i++)  //first four lines
    {
        for(j=1;j<=(4-i);j++)
        {
            printf(" ");
        }
        for (j=1;j<i*2;j++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (i=3;i>=1;i--)  //last three lines
    {
        for(j=1;j<=(4-i);j++)
        {
            printf(" ");
        }
        for (j=1;j<i*2;j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}