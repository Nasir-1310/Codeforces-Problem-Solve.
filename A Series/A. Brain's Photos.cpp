#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k=0,n,m,t;
    scanf("%d%d",&n,&m);
    char a[n][m];
    for(i=0;i<n;i++){
            //printf("ppp\n");
        for(j=0;j<m;j++){
                getchar();
            scanf("%c",&a[i][j]);
           // getchar();
            // printf("nasir\n");
            if(a[i][j]=='B' || a[i][j]=='W'|| a[i][j]=='G'){
                k++;
            }
                }
        }

    //printf("%d\n",k);
    if(k==(n*m))
        printf("#Black&White");
    else
        printf("#Color");
}
