#include<bits/stdc++.h>
using namespace std;
int main(){
   int i,j,k,n,p=0,sum=0;
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);

    sum=sum+a[i];

   }
   sort(a,a+n);

   for(i=0;i<n;i++){
   printf("%d\n",a[i]);
   }
   printf("\n\n");
   for(j=n-2;j>=0;j=j-2){
       printf("%d\n",a[j]);

    p=p+a[j];
   }
   printf("\n\n%d %d\n",p,sum-p);
}

