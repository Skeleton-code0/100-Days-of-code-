// Take input in seconds and convert it into hour:minutes:second .
#include <stdio.h>
#include <math.h>

int main()
{
    int s,m,h;
    printf("Enter seconds:\n");
    scanf("%d",&s);
    m=s/60;
    s=s%60;
    h=m/60;
    m=m%60;
    printf("%d:%d:%d ;",h,m,s);
    return 0;
}
// Enter seconds:
// 5000
// 1:23:20 ;