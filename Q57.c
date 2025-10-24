/* Find the sum of array elements.
*/
#include <stdio.h>

int main()
{
    int n,i,sum;
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
        sum+=a[i];
    printf("Sum : %d",sum);    
    return 0;
}