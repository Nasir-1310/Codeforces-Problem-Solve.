#include<stdio.h>
int main()
{
    int i,j,t,n,sum=0,k=0,l=0;
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
        if(n%2!=0 && l==n)
            printf("YES\n");
        else if(k!=n && l!=n)
            printf("YES\n");
        else
            printf("NO\n");
        k=0;
        l=0;

    }
}




