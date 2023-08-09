#include<stdio.h>
int main(){
    int i,j,k,n,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        j=n/3;
        k=n%3;
        if(k==0){
            printf("%d %d\n",j,j);
        }
        else if(k!=0 && k==1){
            printf("%d %d\n",j+1,j);

        }
        else
            printf("%d %d\n",j,j+1);
    }
}
