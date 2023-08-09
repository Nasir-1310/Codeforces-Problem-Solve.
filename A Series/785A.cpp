
#include<bits/stdc++.h>
 using namespace std;
 int main(){
     int i,j,n,k=0;
     char a[500];

     scanf("%d",&n);
     for(i=0;i<n;i++){
        scanf("%s",&a);
        if(strcmp(a,"Tetrahedron")==0)
            k=k+4;
        else if(strcmp(a,"Cube")==0)
            k=k+6;
        else if(strcmp(a,"Octahedron")==0)
            k=k+8;
        else if(strcmp(a,"Dodecahedron")==0)
            k=k+12;
        else if(strcmp(a,"Icosahedron")==0)
            k=k+20;
     }
     printf("%d",k);
 }




