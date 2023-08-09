#include<stdio.h>
int main()
{
    int i,j,k=0;
    int n,t,p;
    scanf("%d",&t);
    for(i=0;i<t;i++)
        {

            scanf("%d",&n);
            p=2*n;
            int a[p];
            for(j=0;j<p;j++)
            {
                scanf("%d",&a[j]);
                if(a[j]%2==0)
                    k++;

            }
            if(k==n)
                printf("YES\n");
            else
                printf("NO\n");
            k=0;
        }
    }
