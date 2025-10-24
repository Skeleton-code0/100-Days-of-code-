/*Write a program to print all the prime numbers from 1 to n.    */
#include <stdio.h>

int main ()
{
    int i,j,n,p;
    printf("Enter your range of prime numbers : \n");
    scanf("%d",&n);
    printf("Prime numbers : ");
    for (i=2;i<=n;i++)
    {
        p=1;
        for (j=2;j<i;j++)
        {
            if(i%j==0)
                p=0;
        }
        if(p==1)
            printf("%d , ",i);

    }
    return 0;
}