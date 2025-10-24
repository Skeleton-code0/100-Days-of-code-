/* Rotate an array to the right by k positions.
1 2 3 4 5
imdex =2
4 5 1 2 3 
*/
#include <stdio.h> 

int main()
{
    int n,i,v=0,index;
    printf("Enter limit of array.\n");
    scanf("%d",&n);      ooooooooooo
    int a[n];
    int b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter index for rotation. \n");
    scanf("%d",&index);
    for(i=0;i<=index;i++)
    {
        b[n-i-1]=a[index-i];
    }
    for(i=index+1;i<n;i++)
    {
        b[++v]=a[i];
    }

    for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
    return 0;
}