/* Insert an element in a sorted array at the appropriate position.
*/
#include <stdio.h>

int main()
{
    int n,i,j,fit;
    printf("Enter number of terms . \n");
    scanf("%d",&n);
    int a[n+1];
    printf("Enter elements in ascending order \n");
    for (i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the adding elements \n");
    scanf("%d",&fit);
    for (i=0;i<n;i++)
    {
        if(a[i]>fit)
            break;
    }
    for (j=n;j>i;j--)
    {
        a[j]=a[j-1];
    }
    a[i]=fit;
    for (i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}