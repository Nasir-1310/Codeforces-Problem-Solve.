#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,j,k,l,n;
    scanf("%d",&n);
    for(;;){
            n++;
            i=n%10;
            j=(n%100)/10;
            k=(n%1000)/100;
            l=n/1000;

       if(i!=j&&i!=k&&j!=k&&l!=i&&l!=j&&l!=k) break;

        }



    printf("%d",n);
    }
