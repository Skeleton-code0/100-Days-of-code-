// Calculate simple interest and compound interest from principal,rate,time,number of turns .
#include <stdio.h>
#include <math.h>

int main()
{
    int p,t,n;
    float r,si,ci;
    printf("Enter principla:\n");
    scanf("%d",&p);
    printf("Enter rate:\n");
    scanf("%d",&r);
    printf("Enter time:\n");
    scanf("%d",&t);
    printf("Enter number of times interest is applied:\n");
    scanf("%d",&n);
    si = (p*r*t)/100;
    ci = pow(p*(1+r/n),n*t);
    printf("Simple interest :%d",si);
    printf("Compound interest :%d",ci);
    return 0;
}