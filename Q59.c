/* Count even and odd numbers in an array.
*/
#include <stdio.h>

int main()
{
    int n,i,e=0,o=0;
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
        if(a[i]%2==0)
            e++;
        else
            o++;    
    }
    printf("Even : %d",e);
    printf("Odd : %d",o);        
    return 0;
}