#include<stdio.h>
int main()
{
    int i,j,n,p=0,q=0,k=0,l=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=i-1;j>=0;j--)
        {
            if(a[i]>a[j])
                k++;
            else if(a[i]<a[j])
                l++;
        }
        if(k==i)
            p++;
        else if(l==i)
            q++;

            k=0;
            l=0;


    }
    printf("%d\n",p+q);
}
