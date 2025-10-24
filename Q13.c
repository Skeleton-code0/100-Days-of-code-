// Check if a given year is leap year or not.
#include <stdio.h>

int main()
{
    int n=0;
    printf("Enter your year.");
    scanf("%d",&n);
    if ((n%4==0 && n%100!=0) || (n%400==0))
        printf("Yes a leap year");
    else 
        printf("No not a leap year");    
    return 0;
}