#include<stdio.h>
int main()
{
    long long int a[1000],count=0,i,j;
    for(i=0;i<4;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(a[i]>a[j])
               {
                   int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
               }
        }
    }
    for(i=0;i<4;i++)
    {
        if(a[i]==a[i+1]) count++;
    }
    printf("%lld\n",count);
    return 0;
}
