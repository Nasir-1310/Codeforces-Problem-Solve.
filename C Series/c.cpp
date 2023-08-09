//bissmillah hir rahmanir rahim
#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    long long int t,n;
   long long  int a;


    cin>>t;
   long long int max=0,rmax=0;
    while(t--)
    {
        cin>>n;
         long long int p[n],q[n];
        for(int i=0;i<n;i++)
        {

            cin>>p[i];
            q[i]=p[i];
        }
    sort(p,p+n);
    rmax=p[n-2];
    max=p[n-1];
   // cout<<rmax<<" ";
    for(int i=0;i<n;i++)
    {
        if(q[i]!=max)
           cout<<q[i]-max<<" ";
           else
           {
               cout<<max-rmax<<" ";
           }
    }


   cout<<endl;
   max=0;
   rmax=0;

    }
    return 0;
}
