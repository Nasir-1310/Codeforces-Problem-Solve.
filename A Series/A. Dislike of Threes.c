#include<stdio.h>
int main(){
    int i,j,k,n,t,p=0;
    int a[1000];
    for(i=1;i<=1666;i++){
        if(i%3!=0 && i%10!=3){
          a[p]=i;
          p++;

        }
    }
    scanf("%d",&t);
    for(j=0;j<t;j++){
        scanf("%d",&n);
        printf("%d\n",a[n-1]);
    }
}

