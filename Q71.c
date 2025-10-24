/*Read and print a 2D matrix.*/
#include <stdio.h>

int main()
{
    int r,c,i,j;
    printf("Enter your row and column .\n");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    printf("Enter elements \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&arr[i][j]);
    }
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",arr[i][j]);
        printf("\n");    
    }
    return 0;
}