#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,k=1,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int a[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);

        }
        sort(a,a+n);
        for(j=0;j<n-1;j++)
        {
            if(a[j]!=a[j+1])
                k++;
        }
        if(k==n)
            printf("%d\n",k);
        else if(k==1)
            printf("%d\n",k);
        else if(k!=n && n%2!=0)
            printf("%d\n",k-1);
        else if(k!=n && n%2==0)
            printf("%d\n",k);

        k=1;
    }
}
