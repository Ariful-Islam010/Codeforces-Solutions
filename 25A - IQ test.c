#include<stdio.h>
int main()
{
    int n,i,a[1000],even=0,odd=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]%2==0) even++;
        else if(a[i]%2!=0) odd++;
    }
    if(even>odd)
    {
        for(i=1;i<=n;i++)
        {
            if(a[i]%2!=0) printf("%d",i);
        }
    }
     if(even<odd)
    {
        for(i=1;i<=n;i++)
        {
            if(a[i]%2==0) printf("%d",i);
        }
    }
    return 0;
}
