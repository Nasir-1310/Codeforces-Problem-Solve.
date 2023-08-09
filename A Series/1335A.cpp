#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    long long int d;
    scanf("%d",&n);
    for(i=0;i<n;i++){
       scanf("%lld",&d);
       if(d>2 && (d%2)!=0){
           d=(d-1)/2;
           printf("%lld\n",d);
       }
       else if (d>2 && d%2==0){
        d=(d/2)-1;
        printf("%lld\n",d);

       }
         else printf("0\n");

       }

    return 0;
}
