#include<stdio.h>
int main(){
     int x,y,n,k,m,i,t;
     scanf("%d",&t);
     for(i=0;i<t;i++){


     scanf("%d%d%d",&x,&y,&n);
     m=n%x;
     if(m==y)
     printf("%d\n",n);
     else if(x>m+(x-y)){
        m=n-m-x+y;
        printf("%d\n",m);
     }
     else{
            m=m-y;
        printf("%d\n",n-m);

     }
     }
}
