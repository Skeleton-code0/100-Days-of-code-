/* Search for an element in an array using linear search.
*/
#include <stdio.h>

int main()
{
    int n,i,se;
    printf("Enter number of terms . \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements in array \n");
    for (i=0;i<n;i++)
    {
        printf("Element %d: \n", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter the searching elements \n");
    scanf("%d",&se);
    for (i=0;i<n;i++)
    {
        if(a[i]==se)
        {   printf("Found %d , at index %d .",se,i);
            exit(0);
        }    
           
    }
    printf("Not found! ");    
    return 0;
}