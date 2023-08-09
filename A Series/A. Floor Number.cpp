#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,x,t,k=1;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d",&n,&x);
        if(n<=2)
            printf("%d\n",k);
        else {
                n=n-2;
            for(j=0;;j++){

            if(n<=x){
                printf("%d\n",k+1);
                k=1;
                break;
            }
            n=n-x;
            k++;
        }

    }

   }
}
