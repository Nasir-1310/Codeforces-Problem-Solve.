
#include<stdio.h>
#include<math.h>
int main(){
    int i,j,k,n,t,m;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        j=n/2-1;
        //printf("%d\n",j);
        m=pow(2,(n-j))-2;
        printf("%d\n",m);
    }

}
