/* Delete an element from an array.
*/
#include <stdio.h>

int main()
{
    int n,m,i,j;
    printf("Enter number of terms . \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements : \n");
    for (i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the deleting element index \n");
    scanf("%d",&m);
    for (j=m;j<n;j++)
    {
        a[j-1]=a[j];
    }
    for (i=0;i<n-1;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}