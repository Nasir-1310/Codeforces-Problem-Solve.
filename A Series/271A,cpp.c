#include<bits/stdc++.h>
int main(){
    char a[5];
    gets(a);
    int i,j,k;
    for(;;){
        if(a[0]!=a[1]&&a[0]!=a[2]&&a[1]!=a[2]&&a[0]!=a[3]&&a[1]!=a[3]&&a[2]!=a[3])
            break;
        else{
            if(a[3]!='9'){
                a[3]=a[3]+1;
            }
            else{
                if(a[2]!='9'){
                        a[0]='0';
                        a[2]=a[2]+1;
                }
                else {
                    if(a[1]!='9'){
                        a[2]='0';
                        a[1]=a[1]+1;
                    }
                    else {
                        s[2]='0';
                        a[1]='0';
                        a[0]=a[0]+1;
                    }
                }
            }
        }
    }
    puts(a);
    }
