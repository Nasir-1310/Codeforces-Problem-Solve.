#include<stdio.h>
int main()
{
    int n,k,l,c,d,p,nl,np;
    scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);
    l=k*l;
    d=c*d;

    l=l/nl;
    p=p/np;

    l=l/n;
    d=d/n;
    p=p/n;
    if(l<=d && l<=p)
        printf("%d\n",l);
    else if(d<=l && d<=p)
        printf("%d\n",d);
    else
        printf("%d\n",p);

}

