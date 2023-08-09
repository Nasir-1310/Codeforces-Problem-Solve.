#include<bits/stdc++.h>
using namespace std;
int main(){
int i,j,k,t,n,m,p=0;
scanf("%d",&t);
for(i=0;i<t;i++){
    scanf("%d",&n);
    int a[n];
    for(j=0;j<n;j++){
        scanf("%d",&a[j]);
    }
    sort(a,a+n);

      for(j=n-1;j>0;){
          m=a[j]-a[j-1];

        if(m!=0){
                p=p+m;

                for(k=j;k>=0;k--){
                    a[k-1]=a[k-1]+m;

                }

        }
        else
            j--;
      }
      printf("%d\n",p);

      p=0;
 }
}
