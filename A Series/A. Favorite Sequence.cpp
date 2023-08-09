#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,n,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);

        }
        if(n%2==0){
        for(j=0,k=n-1;j<n/2;j++,k--){
            printf("%d %d ",a[j],a[k]);

        }
        printf("\n");
        }
        else{
            for(j=0,k=n-1;j<(n+1)/2;j++,k--){
            printf("%d ",a[j]);
            if(j==k)
                break;
            printf("%d ",a[k]);

        }
        printf("\n");

    }
    }
}
