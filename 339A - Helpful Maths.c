#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char s[1000];
    gets(s);
    int d=strlen(s);
    for(i=0;i<d;i++)
    {
        for(j=i+2;j<d;j+=2)
        {
            if(s[i]>s[j])
            {
                int temp;
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    for(i=0;i<d;i++)
    {
        printf("%c",s[i]);
    }
    return 0;
}
