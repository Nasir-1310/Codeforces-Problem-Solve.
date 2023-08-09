#include<stdio.h>
int main(){
   int i,j,k=0,n;
   scanf("%d",&n);
   for(i=1;i<n;i++){
       if(n%i==0)
        k++;
   }
   printf("%d\n",k);
}
