/* Reverse an array without taking extra space.
*/
#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter number of terms . \n");
    scanf("%d",&n);
    int a[n];
    int temp[n];
    printf("Enter elements in array \n");
    for (i=0;i<n;i++)
    {
        printf("Element %d: \n", i + 1);
        scanf("%d", &a[i]);
        temp[i]=a[i];
    }
    for (i=0;i<n;i++) //reverse from temperary array
    {
        a[n-1-i]=temp[i];
    }  
    printf("Reverse order : \n")
    for (i=0;i<n;i++)
    {
        printf("%d , ",a[i]);
    }
    return 0;
}