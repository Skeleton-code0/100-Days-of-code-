// find sum of first n natural number .
#include <stdio.h>

int main()
{
    int i,n,sum;
    printf("Enter range of natural number:\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("Sum is %d:",sum);
    return 0;
}