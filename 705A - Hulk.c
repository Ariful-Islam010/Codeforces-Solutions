#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0 && i!=n ) printf("I hate that ");
        else if (i%2!=0 && i==n) printf("I hate it");
        else if(i%2==0 && i!=n) printf("I love that ");
        else printf("I love it");
    }
    return 0;
}
