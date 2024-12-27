#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char s1[1001];
    scanf("%d",&n);
    getchar();
 
    for(i=0;i<n;i++)
    {
        gets(s1);
     int d=strlen(s1);
 
     if(d>10)
     {
         printf("%c%d%c\n",s1[0],d-2,s1[d-1]);
     }
    else
    {
        printf("%s\n",s1);
    }
    }
    return 0;
}
