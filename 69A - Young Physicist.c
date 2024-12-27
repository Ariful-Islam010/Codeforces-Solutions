#include<stdio.h>
int main()
{
    int n,a,b,c,i,xsum=0,ysum=0,zsum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        xsum+=a;
        ysum+=b;
        zsum+=c;
    }
    if(xsum==0 && ysum==0 & zsum==0) printf("YES\n");
    else printf("NO\n");
    return 0;
}
