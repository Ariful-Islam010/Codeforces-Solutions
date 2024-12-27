
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s[1000];
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            i++;
            i++;
            printf(" ");
        }
        else printf("%c",s[i]);
    }
    return 0;
}
