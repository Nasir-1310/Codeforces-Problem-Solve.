#include<stdio.h>
int main()
{
    int m,n,a;
    scanf("%d%d%d",&m,&n,&a);
    m=m%a;
    n=n%a;
    printf("%d",n+m);
    return 0;
}
