/*Write a program to find sum of series 2/3+4/7+6/11+8/15 ... upto n terms*/
#include <stdio.h>

int main()
{
    int n,a=1,i;
    float sum;
    printf("Enter your range");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=(i*2)/((i*2)+a);
        a+=2;
    }
    printf("Approximate Sum : %.2f ",sum);
    return 0;
}