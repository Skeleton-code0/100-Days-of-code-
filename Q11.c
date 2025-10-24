// Input a number and check weather the number is odd or even.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter your number:\n");
    scanf("%d",&n);
    if(n%2==0)
        printf("Even"); 
    else 
        printf("Odd");    
    return 0;
}