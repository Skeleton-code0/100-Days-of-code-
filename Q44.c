/*Write a program to find sum of series 1+3/4+5/6+7/8 ... upto n terms*/
#include <stdio.h>

int main()
{
    int n,i;
    float sum;
    printf("Enter your range");
    scanf("%d",&n);
    if (n==1)
        printf("Sum : %d",n);
    else
    {
        for(i=1;i<n;i++)
        {
            sum+=(1+(2*i))/(2+(2*i));
        }
        printf("Approximate Sum : %.2f ",sum);
    }    
    return 0;
}