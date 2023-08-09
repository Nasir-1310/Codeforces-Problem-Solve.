#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,k=0,n,t,l=0;
     char a[50];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%s",&a);
        n=strlen(a);
     if(n==1 || (n==2 && a[0]!=a[1])){
        printf("NO\n");
        k++;
        l++;
     }
     if(k==0)
      for(j=0;j<n-2;j++){
        if((a[j]!=a[j+1] && a[j+1]!=a[j+2])||(a[0]!=a[1]) ||(a[strlen(a)-1]!=a[strlen(a)-2])){
            printf("NO\n");
            l++;
            break;
        }
     }
     if(l==0)
        printf("YES\n");

     k=0;
     l=0;
     }
}
