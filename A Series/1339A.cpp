#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n;
    long long int ans=1,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
    std::vector<int> numbers(n);
    std::iota(numbers.begin(), numbers.end(), 1); // Fill the vector with numbers from 1 to n

    unsigned long long result = std::accumulate(numbers.begin(), numbers.end(), 1ULL, std::multiplies<unsigned long long>());

        cout<<result<<"\n";

    }
}

