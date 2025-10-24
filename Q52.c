/*Write a program to print the following pattern:
*

*
*
*

*
*
*
*
*

*
*
*

*
                */
#include <stdio.h>

int main ()
{
    int i,j,k;
    for (i=0;i<=4;i++)
    {
        k=(i*2+1);
        if (k>5)
            k=k-i-1;
        else if (k>7)
            k=k-i*2;    
        for(j=1;j<=k;j++)
        {
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}