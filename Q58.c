/* Find the maximum and minimum element in an array.
*/
#include <stdio.h>

int main()
{
    int n,max,min;
    printf("Enter number of terms . \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements in array \n");
    for (i=0;i<n;i++)
    {
        printf("Element %d: \n", i + 1);
        scanf("%d", &a[i]);
    }
    for (i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1]
            min=i;   
        if(a[i]>a[i+1])
            max=i;
    }
    printf("Maximum : %d",a[max]);
    printf("Minimum : %d",a[min]);        
    return 0;
}