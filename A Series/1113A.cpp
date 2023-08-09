#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v;
    long long int fuel=0,cost=0;
    cin>>n>>v;
   if(v==n-1)
    cout<<v;
   else if(v>n-1)
   {
       cout<<n-1;
   }
   else if(v<n-1)
   {

           cost=cost+v;
           int p=n-1-v+1;
           cost=cost+((p*(p+1))/2)-1;



       cout<<cost;
   }




    return 0;

}

