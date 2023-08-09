#include<stdio.h>
int main(){
    int i,j,t,m,h;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d",&h,&m);
        j=(24-h)*60-m;
        printf("%d\n",j);
    }
    }
