#include<stdio.h>
int main()
{
    long long int i,n,a[100000],count=0,max=1;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]>=a[i-1])
        {
            count++;
            if(count>max)
            {
                max=count;
            }
        }    
        else
        {
            count=1;
        }
    }
    printf("%lld", max);
    return 0;
}
