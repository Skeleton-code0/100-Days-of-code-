/* Find the second largest element in an array.
*/
#include <stdio.h>
#include <limits.h>

int main()
{
    int n,i,j,g,gi;
    printf("Enter number of terms . \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements : \n");
    for (i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    int first=INT_MIN,second=INT_MIN;
    for (i = 0; i < n; i++)
    {
        if (a[i] > first)
        {
            second = first;
            first = a[i];
        }
        else if (a[i] > second && a[i] < first)  // if second biggest comes after biggest
        {
            second = a[i];
        }
    }    
    printf("%d ",second);
    return 0;
}