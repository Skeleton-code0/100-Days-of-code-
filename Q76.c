/*Check if a matrix is symmetric.
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False
 00 01 02
 10 11 12
 20 21 22
*/
#include <stdio.h>

int main()
{
    int i,j,r,c,f=1;
    printf("Enter row and column of matrix. \n");
    scanf("%d%d ",&r,&c);
    int arr[i][j];
    printf("Enter your elements \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j]!=arr[j][i])
                f=0;
        }
    }
    for (f==1)
        printf("True");
    else
        printf("False");    
    return 0;
}