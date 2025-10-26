/*Find the sum of each row in a matrix.*/

#include <stdio.h>

int main()
{
    int r,c,i,j,sum=0;
    printf("Enter your row and column .\n");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    printf("Enter elements \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {   
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum+=arr[i][j];
        } 
        printf("%d ,",sum);  
        sum=0;
    }
    return 0;
}