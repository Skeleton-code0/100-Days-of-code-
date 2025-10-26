/* Find the transpose of a matrix.
*/
#include <stdio.h>

int main()
{
    int r,c,i,j;
    printf("Enter your row and column .\n");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    int tra[c][r];
    printf("Enter elements \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {   
            scanf("%d",&arr[i][j]);
            tra[j][i]=arr[i][j];
        }
        
    }
    printf("Original Matrix \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",arr[i][j]);
        printf("\n");    
    }
    printf("\n Matrix after Transpose");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
            printf("%d ",tra[i][j]);
        printf("\n");    
    }
    return 0;
}