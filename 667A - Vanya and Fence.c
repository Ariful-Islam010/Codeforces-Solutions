#include<stdio.h>
int main()
{
    long long int n,h,i,height[10000],width=0;
    scanf("%lld %lld",&n,&h);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&height[i]);
    }
    for(i=1;i<=n;i++)
    {
    if(height[i]>h) width+=2;
    else width++;
    }
    printf("%lld\n",width);
    return 0;
}
