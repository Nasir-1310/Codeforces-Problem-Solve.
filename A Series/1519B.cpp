#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,m,k;
    cin>>t;

    while(t--)
    {
        cin>>n>>m>>k;
        if((n-1)+(n*(m-1))==k)
            printf("YES\n");
        else
            printf("NO\n");

    }
}
