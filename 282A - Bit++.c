#include<stdio.h>
int main()
{
int i,x=0,n;
char ch[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%s",&ch);
    if(ch[1]=='+') x++;
    else x--;
}
printf("%d\n",x);
return 0;
}

