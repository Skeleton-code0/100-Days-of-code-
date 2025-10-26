/*Add two matrices.
*/
#include <stdio.h>

int main()
{
    int r,c,i,j;
    printf("Enter row and column for both matrix .\n");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    int arr2[r][c];
    int sum[r][c];
    printf("Enter first matrix elements \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {   
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("Enter second matrix elements \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {   
            scanf("%d",&arr2[i][j]);
        }
        
    }
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            sum[i][j]=arr[i][j]+arr2[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}