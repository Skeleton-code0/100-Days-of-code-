/* Count positive, negative, and zero elements in an array.
*/
#include <stdio.h>

int main()
{
    int n,i,p=0,n=0,z=0;
    printf("Enter number of terms . \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements in array \n");
    for (i=0;i<n;i++)
    {
        printf("Element %d: \n", i + 1);
        scanf("%d", &a[i]);
    }
    for (i=0;i<n;i++)
    {
        if(a[i]==0)
            z++;
        else if (a[i]>0)
            p++;  
        else if (a[i]<0)
            n++;           
    }
    printf("Positive count : %d",p);
    printf("Negative count : %d",n);  
    printf("Zero's count : %d",z);     
    return 0;
}