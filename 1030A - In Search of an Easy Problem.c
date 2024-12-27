#include<stdio.h>
int main()
{
    int i,n,array[1000],count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        if(array[i]==1)
        {
            count++;
            break;
        }
    }
    if(count>0) printf("HARD\n");
    else  printf("EASY\n");
    return 0;
}
