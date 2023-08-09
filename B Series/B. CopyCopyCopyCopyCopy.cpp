#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,t,k=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        for(j=0;j<n;j++){
        scanf("%d",&a[j]);
        }
        sort(a,a+n);
        for(j=0;j<n-1;j++){
            if(a[j]==a[j+1])
                k++;
        }
       printf("%d\n",n-k);
       k=0;
    }
}
