#include<bits/stdc++.h>
 using namespace std;
 int main(){
     int i,j,n,m,k=0,p=1,a=0;


     scanf("%d %d",&n,&m);
     for(i=1;i<=n;i++){
            k++;
        for(j=1;j<=m;j++){
               // printf("%d",k);

            if(i%2!=0){
                printf("#");
            }
                else{
                    if(4*p==k){
                            if(j==1){
                               // printf("nasir");

                               printf("#");
                                a++;
                            }
                            else{
                                printf(".");
                                //printf("nasir");
                            }
                       }
                      else{
                         if(j==m)printf("#");
                         else{
                                //printf("nasir");
                            printf(".");
                         }
                      }
                }


        }
        if(a==1){
        p++;
        a=0;
        }
        printf("\n");

     }

 }


