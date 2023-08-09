#include<stdio.h>
int main(){
    int i,n,k,p,q=0;
    scanf("%d%d",&n,&k);
    p=240-k;

     if(p<0 || p==0){
            printf("%d",q);
     }
    else{
     for(i=1;;i++){


       if(p>0){

            p=p-i*5;
            q++;


         }
         else{
                if(p==0){
                  printf("%d",q);
                  break;}
                else{
                    printf("%d",q-1);
                    break;
                    }


         }if(n==q  && p>0){
                printf("%d",n);
                break;
                 }
     }
   }
}
