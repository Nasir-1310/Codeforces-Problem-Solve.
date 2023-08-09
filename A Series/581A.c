#include<stdio.h>
int main(){
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    if(n>m){
            i=(n-m)/2;
        printf("%d %d",m,i);

    }
    else{
        i=(m-n)/2;
        printf("%d %d",n,i);

    }
}
