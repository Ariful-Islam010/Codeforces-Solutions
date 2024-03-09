#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,count=0;
    scanf("%d",&n);
    char ch[101];
    scanf(" %s",&ch);
    strupr(ch);
    int d=strlen(ch);
    for(i=0;i<d;i++)
    {
        for(j=i+1;j<d;j++)
        {
            if(ch[i]>ch[j])
            {
                int temp;
                temp=ch[i];
                ch[i]=ch[j];
                ch[j]=temp;
            }
        }
    }
    for(i=0;i<d;i++)
    {
        if(ch[i]!=ch[i+1]) count++;
    }
    if(count==26) printf("YES\n");
    else printf("N0\n");
    return 0;
}
