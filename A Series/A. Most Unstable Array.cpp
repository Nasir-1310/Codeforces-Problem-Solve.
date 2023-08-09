#include<stdio.h>
int main(){
    int i,j,k,n,s,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d",&n,&s);
        if(n==1)
            printf("0\n");
        else if(n==2)
            printf("%d\n",s);
        else if(n>2)
            printf("%d\n",2*s);

    }
}
