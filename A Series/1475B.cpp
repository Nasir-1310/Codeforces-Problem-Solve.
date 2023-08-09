#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2020==0 || n%2021==0)
        {
            cout<<"YES\n";
        }
        else
        {
            int reminder,quotient;
            reminder=n%2020;
            quotient=n/2020;
            if(quotient>reminder)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
}
