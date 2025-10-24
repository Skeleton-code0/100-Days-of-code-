// Check if the given character is uppercase, lowercase, digit or a special character.
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter your character.");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z')
        printf("UpperCase");   
    else if (ch>='a' && ch<='z')
        printf("LowerCase");   
    else if (ch>='0' && ch<='9')
        printf("Digits");
    else
        printf("Special Character");    
    return 0;
}    