#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j=0,s=0,n;
    scanf("%d",&n);
    for(i=1;;i++){
        s=s+i;
        if(n<s)
            break;
        n=n-s;
        j++;
    }
    printf("%d",j);
}

