  //bismillahi rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t,n,i=0;
    cin>>t;
    char c;
    char ch='a';
    string s;
    while(t--)
    {
        cin>>n;
        cin>>s;

          //cout<<c<<endl;

      sort(s.begin(),s.end());

        int p=s.back()-'a';
        p=p+1;
        printf("%d\n",p);
        //cout<<(c-ch)+1<<endl;
       // cout<<'c'-'a'<<endl;
    }
    return 0;
}
