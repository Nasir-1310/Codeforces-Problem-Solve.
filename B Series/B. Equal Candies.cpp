#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,sum=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int a[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            sum=sum+a[j];
        }
        sort(a,a+n);
        sum=sum-n*a[0];
        printf("%d\n",sum);
        sum=0;
    }
}
