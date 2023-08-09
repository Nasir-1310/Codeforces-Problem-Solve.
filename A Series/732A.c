#include<stdio.h>
int main(){
    int k,r,i,p=1,q;
    scanf("%d%d",&k,&r);
    q=k;
    for(i=2;;i++){
        if(k%10==0||(k-r)%10==0){
            break;
        }
        else{
            k=k+q;
            p++;
        }
    }
    printf("%d",p);

}
