//display the day of the week , switch case
#include <stdio.h>

int main()
{
    int n;
    pritnf("Enter your day order (1-7):\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Monday");
        break;
        case 2:
            printf("Tuesday");
        break;
        case 3:
            printf("Wednsday");
        break;
        case 4:
            printf("Thrusday");
        break;
        case 5:
            printf("Friday");
        break;
        case 6:
            printf("Saturday");
        break;
        case 7:
            printf("Sunday");
        break;
        default:
            printf("Invalid ");
        break;
    }
    return 0;
}