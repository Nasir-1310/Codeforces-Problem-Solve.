#include<stdio.h>
int main(){
    int i,j,k;
    char a[201];
    gets(a);
    for(i=0;a[i];i++){
        if(a[i]=='.'){
            printf("0");
        }
        else if(a[i]=='-' && a[i+1]=='.'){
            printf("1");
            i++;
        }
        else if(a[i]=='-' && a[i+1]=='-'){
            printf("2");
            i++;
        }
    }
}
