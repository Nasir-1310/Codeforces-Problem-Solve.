#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    int count=0;
    printf("Enter t\n");
    cin>>t;
    while(t--)
    {
        cin>>s;
        for(int i=0;i<s.size()/2;i++)
        {
            if(s.size()==2)
            {
                //cout<<"NO\n";
                break;
            }
           else if(s[i]==s[i+1])
                count++;
        }
        if(count+1==s.size()/2)
            cout<<"NO\n";
        else
            cout<<"YES\n";
        count=0;
    }
}
