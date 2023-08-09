#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,t,m,l=0;
    char a[6];
    scanf("%d",&t);
    m=t;

    for(i=0;i<t;i++){
        scanf("%s",&a);
        for(j=0;j<6;j++){
            if(a[j]=='R'||a[j]=='B'||a[j]=='G'){
                a[j]=a[j]+32;
               // printf("%d %c\n",j+1,a[j]);
                for(k=j-1;k>=0;k--){
                    if(a[j]==a[k]){
                        l++;
                        //printf("%d\n",l);
                        break;
                    }
                }
            }

        }
            if(l==3)
                printf("YES\n");
            else
                printf("NO\n");
            l=0;
            t=m;
            //printf("%d  %d\n",i,t);
    }
}
