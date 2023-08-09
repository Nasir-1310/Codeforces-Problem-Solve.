#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n;
    long long int ans=1,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for( i=1;i<=n;i++)
        {
            ans=ans*i;
        }
        cout<<ans<<"\n";
        ans=1;
    }
}

