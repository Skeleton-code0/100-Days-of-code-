// Convert celsius to farenheit .
#include <stdio.h>

int main()
{
    float c,f;
    printf("Enter degree of celsius:\n");
    scanf("%f",&c);
    f=(c*9)/5+32;
    printf("%f degree in farenheit\n",f);
    return 0;
}