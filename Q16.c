// find the biggest of 3 numbers.
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter your character.");
    scanf("%d",&ch);
    if (ch>=65 || ch<=90)
        printf("UpperCase");   
    else if (ch>=97 || ch<=122)
        printf("LowerCase");   
    else if (ch>=48 || ch<=57)
        printf("Digits");
    else
        printf("Special Character");    
    return 0;
}    