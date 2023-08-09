#include<bits/stdc++.h>
 using namespace std;
 int main(){
     int i,j,n,k=0;
     char a[1001];
     gets(a);
     sort(a,a+strlen(a));
    // puts(a);
     for(i=0;i<strlen(a)-1;i++){
        if(a[i]!=' ' && a[i]!='}' && a[i]!='{' && a[i]!=',' && a[i]!=a[i+1])
            k++;
     }
     printf("%d",k);


     }
