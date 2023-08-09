#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,t,l=0;
    char a[101];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%s",a);
        if(strlen(a)%2!=0)
            printf("NO\n");
        else {
            for(j=0,k=(strlen(a)/2);j<(strlen(a))/2;j++,k++){
                if(a[j]==a[k])
                l++;
            }

            if(l==(strlen(a))/2)
                printf("YES\n");
            else
                printf("NO\n");
        }
        l=0;
    }
    }
