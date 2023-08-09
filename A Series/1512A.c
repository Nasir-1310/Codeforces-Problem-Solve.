#include<stdio.h>
int main(){
    int i,j,k,n,t,a[100];
    scanf("%d",&t);
    for(i=0;i<t;i++){
            scanf("%d",&n);
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        for(k=0;k<n-2;k++){
            if(a[k]!=a[k+1] && a[k+1]!=a[k+2]){
                printf("%d\n",k+2);
                break;
            }
            else if(a[k]!=a[k+1] && a[k+1]==a[k+2]){
                printf("%d\n",k+1);
                break;

            }
            else if(a[k]==a[k+1] && a[k+1]!=a[k+2]){
                printf("%d\n",k+3);
                break;
            }

        }
    }
    return 0;
}
