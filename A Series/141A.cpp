
#include<bits/stdc++.h>
 using namespace std;
 int main(){
     int i,j,n,k=0;
     char a[500],b[101],c[500];
     gets(a);
     gets(b);
     gets(c);
     strcat(a,b);
     sort(a,a+strlen(a));
     sort(c,c+strlen(c));
     n=strcmp(a,c);
     if(n==0)
        printf("YES");
     else
        printf("NO");


     }
