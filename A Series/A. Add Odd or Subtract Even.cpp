#include<bits/stdc++.h>
using namespace std;
int main(){
     int i,j,t,a,b,p,n;
     scanf("%d",&t);
     for(i=0;i<t;i++){
        scanf("%d%d",&a,&b);
        if(a==b)
            printf("0\n");
        else if(a<b){
            p=b-a;
            if(p%2==0)
                printf("2\n");
            else
            printf("1\n");
        }
        else{
            p=a-b;
            if(p%2==0){
                printf("1\n");
            }
            else
                printf("2\n");
        }

     }
}
