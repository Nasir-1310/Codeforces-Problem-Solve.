#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;


    char c;
    cin>>t;
    while(t--)
    {
        cout<<t<<endl;
        cin>>n;
         string s;

        cin>>c;
        s+=c;
        char diff=c;
        cout<<n<<endl;
        for(int i=1;i<n-1;i++)
        {

            char c;
            cin>>c;
            if(c!=diff)
               continue;
            else
               {
                cin>>c;
                s+=c;
                diff=c;
                i++;
                }

        }
        n=0;
        cout<<s<<"\n";

     // s.clear();


    }
    return 0;
}
