#include<stdio.h>l
int main()
{
    int i,j,s1=0,s2=0,t;
    char a[6];
    scanf("%d",&t);
    //getchar();
    for(i=0;i<t;i++)
    {
          getchar();
        gets(a);
        //scanf("%s",a);
          getchar();

            s1=a[0]+a[1]+a[2]-3*'0';
            s2=a[3]+a[4]+a[5]-3*'0';
            printf("%d%d\n",s1,s2);
           if(s1==s2)
            printf("YES\n");
           else
            printf("NO\n");
           s1=0;s2=0;


    }




}
