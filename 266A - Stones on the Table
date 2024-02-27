#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,count=0;
    scanf("%d",&n);
    char s1[100];
    for(i=0;i<n;i++)
    {
        scanf(" %c",&s1[i]);
    }
    int d=strlen(s1);
    for(i=0;i<d;i++)
    {
        if(s1[i]=='R' && s1[i+1]=='R') count++;
        else if(s1[i]=='G' && s1[i+1]=='G') count++;
        else if(s1[i]=='B' && s1[i+1]=='B') count++;
    }
    printf("%d\n",count);
    return 0;
}
