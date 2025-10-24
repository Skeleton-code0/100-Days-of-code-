/* Merge two arrays.
*/
#include <stdio.h>

int main()
{
    int n,v=0,o,i,j,temp,c,g=0,gi;
    printf("Enter your number . ");
    scanf("%d",&n);
    temp=n;
    while(temp>0) //find the number of digits
    {
        o++
        temp=temp/10;
    }
    int arr[o];
    temp=n;
    while(temp>0) // put values of number in array
    {
        d=d%10;
        arr[o-1-v];
        v=v+1;
        temp=temp/10;
    }
    for (i=0;i<o;i++)
    {
        c=0;
        for(j=0;j<o;j++)
        {
            if(arr[i]==arr[j])  
                c++;
        }
        if (c>g)
        {   g=c;
            gi=i;
        }    
    }
    printf("Most occuring digit %d , %d times",arr[gi],g);
    return 0;
}