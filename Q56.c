/* Read and print elements of a one-dimensional array.
*/
#include <stdio.h>

int main()
{
    int n,i;
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
        printf("%d , ",a[i]);
    }
    return 0;
}