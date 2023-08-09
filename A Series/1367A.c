#include<stdio.h>
#include<string.h>

int main(){
    int i,j,k,l,t;
    char a[101],b[101];
    scanf("%d",&t);

    for(i=0;i<t;i++){
            scanf("%s",&a);
            l=strlen(a);
            b[0]=a[0];
            for(j=2,k=1;j<=l;j=j+2,k++)
                {
                if(j==l){

                    b[k]=a[l-1];
                    break;
                  }
                else{

                    b[k]=a[j];
                }

            }

            b[k+1]='\0';

            puts(b);
    }
}
