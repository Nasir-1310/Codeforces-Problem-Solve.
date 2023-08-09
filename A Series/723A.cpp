#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,a,b,c,n;
    scanf("%d%d%d",&a,&b,&c);
    n=(a+b+c)/3;

    i=abs(n-a)+abs(n-b)+abs(n-c);
    printf("%d",i);
    }
