#include<stdio.h>
int main()
{
    int i,j,n,a[1000],sum=0,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
     for(i=0;i<n;i++)
     {
        max+=a[i];
        if(max>(sum/2)) {
        printf("%d",i+1);
        break;}
     }
     return 0;

}
