#include<stdio.h>
int main(){
    int i,t,x;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&x);
        if(x>=1900)
            printf("Division 1\n");
        else if(x>=1600&& x<=1899)
            printf("Division 2\n");
        else if(x>=1400 && x<=1599)
            printf("Division 3\n");
        else if(x<=1399)
            printf("Division 4\n");
    }

    }
