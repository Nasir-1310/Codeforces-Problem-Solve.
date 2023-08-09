#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&b[i]);

    }
    sort(a,a+n);
    sort(b,b+n-1);
    int s1=a[0],s2=b[0];
    for(i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
            s1=s1+a[i+1];
        if(b[i]!=b[i+1] && i<n-2)
            s2=s2+b[i+1];

    }
    int sum=s1+s2;
    n=(n*(n+1))/2;
    if(sum<n)
        printf("Oh, my keyboard!\n");
    else
        printf("I become the guy.\n");

}
