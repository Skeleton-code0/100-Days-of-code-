/*Write a program to find the 1's complement  .*/
#include <stdio.h>

int main()
{
    int temp,d,sum,r;
    printf("Enter your number. \n");
    scanf("%d",&n);
    temp=n;
    while (temp>0)
    {
        d=temp%10;
        r=r*10+d;
        temp=temp/10;
    }
    while(r>0)
    {
        d=r%10;
        if(d==0)
            print("1");
        else    
            print("0");    
        r=r/10;
    }
    prntf("1's complement  : %d",r);
    return 0;
}