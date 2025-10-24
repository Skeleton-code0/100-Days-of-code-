/* Search in a sorted array using binary search.
*/
#include <stdio.h>

int main()
{
    int n,i,se,mid;
    printf("Enter number of terms . \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements in ascending order \n");
    for (i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the searching elements \n");
    scanf("%d",&se);
    mid=n/2;
    for (i=0;i<n;i++)
    {
        if(a[mid]==se)
        {   printf("At index %d",mid);
            exit(0);
        }    
        if(a[mid]>se)
            mid=mid/2;
        if(a[mid]<se)
            mid=(mid+n)/2;    
    }
    printf("Not found.");
    return 0;
}