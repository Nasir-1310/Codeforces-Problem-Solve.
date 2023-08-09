#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k=0,p=0,n,m,q=0;
    int a[50];
    for(i=2;i<51;i++){
        for(j=2;j<=i;j++){
            if(i%j==0){
                k++;
            }
        }
        if(k==1){
            a[p]=i;
            p++;

        }
        k=0;
    }
    //printf("%d\n",a[14]);
    scanf("%d%d",&n,&m);
    for(i=0;i<15;i++){

        if(a[i]==n && a[i+1]==m){
          printf("YES\n");
          q++;
          break;

    }
    }
    if(q==0)
        printf("NO\n");
   q=0;
}


