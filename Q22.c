// Find profit or loss percentage give cost price and selling price.
#include <stdio.h>

int main()
{
    int cp,sp;
    float p_percentage,l_percentage;
    printf("Enter cost price and selling price.\n");
    scanf("%d",&cp);
    scanf("%d",&sp);
    if (cp>sp)
    {
        l_percentage=((cp-sp)/cp)*100;
        printf("Loss percentage is %.2f .",l_percentage);
    }
    else if (sp>cp)
    {
        p_percentage=((sp-cp)/cp)*100;
        printf("Profit percentage is %.2f .",p_percentage);        
    }
    return 0;
}