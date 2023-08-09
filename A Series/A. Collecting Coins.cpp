#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,p,t,a[4];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]);
        sort(a,a+3);
        //printf("%d%d%d%d",a[0],a[1],a[2],a[3]);
        k=2*a[2]-a[0]-a[1];
        p=a[3]-k;
        if(k>a[3])
            printf("NO\n");
        else if(p%3==0){
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
}
