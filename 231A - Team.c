#include<stdio.h>
int main()
{
    int n,i,l,m,p,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&l,&m,&p);
        if((l==1&&m==1)||(l==1&&p==1)||(m==1&&p==1)||(l==1&&m==1&&p==1))
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
