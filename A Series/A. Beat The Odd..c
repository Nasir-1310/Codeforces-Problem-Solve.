#include<stdio.h>
int main()
{
    int i,j,k=0,l=0,t,n;

    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
         int a[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]%2==0)
            k++;
            else
                l++;


        }
        if(k>l)
            printf("%d\n",l);
        else
            printf("%d\n",k);
        k=0;l=0;
    }

}
