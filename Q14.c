// Check if the given character is a vowel or not.
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter your character.");
    scanf("%c",&ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("Yes Vowel");
    else
        printf("NO not a vowel,consonent.");        
    return 0;
}