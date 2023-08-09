#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,n,sum=0;
    int k=0;
    scanf("%d",&t);
        for(i=0;i<t;i++){
            scanf("%d",&n);
            int a[n];
            for(j=0;j<n;j++){
                scanf("%d",&a[j]);
                sum=sum+a[j];
                if(a[j]==2)
                    k++;

            }
            if(n%2==0&&sum%2==0){
                printf("YES\n");
            }
            else if(k!=n and sum%2==0)
                printf("YES\n");
            else printf("NO\n");
            sum=0;
            k=0;
        }
    }
