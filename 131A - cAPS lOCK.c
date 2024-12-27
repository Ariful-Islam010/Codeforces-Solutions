#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,count=1;
    char ch[1000];
    gets(ch);
    int d=strlen(ch);
    for(i=1;i<d;i++)
    {
     if(ch[i]>='A' && ch[i]<='Z')
     count++;
    }
    if((ch[0]>='a'&& ch[0]<='z') && count==d )
    {
        strlwr(ch);
        ch[0]=toupper(ch[0]);
        printf("%s",ch);
    }
    else if((ch[0]>='A' && ch[0]<='Z') && count==d)
    {
        strlwr(ch);
        printf("%s",ch);
    }
    else printf("%s",ch);
    return 0;
}
