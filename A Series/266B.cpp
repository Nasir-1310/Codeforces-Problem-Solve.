#include<bits/stdc++.h>
int main(){
    int i,j,t,n;

    scanf("%d",&n);
    char a[n+1],b[n+1],ch;

    scanf("%d",&t);
    getchar();
    gets(a);
    for(j=0;j<t;j++){
    for(i=0;i<n-1;i++){
        if(a[i]!=a[i+1] && a[i]=='B'&& a[i+1]=='G'){
            ch=a[i];
            b[i]=a[i+1];
            b[i+1]=ch;
        }
          else {
            b[i]=a[i];
           // b[i+1]=a[i+1];
          }
        }
        }


    puts(b);
    }
