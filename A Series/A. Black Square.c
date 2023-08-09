#include<stdio.h>
int main(){
    int i,j,k,a[4],sum=0;
    char b[100000];
    scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]);
    scanf("%s",b);


    for(i=0;b[i];i++){
        j=b[i];

        sum=sum+a[j-49];

    }
    printf("%d\n",sum);
}

