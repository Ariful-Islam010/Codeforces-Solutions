#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1000];
    gets(s1);
    int i,count=0,sum=0;
    for(i=0;s1[i]!='\0';i++)
    {
        if('A'<=s1[i] && 'Z'>=s1[i])
        {
            count++;
        }
        else if('a'<=s1[i] && 'z'>=s1[i])
        {
            sum++;
        }
    }
    if(count<=sum) printf("%s\n",strlwr(s1));
    else printf("%s\n",strupr(s1));
    return 0;
}
