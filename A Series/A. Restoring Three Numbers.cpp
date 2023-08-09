#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,k,a[4];
    scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]);
    sort(a,a+4);
    printf("%d %d %d",a[3]-a[2],a[3]-a[1],a[3]-a[0]);

return 0;
}
