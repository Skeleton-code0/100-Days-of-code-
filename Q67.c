/* Insert an element in an array at a given position.
*/
#include <stdio.h>

int main()
{
    int n,m,i,j,fit;
    printf("Enter number of terms . \n");
    scanf("%d",&n);
    int a[n+1];
    printf("Enter elements : \n");
    for (i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the adding elements \n");
    scanf("%d",&m);
    scanf("%d",&fit);
    for (j=n;j>m;j--)
    {
        a[j]=a[j-1];
    }
    a[m]=fit;
    for (i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}