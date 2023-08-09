#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,t,x;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        x=((n%10)-1)*10;
        if(n/10<1)
            x=x+1;
        else if(n/100<1)
            x=x+3;
        else if(n/1000<1)
            x=x+6;
        else
            x=x+10;
        printf("%d\n",x);
    }
}
