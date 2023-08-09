#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k=1;
    cin>>n;
    long long int ans=0;
    if(n==1)
        cout<<1;
    else{
    for(int i=0;i<n-1;i++,k+=2)
    {
        ans=ans+k;
        //1cout<<ans<<" ";
    }
    ans=(ans*2)+k;
    cout<<ans;
    }
    return 0;

}
