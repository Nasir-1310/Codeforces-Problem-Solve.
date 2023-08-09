#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i,j,k=0,a[50];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);

        }
        sort(a,a+n);
        for(j=0;j<n-1;j++){
            if(a[j+1]-a[j]>1){
                printf("NO\n");
                k++;
                break;
                }

        }
        if(k==0)
        printf("YES\n");
        k=0;
    }

}
