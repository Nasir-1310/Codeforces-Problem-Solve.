#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j=0,k=0,n;
    char a[56];
    char b[56];
    scanf("%d",&n);
    scanf("%s",&a);
    for(i=0;i<n;i=i+k){
        b[j]=a[i];
        k++;
        j++;
    }
    b[j]='\0';
    puts(b);
}
