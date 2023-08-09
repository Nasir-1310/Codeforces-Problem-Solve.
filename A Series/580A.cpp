#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int index[n];
   // memset(index, 0, n);
   for(int i=0;i<n;i++)
       index[i]=0;

    for(int i=0;i<n;i++)
        cin>>arr[i];


    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<=arr[i+1])
            index[i+1]=index[i]+1;

    }

    for(int i=0;i<n;i++)
    {
        if(index[0]<index[i])
            index[0]=index[i];
    }
cout<<index[0]+1<<"\n";


}

