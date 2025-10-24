/* Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled*/
#include <stdio.h>

int main()
{
    int d,fee;
    printf("Enter your number of late days .");
    scanf("%d",&d);
    if(d<=5)
        fee = d*2;
    else if (d>5 && d<=10)
        fee = (5*2) + ((d-5)*4);
    else if (d>10 && d<=30)
        fee = (5*2) + (5*4) + ((d-5)*6);
    else if (d>30)  
        printf("Membership Cancelled.");
    printf("Liberary fine : %d",fee);      
    return 0;
}