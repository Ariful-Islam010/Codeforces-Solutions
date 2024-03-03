#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];
    gets(ch);
    int i,count=0;
    int duplicate[1000]={0};
    int d=strlen(ch);
    for(i=0;i<d;i++)
    {
     if(duplicate[ch[i]]==0)
    {
     count++;
    }
    duplicate[ch[i]]=1;
    }
    if(count%2==0) printf("CHAT WITH HER!\n");
    else if(count%2!=0) printf("IGNORE HIM!\n");
return 0;
}
