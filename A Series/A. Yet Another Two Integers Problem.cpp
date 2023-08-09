#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,t,p,q,r,n,m;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {

        scanf("%d%d",&n,&m);
        if(n>=m)
        {
            //printf("nasir\n");
            p=n-m;
            r=p/10;
            q=p%10;
           // printf("%d %d\n",p,q);
            if(q==0)
               printf("%d",r);
            else
                printf("%d",r+1);
        }
        else
        {
            p=m-n;
            r=p/10;
            q=p%10;
            if(q==0)
               printf("%d",r);
            else
                printf("%d",r+1);
        }
        printf("\n");
    }


return 0;

}
