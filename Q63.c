/* Merge two arrays.
*/
#include <stdio.h>

int main()
{
    int n,m,i,se,total;
    printf("Enter number of terms of first array . \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements in first array .\n");
    for (i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter number of terms of second array . \n");
    scanf("%d",&m);
    int b[m];
    printf("Enter elements in second array .\n");
    for (i=0;i<m;i++)
    {
        scanf("%d", &b[i]);
    }
    total=n+m;
    int c[total];
    for (i=0;i<total;i++)
    {
        if(i<n)
            c[i]=a[i];
        else
            c[i]=b[i-n];    
    }

    printf("Merge : \n");
    for (i=0;i<total;i++)
        printf("%d ",c[i]);
    return 0;
}