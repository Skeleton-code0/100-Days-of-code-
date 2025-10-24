// Input a number and check weather the number is positive ,negative or zero.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter your number:\n");
    scanf("%d",&n);
    if(n==0)
        printf("Zero");
    else if(n<0)
        printf("Negative"); 
    else 
        printf("Positive");    
    return 0;
}