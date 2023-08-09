#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,k=0,yes=0,first;
    vector<int>v;
    while(t--)
    {
        cin>>n;
        if((n>=1 and n<=10) )
        {
            cout<<"1\n"<<n<<"\n";
            yes=1;
        }
    else if(n>10 and 100>n)
    {
        if(n%10==0)
            cout<<"1\n"<<n<<"\n";
        else
        {
            cout<<"2\n"<<n/10<<"0 "<<n%10<<"\n";
        }

          yes=1;
    }
    else if(n>=100 and n<1000)
    {
        if(n%100==0)
        {
            cout<<"1\n"<<n<<"\n";
        }
  else {
              for(int i=10;i<=100;i=i*10)
              {
                  int p=n%i-k;
                    p=(p*i)/10;
                    k=p;
                  if(p!=0)
                  {
                      v.push_back(p);
                  }
             }
             first=(n/100)*100;
             v.push_back(first);
        }
    }
        if(yes==0)
        {
            cout<<v.size()<<"\n";
            for(auto i=v.begin();i!=v.end();i++)
            {
                cout<<*i<<" ";
            }
        }
    }

}
