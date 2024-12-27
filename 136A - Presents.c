
#include<stdio.h>
int main()
{
   int n,m,i,j;
    int ch[1000];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     scanf("%d",&m);
     ch[m]=i;
    }
    for(j=1;j<=n;j++)
    {
        printf("%d ",ch[j]);
    }
    return 0;
}
