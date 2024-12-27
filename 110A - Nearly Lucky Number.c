#include<stdio.h>
int main()
{
    long long int n;
    int i=0,count=0,m;
    scanf("%lld",&n);
    while(n>0)
    {
        m=n%10;
        n=n/10;
        if(m==7 || m==4) count++;
    }
    if(count==7||count==4) printf("YES\n");
    else printf("NO\n");
    return 0;
}
