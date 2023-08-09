#include<stdio.h>
int main()
{
    int i,j,k,l=0,n,m,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int a[n],b[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);

        }
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[j]);
            if(b[j]==0)
                m=a[j];

        }
        for(j=0;j<n;j++)
        {
            if(b[j]!=0 && a[j]>=b[j])
            {
                k=(a[j]-b[j]);
                break;
            }
        }
       /* for(j=0;j<n;j++)
        {
            printf("nasir\n");
            if(b[j]==0)
                m=a[j];
                break;
        }*/
     for(j=0;j<n;j++)
     {
         if(b[j]>a[j])
         {
            // printf("nasir\n");
             printf("NO\n");
             l++;
             break;
         }
        if(b[j]!=0)
         {
             if((k!=a[j]-b[j]))
             {
                // printf("nasir\n");
                printf("NO\n");
                l++;
                break;
             }

         }




    }
    //printf("%d %d\n",k,m);
    if(m>k && l==0 && n!=1)
         {
             //printf("nasir\n");
             printf("NO\n");
             l++;
         }

    if(l==0)
        printf("YES\n");
       l=0;
    }
}
