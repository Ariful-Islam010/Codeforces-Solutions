#include<stdio.h>
#include<string.h>
int main()
{
    char ch[10000];
    gets(ch);
    ch[0]=toupper(ch[0]);
    printf("%s\n",ch);
    return 0;

}
