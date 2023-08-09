#include<stdio.h>
int main(){
    int i,j,k,n,t;
   // char a[51];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        char a[n];
        scanf("%s",a);
        for(j=0;j<strlen(a);j++){
                if(r==0){
            for(k=0;k<strlen(a);k++){
                if(a[i]==a[j]){
                    if(q==0){
                    p++;
                    }
                    else{
                        printf("NO\n");
                        r++;
                        break;
                    }

                }
                else {
                    q++;
                }
            }
        }
        else{
            r==0;
            break;
        }

    }
  }
}
