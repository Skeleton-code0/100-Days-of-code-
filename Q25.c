/*Write a program to implement a basic calculator using switch-case for +, -, *, /, %.  */
#include <stdio.h>

int main()
{
    int a,b;
    float cal;
    char ch;
    // printf("Enter your first number \n");
    scanf("%d",&a);
    // printf("Enter your second number \n");
    scanf("%d",&b);
    // printf("Enter symbol \n");
    scanf("%c",&ch);
    switch(ch)
    {
        case '+':
        cal = a+b;
        printf("Sum : %d",cal); 
        break;
        case '-':
        cal = a-b;
        printf("Differance : %d",cal); 
        break;
        case '*':
        cal = a*b;
        printf("MUltiply : %d",cal); 
        break;
        case '/':
        cal = a/b;
        printf("Divide : %d",cal); 
        break;
        case '%':
        cal = a%b;
        printf("Quotient : %d",cal); 
        break;
        default :
            printf("Invalid symbol");
        break;
    }
    return 0;
}