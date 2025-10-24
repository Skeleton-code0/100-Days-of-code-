// marks and grades
#include <stdio.h>

int main()
{
    int m;
    printf("Enter your marks");
    scanf("%d",&m);
    if (m<=100 && m>=90)
        printf("Grade : A");    
    else if (m<=89 && m>=80)
        printf("Grade : B");
    else if (m<=79 && m>=70)
        printf("Grade : C");
    else if (m<=69 && m>=60)
        printf("Grade : D");
    else
        printf("Grade : F");                    
    return 0;
}    