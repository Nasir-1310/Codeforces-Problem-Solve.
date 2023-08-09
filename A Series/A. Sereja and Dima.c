#include<stdio.h>
int main()
{
    int i,j,n,sum=0,k,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0,j=n-1,k=0;k<n;k++)
    {
        if(a[i]>a[j] && k%2==0)
        {
            s=s+a[i];
            i++;
        }
        else if(a[i]<=a[j] && k%2==0)
        {
            s=s+a[j];
            j--;
        }
        else if(a[i]>a[j] && k%2!=0)
        {
            sum=sum+a[i];
            i++;
        }
        else if(a[i]<=a[j] && k%2!=0)
        {
            sum=sum+a[j];
           j--;
        }


    }
    printf("%d %d\n",s,sum);

}
