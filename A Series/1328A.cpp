#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,a,b,n,m,k=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d",&a,&b);
        if(a==b)
            printf("%d\n",k);
        else if(a<b)
            printf("%d\n",b-a);
        else if(a>b){
            if(a%b==0)
                printf("%d\n",k);
            else {
                n=b-(a%b);
                printf("%d\n",n);

          }
        }
      }
    }
