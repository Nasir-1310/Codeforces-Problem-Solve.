#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,k=1,n,m=0,p;
    char a[52],b[52];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        scanf("%s",a);

        b[0]=a[0];
        for(j=0;j<strlen(a)-1;j++){
            if(a[j]!=a[j+1]){
                b[k]=a[j+1];
                k++;
            }

        }
        b[k]='\0';
            k=1;
        sort(b,b+strlen(b));
        //puts(b);
        for(j=0;j<strlen(b)-1;j++){
            if(b[j]==b[j+1]){
                printf("NO\n");
                m++;
                break;
            }
        }
        if(m==0)
            printf("YES\n");
        m=0;
    }
}

