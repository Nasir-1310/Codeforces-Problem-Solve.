
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;

    long long int sum=0;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int i=0;i<n;i++)
       {
        int a;
        cin>>a;
        sum=sum+a;
       }
       if(sum%2==0)
        {
        printf("Yes\n");

        }
    else
         {
        printf("No\n");
         }
         sum=0;
 }

}
