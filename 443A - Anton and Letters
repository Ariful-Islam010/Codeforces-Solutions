#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0;
    char ch[1000];
    gets(ch);
    int repeat[200]={0};
    for(i=0;i<strlen(ch);i++)
    {
        if((ch[i]>='a' && ch[i]<='z') && repeat[ch[i]]==0)
        {
           count++;
        }
         repeat[ch[i]]=1;
    }
    printf("%d\n",count);
    return 0;
}
