#include<stdio.h>
int main()
{
    int arr[10000];
    int n,p,q,i,count=0;
    scanf("%d", &n);
    scanf("%d", &p);
    for(i=0;i<p;i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &q);
    for(i=p;i<(p+q);i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        for (int j = 0; j < (p + q); j++) 
        {
            if (arr[j] == i) 
            {
                count++;
                break;
            }
        }
    }
    if(count>=n)
    {
        printf("I become the guy.\n");
    }
    else
    {
        printf("Oh, my keyboard!\n");
    }
    return 0;
}
