#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[1000],b[1000];
    gets(a);
    gets(b);
    int d=strlen(a);
    for(i=0;i<d;i++)
    {
        if(a[i]==b[i]) a[i]='0';
        else a[i]='1';
    }
    for(i=0;i<d;i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}
