#include<stdio.h>
int main(){
    int i,j=0,k,n;
    char a[200],b[200];
    gets(a);
    for(i=0;i<strlen(a);i++){
        if(a[i]>='A'&& a[i]<='Z')
            a[i]=a[i]+32;
    }
    for(i=0;i<strlen(a);i++){
        if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='y'){
            b[j]='.';
            b[j+1]=a[i];
            j=j+2;
    }
    }
    b[j]='\0';
    puts(b);
}
