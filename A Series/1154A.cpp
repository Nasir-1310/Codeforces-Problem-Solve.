#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,n,m;
    scanf("%d%d%d%d",&a, &b,&c,&d);
    n=(b-c+a)/2;
    m=(c-b+a)/2;
    d=d-n-m;
    printf("%d %d %d",n,m,d);
    return 0;
}
