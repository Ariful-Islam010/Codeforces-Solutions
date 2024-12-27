#include<stdio.h>
int main()
{
    int lweight,bweight,i,count=0;
    scanf("%d %d",&lweight,&bweight);
    for(i=1;lweight<=bweight;i++)
    {
        lweight=lweight*3*i;
        bweight=bweight*2*i;
        count++;
    }
    printf("%d\n",count);
    return 0;
}
