#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,n,a[4];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]);
        sort(a,a+2);
        sort(a+2,a+4);
        if(a[1]>a[2]  && a[3]>a[0])
        printf("YES\n");
        else
            printf("NO\n");
    }

    }
